/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((var_5 * (arr_4 [i_0 - 1] [i_0])))) ^ ((-(arr_5 [i_0] [i_0 + 1] [i_0])))));
                arr_7 [i_0] [6] [i_1] &= (((64980 && (arr_2 [i_0] [i_0 - 1] [i_0 - 2]))));
            }
        }
    }
    var_14 = (~(((!(((var_6 ? -1599199784373148804 : var_8)))))));
    var_15 = var_11;
    #pragma endscop
}
