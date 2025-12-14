/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 ^= ((((var_16 ? var_0 : 2) ^ var_13)));
                            arr_17 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = (((min(-9223372036854775807, -2298656782874032728)) <= (arr_13 [i_0] [i_0])));
                            var_20 &= (min((-1 == -1756278147993632020), (max(((((arr_8 [i_0] [i_0] [i_0] [i_0]) || (arr_5 [i_2] [i_2] [i_2])))), var_15))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_21 = (((arr_5 [i_2 - 2] [i_1 - 2] [i_1 + 1]) ? ((min((arr_5 [i_2 + 1] [i_1 + 1] [i_1 - 2]), (arr_5 [i_2 - 1] [i_1 - 1] [i_1 - 2])))) : (arr_5 [i_2 - 3] [i_1 + 1] [i_1 - 2])));
                            arr_21 [i_2] = (110 ? -9223372036854775806 : 107);
                            arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [i_0] = ((((var_16 % (arr_11 [i_1 + 1] [i_1] [i_1])))) ? ((((((139 ? var_11 : var_15)) < 46)))) : (arr_2 [i_0] [i_0]));
                        }
                        var_22 = (max(var_22, (((159 < (min(74, var_11)))))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 += max((-3446459793286199180 >= 9223372036854775805), (arr_15 [i_1] [i_1] [i_1]));
                        var_24 = (((min(253, (min(var_18, var_8)))) ^ (((arr_19 [i_2 - 1] [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_0]) - var_14))));
                        arr_27 [i_2] [i_2] [i_2] [i_2] = 9020919048056303890;
                        var_25 *= ((((min(143547953522891332, (arr_14 [i_1] [i_1] [i_1 - 1] [i_1])))) ? ((-143547953522891332 - (min(var_14, var_9)))) : (((arr_20 [i_0] [i_6] [i_0]) ^ (arr_23 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    var_26 = (arr_12 [i_1 + 1] [i_1 + 1]);
                    arr_28 [i_0] [i_1] [i_1] [i_0] &= ((((min((((!(arr_23 [i_0] [i_0] [i_0] [i_0])))), 65))) && 666824412326216619));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_27 = (min(var_14, (!244)));
                                arr_39 [i_8] = arr_34 [i_8] [i_7] [i_7] [i_8];
                                arr_40 [i_7] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] = ((var_2 && (((arr_38 [i_8] [i_9] [i_8] [i_8]) || var_7))));
                                arr_41 [i_8] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((-1 >= ((212 ? 71 : -143547953522891333))));
                            }
                        }
                    }
                    arr_42 [i_8] [i_8] [i_8] = var_3;
                    var_28 = var_16;
                }
                arr_43 [i_8] [i_7] [i_8] = (min((((arr_30 [i_7]) || -4132768961537068982)), ((2360511742926302766 <= (arr_37 [i_8] [i_7] [i_7] [i_7] [i_7] [i_7] [i_8])))));
            }
        }
    }
    var_29 = ((var_10 ? 242 : var_18));
    #pragma endscop
}
