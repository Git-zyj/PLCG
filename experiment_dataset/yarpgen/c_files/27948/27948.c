/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((var_0 - (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [18] [i_1] [i_2] [i_1] [18] = (((((-(arr_7 [i_0 + 1] [11] [11])))) ? (arr_5 [i_0 + 1] [i_1]) : (((max((arr_3 [i_1] [17] [i_1]), (arr_0 [i_2 + 1])))))));
                                var_12 = (min(var_12, (((((((((237 ? (arr_4 [i_0] [i_1]) : (arr_3 [i_0 + 1] [i_1] [i_4])))) ? 17208 : 4081409566))) ? (((arr_3 [i_4] [i_3 - 1] [i_4]) ? (arr_2 [i_4] [i_0 + 1] [i_4]) : 237)) : ((3 ? 0 : 237)))))));
                                var_13 = ((((-(139611588448485376 ^ 25134))) <= (((((15623 ? (arr_10 [i_3]) : (arr_1 [i_0])))) ? (arr_9 [i_0] [i_0 + 1] [i_2 - 1] [9]) : (~0)))));
                                var_14 |= ((((((arr_12 [0] [i_1 + 1] [i_2] [i_3] [12] [i_4]) < 1))) == ((-(arr_0 [i_0 + 1])))));
                            }
                        }
                    }
                    var_15 = (((max((arr_4 [i_0 + 1] [i_1 - 1]), -139611588448485396)) / 3635171398545245399));
                    var_16 = 4;
                    var_17 -= ((((((1 & (arr_4 [i_0] [i_0]))) ^ (arr_2 [2] [2] [i_2]))) < ((max((arr_10 [i_0 + 1]), 5603669)))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
