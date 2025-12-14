/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 -= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] |= ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)))));
        var_18 = min((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (((max(56313, 6))));
        var_19 = (-1903844629 || -21612);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_20 = ((var_6 ? (arr_1 [i_3]) : (--4294967295)));
                                var_21 = (max(0, (((~var_8) ? (~2) : 0))));
                                var_22 = ((+(((arr_5 [i_3]) ? -11096 : (arr_5 [i_4])))));
                            }
                        }
                    }
                }
                var_23 = var_15;
            }
        }
    }
    var_24 = -1;
    var_25 = (min(var_25, var_14));
    #pragma endscop
}
