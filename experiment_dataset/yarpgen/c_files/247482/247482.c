/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((var_12 | (((((max(49326, -7)) < (~var_11)))))))));
                        var_15 = ((((((((12165 ? 3958338034 : -888106128))) ? (((arr_8 [i_2]) ? 255 : (arr_3 [i_0] [i_2]))) : 9))) ? ((var_6 ? (arr_8 [i_0]) : (arr_8 [i_1]))) : var_11));
                        var_16 = (max(var_16, (((min((!var_3), -0))))));
                        var_17 = ((~((~((var_0 ? 312038878 : (arr_2 [i_2])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 *= ((~((((arr_4 [1] [i_1] [i_2]) ? 0 : -123)))));
                            arr_14 [i_2] [i_1] [i_1] [i_2] [i_2] = (((arr_5 [i_2] [i_3]) - ((((!10332) >= ((((arr_13 [i_1] [i_1]) && (arr_8 [i_1])))))))));
                            var_19 = (min(var_19, (((!((min(var_2, 89))))))));
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [10] = var_4;
                            var_20 += (min((((-(min((arr_13 [i_3] [i_3]), var_7))))), ((~(arr_1 [i_0])))));
                        }
                    }
                    var_21 = var_7;
                    var_22 = (((((((17418113179013089034 && var_2) || (4294967290 < 3331884267287582281))))) * ((((var_12 ? var_0 : -1485889695)) + (((var_13 ? var_10 : -3331884267287582281)))))));
                }
            }
        }
    }
    var_23 = (~var_10);
    var_24 = 1028630894696462581;
    var_25 = (max(var_25, var_4));
    var_26 -= ((3589237670 & (max(-3331884267287582296, var_4))));
    #pragma endscop
}
