/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((-(((!(arr_3 [i_1])))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_2] [i_3] [i_4] = ((!((max((arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_4 - 1] [i_3 - 1]), (arr_11 [i_2 - 1] [i_1] [i_2] [i_4 - 1] [i_3 + 1]))))));
                                arr_13 [i_4 - 1] [i_2] [1] [i_2] [i_0] = -2173232320212416168;
                                arr_14 [i_2] [0] [i_1] [i_2] = (max(((~(((arr_1 [i_0]) | -1684294933)))), (((!(~9223372036854775807))))));
                                arr_15 [i_2] [i_2] [i_2] = (((arr_0 [i_0] [13]) < var_8));
                                arr_16 [i_0] [i_2] = ((!(arr_5 [i_4] [i_2] [i_2] [1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_13 = ((-1 ? (((-312870111 < -4520359723118126825) ? 4520359723118126824 : -4520359723118126824)) : -4520359723118126810));
                var_14 = ((((max((arr_22 [i_5] [1] [i_5]), (arr_18 [i_5] [i_6])))) ? 4520359723118126824 : (arr_18 [i_5] [i_6])));
            }
        }
    }
    var_15 = ((!(((-((7202195001341393859 ? -1 : 1)))))));
    var_16 = ((var_0 ? (((~var_8) ? var_5 : -4520359723118126824)) : var_0));
    #pragma endscop
}
