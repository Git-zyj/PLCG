/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-(~1))) >> (((~1) + 32))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_2));
                    arr_8 [1] [i_1] [i_0] [i_2] = (!1);
                    arr_9 [i_0 - 1] [i_0] [1] = (!35330);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_21 += ((((min(var_4, (246 | var_1)))) ? (~var_4) : (((min(1, 1))))));
                        var_22 ^= (~127);
                        var_23 = ((((min(var_16, -var_15))) != 18));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_24 = (~12);
                        arr_23 [i_7] [i_5] [i_5] [i_3] = var_14;
                        var_25 = max(1, (((max(var_10, 1)) * (((max(var_5, 1)))))));
                        var_26 = ((var_8 >> (103 - 78)));
                        var_27 ^= (min(((2015086398 ? 3225462768 : var_12)), 1));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_27 [i_5] = ((1 ? (1 < 1) : -var_10));
                        var_28 = (!251424548);
                    }
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_29 = (max(var_29, (((((max(((max(var_15, var_9))), (2 / 1)))) ? (((!(~var_17)))) : var_18)))));
                        var_30 -= (min(((1 ? 1 : ((min(-8748, var_11))))), (!54971)));
                        var_31 = (1 / ((96 ? 10 : (var_18 != var_15))));
                    }
                    var_32 = (max(var_32, (((((((1 * var_2) != -1))) * ((-(1 >= 2219736109743414267))))))));
                }
            }
        }
    }
    #pragma endscop
}
