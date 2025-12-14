/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 857818842796818334;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_0] [i_2]);
                    var_18 = (min(var_18, (((min(-var_0, -3736429156748433539)) / ((((arr_6 [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2 - 1] [i_2 - 1]) : (arr_6 [i_2 - 1] [i_2 - 1]))))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = 64240;
                        var_19 = 54347;
                        arr_11 [i_0] = (((((+(((arr_9 [i_0] [i_0] [i_0] [i_3]) / var_10))))) ? -2 : ((min(-11190, ((min((arr_4 [i_0] [i_2 - 1] [i_2 - 1]), (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_20 = var_15;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_2 - 1] [i_1] [i_0] = (54347 ? -26 : 40650);
                        arr_15 [i_4] [i_0] [i_1] [i_0] = ((-((var_16 ? 3736429156748433543 : 6103091853398984627))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            var_21 -= ((64095 ? 1 : 14));
                            arr_20 [i_6 + 2] [i_5] [i_2] [i_0] [i_0] = (((var_5 + var_10) / (arr_18 [i_6 - 1] [i_6] [i_6] [i_5] [i_0])));
                            arr_21 [i_0] [i_1] [i_1] [i_6 + 2] = ((((arr_4 [i_0] [i_0] [i_0]) ? var_3 : 0)) - (27 / 6103091853398984630));
                            var_22 = 2077576162;
                        }
                        var_23 *= arr_9 [i_0] [i_2] [i_2 - 1] [i_5];
                        arr_22 [i_0] = (((arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_2 - 1]) / (arr_16 [i_0] [i_5] [i_2] [i_5] [i_2 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
