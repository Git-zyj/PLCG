/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_10 / -3760562957166125237) >> ((((-3760562957166125257 ? var_8 : -3760562957166125237)) - 536))))) ? (((((min(var_10, var_1))) ? var_3 : var_7))) : (max(var_11, ((var_8 ? var_10 : var_2))))));
    var_13 = var_11;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = 37;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_14 = (!-var_8);
                            arr_17 [i_0] [i_0 + 1] [i_1] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1] = (-((var_2 / (arr_0 [i_2 + 2] [i_2 - 2]))));
                        }
                        var_15 = var_2;
                    }
                }
            }
        }
        arr_18 [i_0] = (max(((-var_10 ? -218 : var_8)), (((((max(-3760562957166125237, (arr_10 [i_0] [i_0 - 1])))) ? (arr_1 [i_0] [i_0 + 1]) : ((218 * (arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            {
                var_16 = (max((((((arr_19 [i_5]) >= (arr_22 [i_5] [i_5] [i_5]))) ? var_10 : (((var_8 | (arr_21 [i_6] [i_6] [i_6])))))), var_5));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            arr_30 [i_5] [i_6] [i_5] [i_5] = var_3;
                            var_17 = (min(((3760562957166125228 >> (!34))), (((-3760562957166125231 + 199) ? -9223372036854775807 : ((3760562957166125231 - (arr_21 [i_6] [i_6] [i_6])))))));
                            arr_31 [i_5] [i_5] [i_5] [i_6] = (219 >= 1620405000382710848);
                        }
                    }
                }
                arr_32 [i_6] = (arr_22 [i_6] [i_6] [i_6]);
                var_18 = 219;
            }
        }
    }
    #pragma endscop
}
