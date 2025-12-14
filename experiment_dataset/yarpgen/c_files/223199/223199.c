/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = ((((arr_4 [i_2] [i_0 + 1] [i_0 + 1]) ? var_0 : var_6)));
                    arr_10 [i_0 + 1] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_2]);

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_13 = (((((~(((arr_6 [i_2] [i_1] [i_0 - 2]) ? 61 : (arr_7 [i_0] [i_2] [i_3])))))) ? 113 : (((arr_7 [i_0 - 1] [i_2] [i_3]) ? (((!(arr_11 [i_0 + 1] [i_1] [i_3])))) : ((1 ? 1905535481 : 61))))));
                        var_14 *= ((~(((((max(1, (arr_6 [i_3] [i_1] [i_0]))))) ^ (max(5364433763134646318, 61))))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = ((-((((((arr_12 [i_0] [i_1] [i_2] [i_4] [i_4]) ? (arr_0 [i_4]) : 2097151))) ? (max(-5364433763134646318, (-9223372036854775807 - 1))) : (max(9223372036854775800, var_9))))));
                        var_15 = (min(var_15, 16383));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_16 = (max(var_16, ((max((arr_12 [i_0] [i_5] [i_0 - 2] [i_2] [i_1]), ((max(1, var_6))))))));
                        var_17 = (min(var_17, (((-((23 ? 0 : (arr_3 [i_0 - 1] [i_0 - 2] [i_0 - 2]))))))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_18 = (max(var_18, ((((((((0 ? (arr_3 [i_1] [i_5] [i_6]) : (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0])))) ? 0 : (((arr_7 [i_6] [i_5] [i_1]) ^ (arr_11 [i_1] [i_1] [i_1]))))) << (((arr_17 [i_2] [i_1] [i_0] [i_5 + 3] [i_6] [i_0]) - 18446744073709548431)))))));
                            var_19 = (max(var_19, (((((((arr_2 [i_0] [i_1]) ? (arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]) : 78))) ? -98 : (((arr_17 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6]) ? var_2 : 61)))))));
                        }
                    }
                    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_20 = (min(var_20, (((67 ^ (((min(-8382, 13812)))))))));
                        var_21 ^= (max(var_3, (var_4 && 1)));
                    }
                }
            }
        }
    }
    var_22 = ((var_10 + ((var_2 ? var_9 : var_3))));
    var_23 = var_6;
    var_24 = 10565;
    #pragma endscop
}
