/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 |= ((((260096 ? var_7 : (var_8 >= var_7))) >= (((!(var_5 && 23665))))));
                var_14 = (arr_0 [i_0]);
                var_15 -= (((!var_8) ? ((((min(var_4, (arr_1 [i_0]))) == (arr_4 [6])))) : (arr_2 [i_1])));
            }
        }
    }
    var_16 = (var_2 ? 118 : (2412313727514986755 - var_11));
    var_17 = (max(var_17, (((var_7 ? -1 : 11711)))));
    #pragma endscop
}
