/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max((arr_1 [i_0] [i_1 + 1]), ((((arr_0 [i_0]) <= (arr_2 [i_1] [i_1 + 1] [i_1]))))));
                var_20 = (1 * (((arr_1 [i_1 - 1] [i_1 - 1]) / 60)));
                arr_5 [i_0] [i_1 + 1] |= (min((~28463), (((arr_2 [i_0] [i_0] [i_0]) ? 63 : (arr_3 [i_0] [i_1 + 2])))));
                arr_6 [i_1 + 2] [i_1] = (((--144115188042301440) % var_10));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [i_1] [i_3] [i_3] [i_3] [i_0] [i_0] = (arr_10 [i_0] [i_1] [i_1 + 2] [i_2] [i_3] [i_4]);
                                var_21 &= 28463;
                                arr_15 [i_0] [i_1] [i_4] = (max(-174, (~5)));
                                var_22 = ((!((((arr_10 [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]) ? (arr_12 [i_1] [i_1 + 1] [i_1 + 1]) : (arr_12 [i_1 + 3] [i_1 + 1] [i_1 - 1]))))));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_1] = -37;
                                arr_19 [i_1] [i_1 - 1] [i_1] = (((((69 <= 17) <= (((arr_16 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_5]) ? -15 : 174)))) ? (((((arr_0 [i_0]) ? 0 : (arr_1 [i_2] [i_3]))) * 196)) : ((((arr_0 [i_2]) ? (5271 != -118) : 2556770275)))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                var_23 *= (((-244308393950538770 ? -5986636521884679118 : ((867796399 ? 4391516707907519126 : 7)))));
                                arr_22 [i_1] [i_3] [i_2] [i_0] [i_1] = (((!14713334783203391203) << (((min(-5, (((arr_12 [i_1 + 3] [i_1 + 3] [i_1 + 3]) ? var_0 : 8602530655556599248)))) + 12))));
                                arr_23 [i_1] [i_3] = (((((~(arr_0 [i_0])))) ? (((!(9223372036854775807 & -15322)))) : ((-(59384 != -244308393950538780)))));
                            }
                            arr_24 [i_0] [i_1] = max((arr_3 [i_3] [i_1 + 3]), (((var_8 ? (arr_2 [i_1] [i_1 - 1] [i_1 + 2]) : 6164))));
                        }
                    }
                }
            }
        }
    }
    var_24 -= ((var_10 * (!var_15)));
    #pragma endscop
}
