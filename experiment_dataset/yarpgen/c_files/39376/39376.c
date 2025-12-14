/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (868 > var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_11 = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 -= ((((-4102 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))) != -9629));
                                var_13 = ((-8726 - (arr_9 [i_4 - 1] [i_1 + 1] [i_0] [i_0] [i_0] [10] [i_0])));
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [16] [i_2] = (i_1 % 2 == zero) ? (((((((~(((arr_5 [i_2] [i_1] [0]) >> (((arr_10 [i_0] [i_1] [i_2] [7] [i_0]) - 2006978625)))))) + 2147483647)) >> ((((((min(43000, (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0])))) & (min((arr_8 [i_0] [i_0] [i_0] [i_0]), 5141936400237572862)))) - 41694))))) : (((((((~(((arr_5 [i_2] [i_1] [0]) >> (((((arr_10 [i_0] [i_1] [i_2] [7] [i_0]) - 2006978625)) - 4092001403)))))) + 2147483647)) >> ((((((min(43000, (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0])))) & (min((arr_8 [i_0] [i_0] [i_0] [i_0]), 5141936400237572862)))) - 41694)))));
                    var_14 = var_7;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_15 &= ((((((arr_0 [i_0]) * (arr_14 [i_0] [i_1 + 1] [i_0] [1])))) ? -15 : (((arr_5 [16] [i_0] [i_0]) << (22748 - 22721)))));
                    var_16 += (((arr_6 [i_0] [i_1] [i_5] [i_0]) % 32114));
                    arr_15 [i_0] [i_1] [i_0] = ((41614 ? (arr_14 [i_0] [i_1 + 1] [i_1] [i_5]) : ((1169615128 >> (42028 - 42027)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [5] = (((((32767 >> (var_3 + 13913)))) ? -8742 : (arr_1 [i_0])));
                                arr_22 [i_1] = (((arr_20 [i_1 + 1] [i_1] [i_1] [i_7 + 1]) < (arr_20 [3] [i_1] [i_1] [i_7 - 2])));
                                arr_23 [i_0] [14] [i_0] [13] [i_1] = ((32767 % (arr_14 [i_7 - 1] [i_1] [i_1] [i_0])));
                                var_17 &= (((((3 ? (arr_18 [i_0] [i_1 - 1]) : (arr_20 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_12 [i_0]) ? 1 : 4294967288)) : ((((!(arr_16 [i_6])))))));
                            }
                        }
                    }
                }
                var_18 ^= (((((((arr_3 [i_0]) + 0)) % ((((arr_12 [i_0]) >> (41614 - 41605)))))) - ((((!(((arr_2 [i_0]) < (arr_19 [i_0] [0] [i_0] [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
