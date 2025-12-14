/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, (((!((!((min(0, var_5))))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 = (245 - 18016725100438782426);

                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        var_14 -= ((((92 - ((430018973270769189 ? 430018973270769190 : 4294967295)))) - ((((-9 - (arr_0 [i_1 - 3] [i_0]))) * var_2))));
                        arr_11 [i_3] [i_1] [i_0] = 2886656867;
                    }
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((min((min(1408310429, 25383)), var_4)))));
                        arr_14 [i_1] [6] = (((min(0, (arr_12 [i_0 - 3] [i_1]))) - 114));
                    }
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_1] [i_1] = (max((arr_18 [i_5 - 1] [i_1 + 2] [i_6]), (arr_6 [i_1] [i_1])));
                            var_16 = ((!(((var_1 ? 18016725100438782436 : ((((-104 + 2147483647) << (var_4 - 2878845452)))))))));
                            var_17 = var_7;
                        }

                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_23 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_0 - 1] &= (min(19, (min(1, (max(18446744073709551598, 245))))));
                            var_18 = ((((11 ^ (arr_2 [i_1] [i_5] [i_5])))) ? (min((min(var_4, var_9)), ((min(-705680999, 32339))))) : ((+(min((arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]), (arr_5 [i_5] [i_2]))))));
                        }
                    }
                    var_19 -= 19539;
                    var_20 ^= (((var_10 + 2147483647) >> (((!(((var_3 ? 245 : var_11))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_21 = (max(var_21, 33));
                    arr_30 [i_9] = min((max((arr_15 [i_0 - 2] [i_8] [17] [i_9] [i_9] [i_9]), (arr_15 [i_0 - 1] [16] [16] [i_8] [i_8] [i_8]))), (((((min(165130005, 127))) ? (-90 - var_10) : var_7))));
                    arr_31 [i_0] [i_8] [i_8] [i_9] = (max((125 <= -82), (arr_12 [15] [i_9])));
                }
            }
        }
        arr_32 [i_0 + 1] = 16383;
        arr_33 [i_0 - 1] [i_0] = min(((((((90 ? 705680998 : 895361810))) ? (min((arr_29 [i_0] [1] [1]), (arr_24 [i_0] [i_0]))) : (!var_9)))), (min(var_0, 4294967284)));
    }
    var_22 = ((~((var_1 ? (var_7 && 33) : 1408310429))));
    var_23 = (((-((var_2 ? var_4 : var_3)))));
    var_24 += var_7;
    var_25 = var_10;
    #pragma endscop
}
