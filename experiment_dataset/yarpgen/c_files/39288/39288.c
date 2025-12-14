/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [5] = ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))));
                arr_7 [i_0] = (min(32767, ((~(arr_5 [5] [5])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (0 ? (1 || 0) : 46);
                            arr_12 [i_0] [i_2] [i_0] [i_0] = ((0 ? 4294967295 : 1));
                            var_14 ^= ((((-8335 % (arr_4 [i_0 - 1]))) == ((var_3 ? 46 : var_8))));
                            var_15 *= (arr_4 [i_0 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_16 = ((((min((arr_3 [i_0 - 2]), (arr_3 [i_0 - 3])))) ? (((!(arr_4 [i_0])))) : var_2));
                            arr_18 [i_0 + 2] [i_1] [i_5] [i_5] [i_5 - 3] = ((var_12 ? (~1) : (~var_3)));
                            arr_19 [i_5] [i_1] [i_4] [4] = var_11;
                            var_17 = (max(var_17, (min(var_11, var_10))));
                        }
                    }
                }
                arr_20 [i_0] = ((1 + (1 + 1)));
            }
        }
    }
    var_18 = (min(var_10, (25 >= 1)));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_31 [i_8] [i_7] [3] [i_9] [i_9] = (arr_10 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 2] [i_9 - 2]);
                                var_19 = (min(var_12, ((((((0 ? var_4 : var_1))) || ((min((arr_25 [i_8] [i_8] [i_8] [i_8]), (arr_1 [i_9] [i_7])))))))));
                                var_20 = 2097151;
                            }
                        }
                    }
                    var_21 = ((((((!18446744073709551615) ^ 2097151))) ? (~18446744073709551615) : (((1 - (arr_24 [0]))))));
                }
            }
        }
    }
    var_22 = 0;
    #pragma endscop
}
