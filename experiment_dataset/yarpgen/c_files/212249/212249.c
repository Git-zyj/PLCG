/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (((-(!4294967295))));
                                arr_14 [i_4] = (((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) * ((((!(~0)))))));
                                var_18 = 5;
                                var_19 = (((!51968) << (((12 <= 4294967290) & 4294967295))));
                                var_20 = (arr_7 [i_0] [i_0] [7] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] = (5 != 1716748304);
                            arr_22 [i_0] [i_0] [i_5] [i_6] = ((+(((!1716748298) >> (((arr_0 [i_0]) - 86))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            {
                var_21 = (-2578218979 / 4294967277);
                arr_30 [i_7] [i_8] = (arr_28 [i_7]);
            }
        }
    }
    #pragma endscop
}
