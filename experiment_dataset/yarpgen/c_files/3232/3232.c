/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(!var_7)));
    var_14 = (max(var_14, 0));
    var_15 = (!9223372036854775799);
    var_16 = (((!var_12) < ((var_5 ? (min(580913055, var_8)) : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 ^= (min(1975258582772881572, (((!(((1975258582772881572 ? var_1 : 9223372036854775807))))))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = (((arr_2 [i_3 - 1]) ? (((~(arr_2 [i_2])))) : ((var_10 ? (arr_2 [i_1]) : 16471485490936670032))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = (!2147483647);
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_0] = var_2;
                            arr_18 [i_3] [i_0] [i_0] [i_3] = ((((min(((max(42171, var_5))), var_10))) ? ((-87 ? ((var_3 ? (arr_8 [i_0] [i_1] [i_3 - 1] [i_0] [i_0] [i_0]) : var_4)) : ((((arr_0 [i_0] [i_2]) ? -7127005491989572476 : -76))))) : ((min(((14339 ? var_5 : 1)), (!238))))));
                            var_18 = ((-1225834235 ? ((-var_5 ? ((var_4 ? var_10 : 1975258582772881584)) : (109 - -26))) : var_7));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_19 = (var_7 ? ((min(var_2, (min(var_7, -1373005550222333651))))) : ((((min(1975258582772881596, var_9))) ? (max(var_7, 16471485490936670038)) : (max(16471485490936670038, var_6)))));
                            var_20 ^= ((!((!(((var_12 ? -31 : 10137776551926447813)))))));
                        }
                        arr_23 [i_3] [i_3 - 1] = (var_9 ? var_3 : (arr_19 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1]));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_21 = (var_1 < var_6);

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((arr_25 [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 - 1]) ? ((var_9 ? (arr_20 [i_0] [i_0] [i_0] [i_7] [i_8 - 1]) : var_1)) : ((106 ? (arr_11 [i_0] [i_0] [0] [0] [i_0]) : var_3))));
                            var_22 = (((26 < var_1) ? ((var_5 ? 32767 : 16471485490936670045)) : 1));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_2] [i_8 + 2] [i_2] [i_8]);
                            var_23 = 1975258582772881578;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
