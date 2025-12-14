/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((((var_4 ? var_2 : (arr_5 [i_0] [i_1]))) / (arr_7 [i_0])));
                                var_16 = (arr_7 [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_17 ^= ((~((((arr_3 [i_1] [i_1] [i_1]) >= ((-(arr_4 [i_6] [i_6] [i_6] [i_6]))))))));
                                var_18 -= (max((((-1 ? (arr_15 [i_0] [i_1]) : ((-5228617245985892430 ? 1260618450 : 17250))))), (min(-31557, -544964149961365937))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((max(((((arr_2 [i_0]) ? (arr_19 [i_2] [i_1] [i_0] [i_7] [i_8] [i_8] [i_8]) : 1))), (max((arr_10 [i_8] [i_1] [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_7] [i_8 + 4])))))) ? (arr_15 [0] [0]) : var_0))));
                                var_20 = (max((min((arr_17 [i_7] [i_8] [i_7 - 1] [i_7]), (arr_17 [i_7] [i_8] [i_7 + 1] [i_7]))), ((((arr_17 [i_7] [2] [i_7 - 3] [i_7]) >= (arr_9 [i_7] [i_7] [i_7 + 1] [i_7]))))));
                                var_21 = 31574;
                                var_22 = (((arr_10 [i_0] [i_1] [i_2] [i_7] [i_8 - 3]) ? ((((((arr_6 [i_0] [i_1] [2] [i_8 + 3]) | (arr_7 [i_0])))) ? ((~(arr_6 [i_1] [i_1] [i_7] [i_8]))) : (~var_4))) : ((((((1647 ? 31551 : (arr_17 [i_7] [i_1] [i_7] [i_7]))) == (!-7)))))));
                                var_23 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 += 48756;
    #pragma endscop
}
