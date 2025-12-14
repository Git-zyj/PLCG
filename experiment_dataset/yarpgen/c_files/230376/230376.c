/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_7, ((-((var_5 | (arr_1 [12] [i_0])))))));
                                var_13 = (min(var_13, ((((arr_7 [i_2] [i_2 + 2] [14] [i_2]) - (~-5425893462002773023))))));
                                var_14 = ((!((((arr_4 [12] [i_2 - 1] [i_2 - 1] [0]) - (arr_4 [i_2] [i_2 + 1] [i_3] [i_2 + 1]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = (arr_14 [i_0]);
                        var_15 += (min(-5425893462002773023, -1));
                        arr_16 [i_0] [i_2] [i_2] [i_5] [10] &= 1;
                        var_16 = (arr_2 [i_0] [7]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_17 = (max(((max(1, (-1 ^ -1)))), (min((arr_18 [i_0]), (min((arr_3 [i_0] [i_1] [i_0]), 0))))));
                            var_18 = 42;
                            var_19 = -5425893462002773023;
                            var_20 = (max(var_20, (((((min(var_0, ((min((arr_10 [i_1]), 42)))))) ? ((((-1 + -1587071703) ? (((arr_0 [i_1] [i_2]) >> (-1 + 27))) : ((~(arr_6 [3] [i_1])))))) : -1)))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_21 = ((((max(11849, ((max(-726469861, (arr_9 [i_2 + 1] [i_1] [i_2] [i_0] [11]))))))) ? (min(4305, (max(40, var_3)))) : ((((min(42, (arr_13 [i_0] [i_0] [i_0] [i_0]))) / ((((arr_1 [i_8] [i_0]) ? -1587071703 : var_1))))))));
                            var_22 &= var_3;
                        }
                        var_23 ^= (((0 - -726469861) > ((((max(6878740585913932204, -2))) ? (((~(arr_9 [4] [12] [i_6] [i_2] [i_0])))) : (min(3333991527478357598, var_10))))));
                        var_24 = (max((min((((115971254 ? var_1 : 0))), ((31034 ^ (arr_22 [i_0] [i_2] [i_6]))))), var_7));
                        var_25 *= (min((min((arr_3 [i_2] [i_2] [i_2]), (arr_2 [i_2] [i_2 - 2]))), (((!(~1))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, (min(((((arr_20 [i_0] [i_1] [2] [i_9]) != (arr_0 [i_2] [i_2])))), -3333991527478357598))));
                        var_27 = ((arr_8 [i_0] [i_9] [5]) <= (max((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1]), var_9)));
                    }
                    arr_26 [i_0] [i_0] [i_0] [i_0] = (min((max((240 + 0), ((9596377232131081246 ? -1485198085 : -2)))), (max((arr_9 [i_0] [i_0] [10] [i_0] [i_2]), 8850366841578470369))));

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_28 = arr_21 [i_0] [i_1] [i_2 + 1] [i_10] [i_10] [i_2 - 2] [i_1];
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((((((((arr_14 [i_0]) ^ 0)) - (((min((arr_20 [i_0] [2] [2] [2]), 12517))))))) ? (((0 <= (-1587071703 / var_3)))) : (!17)));
                    }
                    var_29 = (max(((6106018426553588786 ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1]))), ((1433730192 ? 42496 : (arr_10 [i_2 - 2])))));
                }
            }
        }
    }
    var_30 = (((min((min(var_5, var_3)), var_6)) / var_0));
    #pragma endscop
}
