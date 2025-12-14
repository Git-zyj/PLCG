/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? ((min(var_8, ((39077 ? 145993939684915011 : var_3))))) : ((var_2 ? ((var_1 ? 0 : var_0)) : var_6))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (((((min((arr_2 [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_2 - 1])))) ? ((max(var_4, 2507444215))) : var_9)));
                    arr_7 [i_0] [i_0] [i_1] [i_2] |= ((1 * (((arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 1]) - (arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 += var_6;
                                var_16 = (max(var_16, (arr_1 [i_1])));
                                var_17 = ((min(3217697720, (arr_8 [i_2 - 2] [i_2 + 1]))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_0] [i_5] [i_5] = (arr_3 [i_0]);
            var_18 = (min(var_18, (((((max(0, (arr_9 [i_0])))) >> (((max((arr_4 [i_0] [i_5]), 349988520)) - 16866272341001846207)))))));
            var_19 ^= ((40731 - (((min(3944978776, (arr_14 [i_0] [i_0]))) + (((0 ? 1 : (arr_0 [i_5]))))))));
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 = (max(((max(var_10, (arr_20 [i_6] [i_6])))), 2097864992636245055));
        var_21 = (((var_4 == var_6) != (1 & 0)));
    }
    #pragma endscop
}
