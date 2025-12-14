/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((-((((!(arr_4 [i_1]))) ? (var_13 | var_12) : ((var_4 ? 2143036215 : (arr_3 [3])))))));
                var_20 *= ((max(51, 4063700027)));
                arr_6 [i_1] [i_0] = 17776;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] [8] [i_3] [i_2] [i_5] = (((((~var_5) + 2147483647)) >> (!937075676)));
                            arr_20 [i_2] [i_2] [18] [19] [i_2] [i_3] = (((arr_16 [i_2] [i_3] [i_4] [i_5]) ? 107 : ((937075676 ? (((var_6 + 2147483647) >> (277530322 - 277530319))) : (~996509806)))));
                            arr_21 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] = ((((min((~var_17), (arr_16 [i_5] [i_4] [17] [i_2])))) ? (arr_7 [i_5]) : ((-1203610193 ? 277530322 : 255))));
                        }
                    }
                }
                var_21 = (max(var_21, (arr_15 [8])));
            }
        }
    }
    var_22 = (((!1) * (var_11 | 0)));
    #pragma endscop
}
