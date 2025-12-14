/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 == (var_2 - var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_16 [i_2] = (((arr_11 [9] [9] [i_2] [i_2]) - (arr_9 [i_0] [i_0])));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] = (((arr_6 [i_2]) - (((((((((arr_9 [i_0] [i_1]) < (arr_4 [i_0] [i_2]))))) < (arr_12 [i_0] [i_1] [6] [i_3] [i_3])))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_4] = (((arr_1 [i_0]) * ((((arr_9 [i_0] [i_1]) < (arr_9 [i_1] [i_0]))))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_24 [i_4] [i_4] [i_4] [0] = ((arr_14 [i_5] [i_5] [i_5]) * ((((arr_14 [i_4] [i_4] [i_4]) < (arr_14 [i_0] [i_2] [i_5])))));
                            var_18 -= (((13617 >> (15118 - 15117))));
                            arr_25 [i_2] [i_4] [i_2] [i_2] [i_4] [i_0] = (arr_9 [i_1] [i_0]);
                            var_19 ^= (arr_6 [i_0]);
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_31 [i_6] [14] [i_2] [i_6] [i_7] = (arr_6 [i_1]);
                                var_20 = ((arr_23 [i_0] [i_0] [i_2] [i_0] [i_7]) - (arr_9 [i_2] [i_2]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
