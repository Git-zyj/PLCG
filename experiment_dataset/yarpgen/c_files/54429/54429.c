/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_11 = (((max((arr_8 [i_3 - 1] [i_1] [i_2] [i_3] [i_0] [i_1]), (arr_8 [i_3 - 2] [i_1] [i_2] [i_3] [i_3] [i_2]))) / ((max((arr_5 [i_3 - 1] [i_3] [i_3] [i_3]), (arr_7 [i_0] [i_0 - 1] [i_2] [i_1] [i_3]))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_12 = ((((min(-1, -5))) <= ((((max((arr_5 [i_4] [i_3] [i_2] [i_0]), var_3))) ? -1 : ((-1 ? -3163200064600694377 : -19))))));
                            var_13 += (arr_5 [i_0] [i_0] [i_0] [i_0]);
                        }

                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_15 [i_3] = ((!(-11 >= var_0)));
                            var_14 = (((((((arr_10 [i_5] [i_3] [i_2] [i_1] [i_0]) == (arr_12 [i_3] [i_3] [i_3 - 1] [i_5 + 2]))))) <= ((var_3 ? 10 : (((arr_12 [i_0] [i_2] [i_3] [i_5]) ? 11368 : 3163200064600694377))))));
                            var_15 += arr_14 [i_0] [i_3];
                            var_16 = 2409448218823616084;
                        }
                        arr_16 [i_0] [i_1] [i_2] [i_3] = ((~(max(((8 % (-9223372036854775807 - 1))), 481395349))));
                        var_17 *= (((((((arr_4 [i_0] [i_0] [i_0]) > var_2)))) <= (arr_4 [i_0] [i_1] [i_2])));
                    }

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_18 = (((arr_1 [i_0]) - 18));
                        arr_20 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = ((((((arr_19 [i_2] [i_0 - 1]) >= (arr_10 [i_0] [i_0 - 1] [i_0] [i_6] [i_6 + 2])))) * (min((arr_19 [i_0] [i_0 - 1]), 124))));

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_19 ^= ((((((arr_13 [i_6] [i_1] [i_1] [i_6 + 1] [i_7]) ? (arr_4 [i_7] [i_2] [i_1]) : var_0))) < (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            var_20 *= (min((((~var_3) - (arr_5 [i_6] [i_7] [i_6] [i_0]))), (arr_10 [i_7] [i_7 + 1] [i_7] [i_6] [i_6 + 1])));
                        }
                        var_21 = 63112;
                        var_22 = ((max((arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [i_6] [i_6 + 3]), (arr_9 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]))));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_23 = (((arr_10 [i_0] [i_9] [i_0 - 1] [i_8] [i_9]) / (arr_10 [i_2] [i_0] [i_0 - 1] [i_2] [i_2])));
                            arr_30 [i_0] [i_1] = ((((~(arr_18 [i_0 - 1])))) ? (arr_5 [i_0] [i_0 - 1] [i_2] [i_8]) : ((var_10 ? ((max(var_4, 1))) : (arr_9 [i_0] [i_8] [i_2] [i_8]))));
                        }
                        var_24 = (arr_8 [i_0] [i_1] [i_2] [i_8] [i_0] [i_2]);
                        var_25 += var_6;
                        var_26 = (max(((1 << (2278268859 - 2278268829))), ((var_9 ? -19 : -1))));
                    }
                }
            }
        }
    }
    var_27 = 1;
    var_28 *= (((((var_6 | (~var_4)))) == ((var_4 - (min(var_6, 3820456442735287743))))));
    #pragma endscop
}
