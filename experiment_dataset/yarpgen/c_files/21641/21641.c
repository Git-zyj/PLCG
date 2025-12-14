/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((((var_8 < (min(var_4, var_8)))) ? (min((var_8 != var_2), var_9)) : (var_2 + var_7)));
    var_11 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [4] [i_1] = ((((arr_4 [i_0] [i_0]) > (arr_0 [i_0]))) && (arr_1 [1]));
                var_12 = (i_1 % 2 == zero) ? ((max((((((arr_2 [i_1] [i_0 + 1]) + 2147483647)) >> (((arr_3 [i_0 - 1]) + 98)))), (arr_2 [i_1] [i_0 - 1])))) : ((max((((((((arr_2 [i_1] [i_0 + 1]) - 2147483647)) + 2147483647)) >> (((arr_3 [i_0 - 1]) + 98)))), (arr_2 [i_1] [i_0 - 1]))));
                arr_6 [2] [i_1] = (arr_2 [i_1] [i_1]);
                var_13 = (min(var_13, (((((((((arr_0 [i_1]) ? (arr_2 [6] [2]) : (arr_0 [i_0])))) ? (arr_1 [i_0 - 1]) : ((min((arr_0 [i_0]), (arr_1 [i_1])))))) ^ ((((((~(arr_4 [i_0] [i_0])))) && (((arr_1 [i_0]) != (arr_3 [i_0])))))))))));
                var_14 ^= ((!(((arr_0 [i_0 + 1]) != (arr_1 [0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = (i_2 % 2 == 0) ? (((((~(((arr_8 [i_2]) ^ (arr_12 [i_2] [i_2] [i_4] [1]))))) ^ (((((((arr_10 [i_2] [i_3]) ? (arr_8 [i_4]) : (arr_11 [i_2] [i_2] [i_4]))) == ((((arr_12 [i_2] [i_3] [i_4] [i_4]) % (arr_11 [i_2] [i_2] [i_2]))))))))))) : (((((~(((arr_8 [i_2]) ^ (arr_12 [i_2] [i_2] [i_4] [1]))))) ^ (((((((arr_10 [i_2] [i_3]) ? (arr_8 [i_4]) : (arr_11 [i_2] [i_2] [i_4]))) == ((((arr_12 [i_2] [i_3] [i_4] [i_4]) * (arr_11 [i_2] [i_2] [i_2])))))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_2] [i_3] [i_3] [i_3] [i_3] = ((arr_13 [i_2] [i_2] [i_2] [i_2] [17] [i_2]) ^ (arr_13 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3]));

                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_16 = (max(var_16, (arr_7 [i_4])));
                            var_17 |= (arr_14 [i_3] [i_6 + 1] [i_6] [i_6 + 4]);
                            var_18 = (arr_9 [i_2] [i_2]);
                            arr_18 [i_2] [i_3] = (((arr_16 [i_2] [i_6] [i_6 + 3] [i_6] [i_6] [i_2]) ? ((-(arr_16 [i_2] [1] [i_4] [i_4] [i_5] [i_6 - 1]))) : ((~(arr_10 [i_2] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_19 = ((arr_7 [i_2]) < (arr_7 [i_2]));
                            arr_23 [i_7] [i_2] [i_4] [i_2] [i_2] = ((~(arr_8 [i_2])));
                            var_20 = (arr_21 [i_2] [13] [i_7] [i_2] [i_7] [i_2]);
                            var_21 += (((arr_17 [12] [12] [i_4] [14] [i_4]) ? (arr_8 [i_3]) : (arr_17 [i_2] [i_3] [i_4] [12] [i_4])));
                        }
                        var_22 ^= ((!(arr_11 [i_2] [i_4] [i_4])));
                        var_23 &= (((((arr_22 [i_2]) + 2147483647)) << (((arr_17 [i_2] [i_3] [i_4] [i_5] [i_4]) - 12950))));
                        var_24 += ((arr_7 [i_4]) ? ((-(arr_9 [i_4] [i_4]))) : (arr_20 [i_4] [i_4] [i_3] [i_3] [i_2] [i_4]));
                    }
                    arr_24 [i_2] [i_3] [i_4] [i_3] = (arr_20 [i_2] [i_3] [i_3] [11] [i_4] [i_4]);
                }
            }
        }
    }
    var_25 ^= var_2;
    #pragma endscop
}
