/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_21 = max((((arr_5 [i_0] [i_1]) ? -121 : 4294967275)), (((65535 | (arr_0 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] [i_4] [i_1] = 0;
                                arr_15 [i_0] = (min((max((((arr_1 [i_4]) & var_9)), 1)), ((((arr_1 [i_0 + 1]) && ((max(65535, var_17))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_6] [i_7] = (arr_18 [i_5]);
                    arr_25 [i_5] [i_6] [i_6] [i_7 - 2] = ((min(-6163093798107322612, 6163093798107322611)));
                }
            }
        }
    }
    var_22 -= ((((min((~var_18), -6163093798107322612))) ? 18446744073709551615 : var_10));
    #pragma endscop
}
