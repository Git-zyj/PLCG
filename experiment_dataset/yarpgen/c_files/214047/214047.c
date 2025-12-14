/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_18 ^= (var_15 >= -104);
                            var_19 -= (((!1) ^ (arr_9 [i_2 + 1] [i_2] [i_1] [i_1 + 1])));
                            var_20 = (min(var_20, (((~(arr_11 [i_0] [i_1 - 1] [i_4 + 1] [1] [i_4 - 1] [i_4]))))));
                            var_21 = (~var_6);
                        }

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = (((arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2]) ^ var_16));
                            var_22 = (min(var_22, (((var_17 || (!-1))))));
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_23 = (671351376 & 178013899722171925);
                            arr_21 [i_0] [i_1] [i_1] [i_1] [3] [i_3] = (~178013899722171909);
                        }
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_0] |= (((arr_7 [12] [i_1]) / (arr_7 [i_0] [1])));
                        var_24 = ((18268730173987379696 + (-127 - 1)));
                        var_25 = ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_23 [i_1] [i_1] = ((~((((arr_17 [i_1] [19] [i_2 - 1] [16] [i_1]) >= var_2)))));
                }
                for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_26 ^= ((!(~-206092983)));
                    var_27 = (((max((~1740264858655694026), (!17364436860256802853))) % -44));
                    arr_27 [i_1] [i_1] = ((((-(arr_16 [i_0] [i_1] [i_1] [i_1] [i_1 + 2])))) >= ((~(arr_5 [i_1 + 1]))));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_28 |= (!0);
                    arr_30 [i_1] [i_1] [i_1] = (18268730173987379707 - 123);
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            {
                                arr_36 [i_10] [i_1] [i_1] [i_8] [i_1] [i_1] [i_0] = ((var_7 == (arr_26 [i_8 - 1] [i_1 - 1] [i_1])));
                                arr_37 [i_0] [i_9] [i_1] [i_9] [i_10] [i_9] = -18268730173987379705;
                                arr_38 [i_8] [17] [i_1] [i_9] [i_10] [i_0] [3] = (((((arr_16 [i_10] [i_1] [10] [i_1] [i_0]) - 206092977)) != (arr_29 [i_8] [i_1])));
                                var_29 = (min(var_29, ((((arr_14 [i_9 - 1] [i_1] [i_8] [i_8] [1] [i_1] [i_8]) | -206093002)))));
                            }
                        }
                    }
                }
                var_30 += (max(8191, 21475));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 10;i_12 += 1)
        {
            {
                arr_45 [i_11] = max((max((763698231 >= -206092978), (~var_16))), ((min((1 | var_1), 206092982))));
                var_31 += ((-(((((min((arr_26 [i_11] [i_11 - 3] [i_11]), var_2))) >= ((~(arr_1 [i_11]))))))));
            }
        }
    }
    #pragma endscop
}
