/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((!(11628 | 948320214))) ? var_0 : ((-((var_6 ? 2038055503 : 14752211144131748187)))))))));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_20 = (max((275784929 | 1387299499), (((-1 + 2147483647) >> (2038055503 - 2038055498)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((~((((min(2256911784, -1718768781652027146)) < ((max(var_15, 3993083634))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = var_14;
                                arr_14 [i_0] [i_0] [6] = (max(((min(252, var_16))), (min(231, -8646523803057889657))));
                                var_22 = (((((var_1 ? 185 : 15614337760191233728))) ? (1387299499 + -110) : (1387773906 - 0)));
                                arr_15 [i_4] [i_3] [i_0] [i_3] [i_0] [i_1] [i_0] = 1554766410;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_23 = (4799692087339447464 <= 1387299495);
                        var_24 = min((1 + 7349928064431630463), (-7 - 1251817585));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_6] [i_0] [i_6] [i_6] = 1;
                            var_25 += ((1251817577 >= (min(4270, 2038055503))));
                        }
                        var_26 = ((2832406313518317888 ? 90519202 : 13));
                        var_27 = -1251817585;
                    }
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        arr_29 [i_0] = (max(((-((var_11 << (15614337760191233715 - 15614337760191233705))))), 26));
                        var_28 = (max(((~(max(9223372036854775783, 7906687557148535479)))), 1251817563));
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((1901917032 + (3915025101 ^ -472042140)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
