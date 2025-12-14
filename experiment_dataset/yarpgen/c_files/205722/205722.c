/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((~var_0), (11867 <= 77)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 ^= var_8;
                var_12 = 179;
                var_13 = (min(var_13, ((((-183 - (var_8 + var_2)))))));
                var_14 = (max(((~((var_1 ? 90 : var_3)))), (88 & -9651)));
            }
        }
    }
    var_15 -= (73 / var_3);
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_13 [i_4] = var_9;
                    var_16 = (var_5 - -1306621226);
                }
                var_17 = (((max(9651, 77))) | (max((arr_6 [i_2] [i_2]), 86)));
                var_18 = ((((-(~-9651)))) ? ((21283 | (arr_10 [i_2 + 3]))) : ((((~-1306621251) < -792))));
            }
        }
    }
    #pragma endscop
}
