/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 += (43246 == 224178432);
                                var_15 = (max(var_15, ((((((((((arr_6 [i_0] [8]) <= (arr_1 [i_1])))) < ((((arr_10 [i_4] [i_3]) <= -786014139))))))) <= (min((arr_10 [i_0] [i_0 - 1]), -4109585303518212461))))));
                                var_16 = (((((((-(arr_13 [i_0] [i_3] [i_2] [20] [i_0]))) <= (arr_12 [i_0] [i_4] [4] [i_2] [16] [i_0]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_17 -= (((2305843009196916736 >> (22290 - 22248))));
                    var_18 ^= (+((+(((-1104853088 + 2147483647) >> (((arr_11 [i_0 + 1] [i_0] [19]) - 2593294397)))))));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_19 = 22290;
                    var_20 = (max(var_20, -31098));
                }
                var_21 = ((((1360521060 * (10627554278225829024 * 0))) * ((((((-(arr_6 [16] [i_1])))) ? (((arr_11 [i_0 + 1] [i_1] [i_1]) / (arr_10 [i_0] [i_0]))) : (((1 ? 32767 : (arr_0 [1])))))))));
            }
        }
    }
    var_22 = var_13;
    var_23 = (max((max(var_6, 0), 3149624620)));
    #pragma endscop
}
