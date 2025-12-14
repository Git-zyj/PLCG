/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min(((min(var_14, 0))), (max(var_12, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((20983 ? 5147478640279634229 : (((((arr_4 [i_0] [i_1]) == (arr_4 [i_1] [i_1]))))))))));
                var_20 = (((min((arr_0 [i_0]), var_10))) ? ((-(arr_4 [i_0] [i_1]))) : (((!(((158 ? 56206 : 2147483647)))))));
                var_21 -= (max((min((arr_2 [i_1] [i_1]), (arr_3 [i_1]))), var_4));
                arr_5 [i_0] [i_0] = var_10;
                var_22 = ((-2147483647 ? (+-2074890739) : ((5663672339657307259 / (arr_4 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                arr_13 [i_2] = (!-5663672339657307259);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = 5709486182029716744;
                                arr_22 [i_2] [i_3] [i_2] [i_3] [i_2] = (min((((arr_19 [i_4] [i_4] [i_4] [i_2] [i_5 - 2]) * var_7)), -var_1));
                                var_24 = (max((((97 / 1735241437) ? 6778918312289017767 : 39644)), (arr_12 [i_2])));
                                var_25 = ((0 ? 17811049582537286073 : 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_8 | var_5);
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                {
                    var_27 = ((!((min((arr_25 [i_8 - 3] [i_9 - 1]), -7704131297791422909)))));
                    arr_30 [i_7] [i_8] [i_9 - 3] [i_7] = (max((((arr_25 [i_8 - 3] [i_9 + 1]) ? 64838323 : 4294967295)), ((((min(58379, 255)))))));
                }
            }
        }
    }
    #pragma endscop
}
