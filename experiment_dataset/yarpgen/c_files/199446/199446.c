/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((96 & ((((104 ? 45419 : 3023917086))))));
    var_16 = (var_4 ? var_5 : ((var_13 >> (((min(var_9, var_13)) - 75)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [19] [i_0] [i_1] [i_1] = (arr_1 [i_0]);
                    var_17 = ((~((804120068882705492 | (arr_3 [i_1 - 1] [i_1])))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [11] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_4] [i_1]) > (arr_3 [i_0] [i_4])));
                            var_18 = ((((5668919515444925129 ? (arr_2 [i_2] [i_4]) : (arr_5 [i_0] [i_0] [i_0])))) ? ((1 ? (arr_1 [i_4]) : 3623307296)) : (arr_1 [i_2]));
                            arr_14 [i_1] [i_1] [i_1] [i_3] [6] [i_0] = (!-2066427987);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-12777824558264626497 ? (~var_5) : (max((((var_9 == (arr_2 [i_0] [i_1])))), ((12764889632441249201 ? 25 : 4349432650349444546))))));
                            var_19 -= (~22591);
                            var_20 += ((-(((!(arr_0 [i_1 - 1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_21 ^= (((6253961936019200544 || 12764889632441249216) ? (arr_2 [i_2] [i_0]) : ((-(arr_6 [i_3])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_11 [i_1 - 1] [i_1 + 1] [i_6 - 1] [i_3] [i_2]) ? ((53342 | (arr_11 [i_0] [i_1] [i_2] [i_0] [i_0]))) : (((arr_2 [i_3] [i_1]) ? var_10 : 150)));
                        }
                        var_22 = min((max((12777824558264626486 | 4971064835182740246), 42926)), (min(1035955774, 14823289926684199188)));
                    }
                }
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
