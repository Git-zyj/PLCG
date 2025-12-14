/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_14 ^= (arr_0 [i_1] [i_0]);
                arr_4 [i_0 + 3] [i_0] [i_0 + 3] = 119;
                var_15 ^= (max((max((arr_2 [i_0] [22]), (arr_3 [0] [0] [i_1]))), (((!((((arr_1 [i_0 - 1]) ? 119 : var_3))))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_16 = 119;
                    var_17 ^= ((-(arr_0 [i_2 - 1] [i_1 - 2])));
                    var_18 = 137;
                    var_19 = (((arr_6 [20] [i_1] [i_0] [i_1]) % (arr_0 [i_1 - 2] [i_2 + 1])));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_20 &= ((123 ? 136 : 47));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = (arr_8 [i_3 + 1] [i_1] [i_0]);
                        var_22 = ((var_3 ? 136 : (9063604728111122874 > 136)));
                    }
                    for (int i_5 = 4; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_5] [4] &= 9383139345598428742;
                        var_23 = (((var_12 ? var_11 : 413114570)));
                    }
                    for (int i_6 = 4; i_6 < 23;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_21 [i_7] [i_7] |= (((arr_0 [i_6 - 1] [1]) ^ (arr_10 [16] [16] [i_6 + 1] [i_6] [i_6 - 2])));
                            var_24 = (((arr_3 [i_0] [i_3 + 1] [i_0]) ? (((136 + (arr_2 [i_3] [i_6])))) : (arr_1 [i_0 + 2])));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_25 &= 11;
                            var_26 &= -8103294529926265131;
                            var_27 = (((((~(arr_8 [i_0 - 1] [i_0 - 1] [i_6])))) ? ((-(arr_1 [i_6]))) : (arr_0 [i_0 + 3] [0])));
                        }
                        var_28 *= 9383139345598428741;
                        arr_26 [i_0] [i_0] [i_3 - 1] [i_0] [i_0] = ((100 ? (arr_22 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1]) : (arr_12 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0])));
                        var_29 = (max(var_29, (((var_2 % ((var_6 ? 9383139345598428741 : var_11)))))));
                    }
                    arr_27 [5] [i_0] [i_0] [i_0] = (~var_11);
                }
                for (int i_9 = 1; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_30 ^= ((-(((arr_29 [12] [16] [i_9 + 1]) ? (arr_29 [1] [i_1] [i_9 - 1]) : (arr_29 [16] [i_1 - 2] [i_9 - 1])))));
                    arr_30 [i_1] [i_0] = (47 ^ 127);
                }
                var_31 = (max(var_31, (((~((((((-32767 - 1) ? 0 : (arr_14 [i_0] [i_1 + 1] [i_0] [i_1])))) ? (arr_7 [0] [i_0 - 1] [0]) : ((max((arr_19 [2] [i_1] [i_1] [8] [2]), (arr_18 [i_1] [i_0] [i_0] [i_0])))))))))));
            }
        }
    }
    var_32 = max(4824065317093970381, var_5);
    #pragma endscop
}
