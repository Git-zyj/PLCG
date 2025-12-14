/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max((var_11 / 849637086), (max(var_6, var_4)))), var_12));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 |= ((((min(((min(65535, 39324))), var_15))) ? ((min(65531, var_13))) : ((56971 ? (((((arr_1 [i_0] [i_0]) || var_9)))) : (arr_1 [i_0] [i_0 + 2])))));
        arr_3 [i_0] &= ((!(!var_19)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_22 = ((((65535 ? 18273324653083350939 : -110)) ^ (((+(((arr_2 [i_1] [i_1]) ? 724987495 : (-9223372036854775807 - 1))))))));
        arr_6 [i_1] |= 1632006340;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_23 ^= (max((max((arr_4 [i_1] [i_2]), 724987495)), var_11));
            var_24 = ((((((var_10 - (arr_10 [i_2]))) * (arr_1 [i_1] [i_2]))) / (((((var_10 ? var_9 : var_2))) ? (((max(-39, 93)))) : (arr_4 [i_1] [i_1])))));
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 = (arr_1 [i_3 + 1] [i_3 - 2]);
                        arr_22 [i_3] [i_6] [i_5] [i_6] = (((((((var_9 ? (arr_5 [i_3]) : -724987471)) * (((arr_1 [i_4] [i_4]) ? var_0 : var_15))))) && ((!(arr_20 [i_3] [i_3] [i_3] [i_3 + 1])))));
                        var_26 *= 1;
                    }
                }
            }
            arr_23 [i_4] [i_3] [i_3] = var_15;
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_7] [i_3] = ((arr_15 [i_7]) ? ((1759279165 | (arr_15 [i_3 - 1]))) : ((min(8572, (arr_15 [i_3 + 1])))));
            var_27 *= max((min(858603147961375776, -86)), (1 & 10548186706313484952));
            arr_29 [i_3] = (!var_9);
        }
        arr_30 [i_3] = (2898528589901542173 ? (max((arr_7 [6]), (arr_1 [i_3] [i_3]))) : -var_19);
        var_28 = 8730595253709347448;
        arr_31 [i_3] = (arr_20 [i_3 + 1] [i_3] [i_3] [i_3]);
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] [i_8] = ((((arr_12 [i_8 - 2] [i_8]) % 1)));
        var_29 += (min(((((((max((arr_11 [i_8]), var_19)))) != (min((arr_34 [i_8] [i_8 + 1]), var_1))))), (((((arr_21 [1]) >> 1)) * ((((arr_25 [i_8] [i_8]) == 51681)))))));
        arr_36 [i_8] = var_7;
    }
    #pragma endscop
}
