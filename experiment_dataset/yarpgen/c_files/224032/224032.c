/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = (max((max((var_3 ^ 1016888692), ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) ? var_8 : 32355))))), ((~(arr_9 [i_4] [i_3] [i_2] [i_1] [i_0])))));
                                var_10 = (min((arr_6 [i_0] [i_2] [i_2] [i_3]), (arr_6 [i_3] [i_2] [i_2 - 1] [i_3])));
                                arr_13 [i_0] [i_1] [i_2] [i_2 + 1] = ((+((3 << (((arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]) + 910595217))))));
                                var_11 = 13;
                            }
                        }
                    }
                }
                var_12 = 1582702665;
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] = (-var_0 ? (min(((max(var_2, 1))), (~var_8))) : (arr_16 [i_0] [i_1]));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = (min(-227, (~var_9)));
                        }
                    }
                }
                arr_21 [i_0] = ((((((arr_4 [i_0] [i_1]) < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))) * ((((~var_2) && (arr_18 [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                {
                    var_13 -= ((+((-1 ? (arr_0 [i_9 + 1]) : ((26529 << (109 - 105)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_14 = (~10);
                                var_15 = (-32759 ^ 5);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
