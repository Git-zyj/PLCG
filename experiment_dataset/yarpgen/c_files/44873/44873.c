/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44873
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
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = (arr_7 [i_2 + 1] [i_3] [i_3]);
                            var_16 = (max(var_16, (((11629 != ((-11630 / (arr_4 [i_1] [i_3]))))))));
                            var_17 = (max(var_17, (((((~(arr_4 [i_0] [i_0]))) != ((-11611 - (arr_4 [i_0] [i_0]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_18 ^= ((-(arr_4 [i_0] [i_1])));
                                var_19 = -503;
                            }
                            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                            {
                                arr_21 [i_7] = 0;
                                arr_22 [i_0] [i_1] [i_4] [i_4] [i_0] [i_7] [i_4] = -11624;
                                var_20 = (arr_9 [i_0] [i_0] [i_7]);
                            }
                            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_0]) - (arr_0 [i_4])));
                                var_21 = ((~(arr_0 [i_0])));
                            }
                            var_22 = (min(var_22, (arr_14 [i_0] [i_1] [i_4] [i_1])));
                        }
                    }
                }
                var_23 = 855109363;
                arr_26 [i_0] [i_1] = (-3449775545 ^ 11629);
                var_24 = (min(var_24, ((((arr_12 [i_0]) == ((~(arr_12 [i_0]))))))));
            }
        }
    }
    var_25 = (((~var_0) && (!2477006285)));
    #pragma endscop
}
