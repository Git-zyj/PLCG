/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [3] [i_0] [8] [i_2] = (arr_3 [i_0]);
                    var_18 = (0 || 10);
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (max((min((min((arr_4 [i_1] [i_0]), var_8)), ((max(-1446435616, (arr_3 [i_0])))))), var_9));
                }
            }
        }
    }
    var_19 += var_7;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_20 = (min((max((((var_14 ? -32762 : (arr_1 [14])))), -23)), ((max((max(32762, (arr_6 [8]))), (arr_4 [i_4] [i_3]))))));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_21 = (max(((min(-68, 67))), (((arr_16 [i_5]) ? (arr_16 [i_5]) : 66))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_22 = min(1, -17);
                                var_23 ^= ((~(arr_17 [0] [0])));
                            }
                        }
                    }
                }
                arr_23 [i_3 - 1] [i_3 - 1] [i_3 - 1] = (max((arr_21 [i_3] [i_3 - 1] [0] [i_3 + 1] [i_3 - 3]), ((var_4 - (arr_21 [i_3] [i_3] [i_3] [i_4] [i_4])))));
            }
        }
    }
    #pragma endscop
}
