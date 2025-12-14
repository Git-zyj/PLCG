/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_8 ? var_3 : (!var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (22269 || var_6);
                var_15 -= ((3327970757 ? -22269 : 3131));
                arr_7 [i_1] [i_1] [i_1] = var_2;
                var_16 = var_4;
                var_17 = ((((((arr_2 [i_0 + 1] [i_1]) ? (arr_2 [i_0 - 3] [4]) : 32767))) || ((min((arr_2 [i_1] [i_0]), (arr_3 [i_0 + 2] [i_0 + 2] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
