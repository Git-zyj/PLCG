/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_0 ^ var_3) ? (2147483647 > 2147483647) : ((var_8 ? 8218586054240683746 : var_4))))) ? var_1 : var_1));
    var_12 = ((((max(var_6, ((3573101776831162031 ? 127 : -11628))))) ? (max(var_0, 2147483627)) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_2] = (((arr_2 [i_3 - 2] [i_1]) ? var_7 : var_8));
                        var_13 = (((arr_9 [i_2] [i_1] [i_2 + 1] [i_3 - 1]) ? (arr_8 [i_1] [i_1] [i_2 + 1] [i_3 - 1]) : var_1));
                        arr_13 [i_2] [i_1] [7] = ((-(arr_7 [i_0] [i_2] [i_3] [i_3 - 3])));
                        var_14 -= (~var_4);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_17 [i_2] [i_4] = (((arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_4] [i_4]) < (((+((((arr_16 [1] [i_2] [i_1] [i_2] [12]) >= var_5))))))));

                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            var_15 = arr_14 [i_2] [3];
                            arr_20 [i_2] [0] [i_2 - 1] [i_2] [i_2] = (i_2 % 2 == zero) ? ((max(((((((arr_2 [i_1] [i_1]) << (((arr_7 [i_0] [i_2] [i_2] [i_2]) - 14568578229072671333))))) ? 1 : (arr_5 [6] [6]))), ((((arr_10 [i_5 + 1] [i_1] [i_2 + 1]) && (arr_10 [i_5 - 1] [i_5 - 4] [i_2 + 1]))))))) : ((max(((((((arr_2 [i_1] [i_1]) << (((((arr_7 [i_0] [i_2] [i_2] [i_2]) - 14568578229072671333)) - 12899924841247911991))))) ? 1 : (arr_5 [6] [6]))), ((((arr_10 [i_5 + 1] [i_1] [i_2 + 1]) && (arr_10 [i_5 - 1] [i_5 - 4] [i_2 + 1])))))));
                            var_16 = (((((arr_1 [i_5 - 1]) == (!var_4))) ? ((var_5 ? (min((arr_0 [i_1]), var_1)) : (((var_5 ? (arr_1 [i_0]) : (arr_8 [4] [i_1] [i_1] [i_1])))))) : ((((-var_0 > (((var_9 & (arr_19 [0] [i_0] [i_2 - 1] [i_1] [i_0]))))))))));
                            arr_21 [i_2] [13] [3] [i_1] [i_2] = (arr_14 [i_2] [i_2]);
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_17 = (arr_2 [i_6] [i_0]);
                            var_18 = (arr_9 [i_2] [i_6 - 1] [i_4] [i_4]);
                        }
                        for (int i_7 = 4; i_7 < 13;i_7 += 1)
                        {
                            var_19 -= ((~((~(arr_10 [i_0] [i_2] [i_2 + 1])))));
                            var_20 = (min((arr_5 [i_2] [i_1]), (((((1 >> (52794 - 52763)))) ? (max(var_8, (arr_19 [5] [i_1] [i_2] [3] [12]))) : var_2))));
                        }
                        arr_26 [i_1] [i_1] [i_2] [i_2] [i_2] [i_4] = max(var_2, ((((arr_25 [0] [i_1] [i_2] [i_2 - 1] [i_0]) > (arr_6 [i_1] [i_2 + 1])))));
                        arr_27 [i_1] [5] [i_0] [i_0] [i_2] = ((max((arr_15 [i_2]), (arr_15 [i_2]))));
                    }
                    arr_28 [i_2] [i_1] = (max(((+(((arr_25 [i_2] [i_2] [i_2] [i_0] [i_0]) ? (arr_9 [i_2] [i_0] [i_1] [i_0]) : var_6)))), ((~(!var_1)))));
                }
            }
        }
    }
    #pragma endscop
}
