/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (((((-var_2 + (arr_0 [i_1])))) ? (arr_5 [i_0] [i_0] [i_1]) : (min(((min(11583, 87))), (((arr_6 [i_0] [i_1]) - 4611686018427387904))))));

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    arr_11 [i_2] [i_2] [i_1] = 242;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((-32762 ? (arr_2 [i_3]) : (arr_2 [i_0])));
                        var_14 = ((var_11 ^ (arr_4 [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_4] &= ((!(arr_9 [i_0] [i_1] [i_2] [i_4])));
                            arr_20 [i_2] [i_5] = ((((max((arr_2 [i_0]), (arr_13 [i_0] [i_0] [i_2])))) ^ var_7));
                            arr_21 [i_2] [i_0] [i_0] [i_0] [i_0] = -116;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_15 = ((((arr_8 [i_6] [i_2] [i_2 - 1] [i_4]) / (arr_8 [i_0] [i_2] [i_2 + 2] [i_2]))));
                            var_16 &= (arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_6]);
                            arr_25 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] [i_2] = (((~(arr_2 [i_2 - 2]))));
                            arr_26 [i_2] [i_2] = ((((max(173, (max((arr_0 [i_0]), var_6))))) <= (((arr_0 [i_2 - 1]) ^ (arr_0 [i_2 + 2])))));
                            var_17 ^= (max((arr_2 [i_1]), (arr_22 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0])));
                        }

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] = (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_7]);
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_7] [i_4] = (~23408);
                            var_18 = (max(var_18, (((!(arr_23 [i_0] [i_1] [i_2] [i_4]))))));
                        }
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            arr_34 [i_0] [i_8] [i_2] [i_2] [i_8] [i_2] [i_2] = 10061756285930979083;
                            var_19 = ((((((arr_5 [i_8 - 2] [i_8 + 2] [i_8 - 1]) < ((var_5 ? 242 : var_10))))) & ((3 ? (arr_32 [i_8] [i_0] [i_2] [i_2 + 1] [i_8 + 1] [i_4] [i_8 + 1]) : var_4))));
                            arr_35 [i_2] [i_8] [i_4] [i_2] [i_2] [i_1] [i_2] = ((8875470313776860515 < (~13)));
                            var_20 = (((((arr_15 [i_0] [i_1] [i_2] [i_4] [i_8]) ? (var_13 & var_10) : var_7)) < 18));
                        }
                    }
                    arr_36 [i_2] = (8875470313776860512 ^ var_1);
                    arr_37 [i_0] [i_2] [i_2] = ((-(arr_8 [i_2 - 3] [i_2] [i_2] [i_0])));
                }
            }
        }
    }
    var_21 = 899;
    #pragma endscop
}
