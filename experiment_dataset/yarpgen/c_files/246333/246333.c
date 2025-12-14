/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 ? (((~(!var_13)))) : -2039586089913939082));
    var_15 ^= 1748973645;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [12] [12]) >= 0))) << (((arr_0 [i_0]) + 1877422962765570144))));
        var_16 = (min(var_16, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = (arr_4 [i_1] [15]);
            var_18 = ((!(arr_0 [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_19 = (((arr_9 [i_0] [i_1] [i_3 - 2] [2] [i_1]) ? (arr_9 [i_3] [i_1] [i_3 - 2] [i_3] [13]) : (arr_9 [i_0] [i_1] [i_3 - 2] [i_3] [1])));
                            arr_12 [i_1] [i_2] [i_1] = (((arr_11 [i_0] [i_4] [i_3] [i_3 - 1]) ? (arr_11 [i_0] [i_1] [i_2] [i_3 + 2]) : (arr_11 [i_3] [i_1] [i_2] [i_3 + 2])));
                        }
                    }
                }
            }
            var_20 = (arr_4 [i_1] [i_1]);
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_21 = ((((((~(arr_4 [i_5] [i_5]))))) ? (max(((~(arr_13 [i_5] [i_5]))), (arr_11 [i_5] [i_5] [i_5] [i_5]))) : (~4181842350)));
        var_22 = (min(var_22, (((((arr_13 [i_5] [i_5]) ? (((5701069612807548353 >= (arr_3 [i_5])))) : ((min((arr_4 [i_5] [i_5]), (arr_6 [3]))))))))));
        var_23 = (min((arr_10 [i_5] [0] [10] [i_5] [i_5]), ((((arr_5 [i_5]) ? (arr_5 [i_5]) : (arr_5 [i_5]))))));
    }
    var_24 = (min(var_8, ((~(!5701069612807548382)))));
    #pragma endscop
}
