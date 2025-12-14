/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((min((arr_3 [i_0] [i_0] [i_0]), (((min((arr_11 [i_0] [i_4] [i_4] [i_4] [i_4]), (arr_6 [i_0] [i_0]))))))))));
                                var_18 -= (arr_2 [i_3] [i_4]);
                                var_19 = (min(var_19, ((min((max((arr_7 [i_4] [i_2] [i_0]), (arr_5 [i_0] [i_4] [i_0]))), (max((max((arr_5 [i_0] [i_4] [i_0]), (arr_5 [i_0] [i_4] [i_4]))), (min((arr_11 [i_4] [i_0] [i_3] [i_3] [i_4]), (arr_5 [i_0] [i_0] [i_0]))))))))));
                                var_20 ^= 53;
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] [i_0] |= (min((max((arr_3 [0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0]))), (arr_3 [i_0] [i_0] [i_2])));
                    var_21 = (max(var_21, ((max((max(((max((arr_1 [i_0]), (arr_2 [i_0] [i_0])))), (arr_3 [i_0] [i_0] [i_0]))), (min((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))), (arr_6 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_22 = ((min((arr_2 [i_0] [i_1]), (max((arr_17 [i_0] [i_1] [i_1] [i_0] [i_6]), (arr_14 [i_1] [i_1] [i_5] [i_0] [i_6]))))));
                                arr_19 [i_0] [i_0] [i_1] [i_0] [i_6] = (max((((max((arr_5 [i_0] [i_1] [i_2]), (arr_15 [i_0] [i_1] [i_1] [11]))))), (arr_3 [i_0] [i_1] [i_0])));
                                arr_20 [i_0] [i_5] [i_1] [i_1] [i_1] [i_0] [i_0] &= (min((max(-123, 9)), (arr_5 [i_0] [i_0] [i_0])));
                                arr_21 [i_0] [i_0] [i_2] [i_1] [i_6] = (min((arr_5 [i_1] [i_1] [i_1]), (max((min((arr_18 [i_1] [i_1] [6] [1] [i_1]), (arr_4 [i_5]))), ((max((arr_10 [i_0] [8] [8] [i_5]), (arr_1 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_13, (max(4294967290, 1))));
    #pragma endscop
}
