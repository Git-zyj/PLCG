/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = ((((~(((var_8 + 9223372036854775807) >> (var_4 - 24))))) + (arr_3 [20])));
                var_14 ^= (arr_4 [22]);
                arr_7 [i_0] [i_1] [i_1] = (((arr_6 [7] [i_1] [i_0]) ^ (2147483647 || 3)));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_15 += (arr_8 [3] [22]);

                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (((((arr_10 [i_0] [i_2] [i_1] [i_2] [i_2]) ? var_9 : ((((arr_5 [i_1] [i_1] [i_1]) & (arr_6 [i_3] [16] [22])))))) % (arr_4 [i_0])));
                        var_16 = (((((var_2 ^ (((arr_3 [10]) ? (arr_6 [1] [17] [12]) : (arr_2 [i_0])))))) ? (((((arr_5 [1] [23] [i_2]) < ((((arr_0 [1]) ? (arr_11 [i_0] [16] [22] [i_0] [14] [i_0]) : var_11))))))) : (((((arr_1 [16]) != var_9)) ? ((var_10 ? (arr_6 [i_0] [24] [i_0]) : var_9)) : var_1))));
                    }
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_17 = (min(var_17, (((((-123 ? 122 : -123)) % (-127 - -124))))));
                    var_18 = (((arr_8 [4] [i_1]) ? (((2147483647 ? 2147483647 : 237))) : ((1 ? 122 : (arr_8 [i_4] [i_4])))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, (arr_2 [i_0])));
                            var_20 = (((((arr_10 [12] [i_5] [6] [i_5] [i_0]) || (arr_10 [2] [i_5] [22] [i_5] [i_1]))) ? (((((-19076 ? 3500 : (-2147483647 - 1)))) ? (arr_8 [i_6 - 2] [i_6]) : ((var_1 ? (arr_18 [15] [i_1] [1]) : (arr_8 [13] [i_1]))))) : (((((arr_9 [i_6 + 2] [22] [i_6] [21]) || (arr_9 [i_6 + 2] [3] [13] [17])))))));
                            var_21 = (max(var_21, ((((arr_6 [7] [i_5] [i_1]) & var_8)))));
                            var_22 = (((arr_2 [1]) | var_8));
                            arr_22 [1] [i_1] = (((-2147483647 - 1) & 113));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
