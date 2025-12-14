/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 || (-37 / 3063595058)));
    var_20 = ((var_8 || (((~(var_17 && var_7))))));
    var_21 = (-219234762 ^ 1659249546962003561);
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1 - 1] [i_2] = (max((max((min(88, 969682475)), 2091110693)), 3429257517));
                    arr_9 [i_0] [i_1] = ((((((((arr_7 [i_2] [i_2] [i_0] [i_0]) ^ 3978997342)) & (~0)))) + (min(7072102997893789697, 865142773))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((~(((1 || (89876127556557532 << 1))))));
                }

                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    var_23 = (!-108);

                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_3 - 3] [i_4 - 1] [i_4] = (((~73) <= ((-(arr_13 [i_1 + 4] [i_4 - 1] [i_3 + 2])))));
                        arr_18 [i_0] [i_0] [i_4] [i_4 - 3] = (((3429257506 / 1) + (arr_15 [i_0] [0] [i_0] [i_4] [i_4])));
                    }
                    arr_19 [i_1 + 3] &= ((((0 / (min(var_6, var_14)))) < (((((252 + var_12) && (-108 + var_6)))))));
                    var_24 -= (((((-83 | (((arr_11 [i_0]) & (arr_5 [i_0])))))) ^ (~-13711)));
                    var_25 ^= (((max(var_0, (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_3]) / var_6)))) % (((1086253891 ? 60 : 3788860852)))));
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] = (((((!(var_18 + var_12)))) + (min((arr_14 [i_0] [i_0] [i_0] [i_0]), 0))));
                            var_26 = (min(var_26, ((max(104, -83)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
