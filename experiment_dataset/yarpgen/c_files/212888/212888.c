/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? (((!(var_8 || 15)))) : (((!(!1))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((var_15 + (((arr_0 [i_0] [i_0 + 1]) ? var_13 : (arr_0 [i_0] [i_0 - 1])))));
                                var_19 += -2147483647;
                            }
                        }
                    }
                    var_20 += ((-(((-578819987 || (arr_9 [3] [i_0 - 1] [i_1 + 1] [13]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 &= (min((max(var_0, (arr_7 [14] [i_6 + 2] [i_6 - 1]))), (((((-(arr_17 [i_0] [2] [i_2] [2] [2])))) ? (min(9679295263791818463, var_1)) : (-18 < 536805376)))));
                                var_22 = (max(15433546522376125553, (max((arr_10 [16] [4] [16] [i_5] [1]), ((max(8615143696678894945, (arr_15 [11] [4] [i_2] [i_5]))))))));
                                var_23 = (min(var_23, 29735));
                                var_24 = (max(var_1, (max(-12799002601475067670, (((-(arr_13 [i_0] [i_1] [i_6] [1]))))))));
                                var_25 += (-(min((arr_9 [i_0] [i_0] [i_5] [i_6]), 1099511627775)));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = ((-(min((max(-8078153873113261433, (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))), ((24263 ? var_0 : 2147483643))))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_26 = ((+((-((min((arr_19 [i_7]), 65514)))))));
        var_27 = (((max((min(var_3, var_2)), var_8)) << (1970288024 - 1970288009)));

        for (int i_8 = 1; i_8 < 24;i_8 += 1)
        {
            var_28 *= 3;
            var_29 = (((max(1349101914, var_4))) ? (min(0, var_10)) : (min(5350970045985846384, 7382127435895653249)));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                {
                    var_30 = (min(var_15, (((((min(0, var_7)))) / ((-(arr_23 [i_7] [i_7] [i_10])))))));
                    var_31 ^= 136;
                }
            }
        }
    }
    var_32 = max((min(var_12, var_10)), var_7);
    var_33 = (~var_14);
    #pragma endscop
}
