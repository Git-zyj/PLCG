/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((88 ? ((var_17 ^ (arr_5 [i_1 + 2]))) : (arr_4 [i_0 - 2] [i_1 - 2] [i_2] [i_2])));
                    var_21 = ((((var_6 ? 23241 : 88)) >= ((-(arr_6 [i_0 + 1] [i_0 - 3] [i_1 - 1])))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_22 ^= ((((((-23264 / 1473133468) * (!18212135673351938195)))) % (max((234608400357613406 >> var_17), -1))));
                        var_23 += (max((!-23264), ((-88 ? 1 : (arr_5 [i_0 - 2])))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_24 = (max((((841312189 ? -1473133476 : ((~(arr_7 [i_3])))))), 18212135673351938182));
                            arr_11 [i_0 - 2] [i_1 - 2] [i_2] [i_3 + 2] [i_4] = (-1473133453 ? 1 : var_8);
                            var_25 = 841312195;
                        }
                        var_26 ^= (~var_0);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_27 ^= ((-((841312189 << (((min(5760699136888780843, var_0)) - 3839))))));
                        var_28 ^= (min((min(var_14, ((var_5 | (arr_6 [i_0 - 3] [i_0 - 3] [i_5]))))), (!1)));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_29 += ((var_10 ^ ((((1 ? var_6 : (arr_17 [i_0 + 1] [i_0] [i_1] [i_1] [i_2] [i_1])))))));
                        arr_19 [10] [9] [i_1] [9] = ((((!(!32761))) ? ((((arr_0 [i_1 + 1]) != var_1))) : ((max(0, (arr_17 [i_1 + 1] [i_1] [i_2] [i_0 - 1] [i_1] [23]))))));
                    }
                }
            }
        }
    }
    var_30 = (min(var_14, var_11));
    #pragma endscop
}
