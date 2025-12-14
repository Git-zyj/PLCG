/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = var_0;
                                arr_17 [i_2] = ((((min(8536692921697828319, var_7))) ? 202 : 673841089));
                                var_21 = (((21620 ? 7717512876500410021 : 10376550139158507186)));
                                var_22 = (((((27979 - (arr_10 [i_3 + 1] [i_3] [i_4] [i_4])))) ? (((-2147483647 - 1) ? 3674630856 : 2147483647)) : -20268));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_1] [3] [3] [7] = (((arr_22 [i_5] [i_5] [15] [15] [i_0]) != (((arr_10 [i_6] [i_2] [i_2] [12]) ? 15047 : (min(-2147483642, -26331))))));
                                arr_24 [i_0] [17] [15] [i_5] [i_2] = (-32550 - 31639);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-673841090 ? 0 : var_13));
    #pragma endscop
}
