/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 132;
    var_13 = ((!(!-1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 += (arr_9 [i_0 - 1] [i_0 + 2]);
                        var_15 = (min(var_15, (((3 ? (109 < 669841819) : (arr_6 [i_0 + 1]))))));
                        arr_11 [i_0] [i_1] [10] [i_3] [i_3] [i_3] = ((218 ? (arr_9 [i_1 + 2] [i_1 + 2]) : (arr_4 [i_1 - 2] [i_1])));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = 453597551;
                        var_16 *= (arr_4 [i_0] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [14] [i_1] [12] [i_1] [i_2] [i_2] = (max(((max(45392, (arr_8 [i_0] [i_0] [1] [i_0 - 1])))), (min((((arr_7 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [5] [i_0 - 1]) & (arr_9 [19] [i_1]))), (((0 >= (arr_9 [8] [i_1]))))))));
                        var_17 = (!-45381);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = max((((((-8747 ? -1242706964 : 223))) ? ((((arr_17 [i_5] [i_5]) != -25562))) : (((arr_17 [i_0 + 1] [i_2 + 1]) << 0)))), 2423914989);
                                var_19 = (((((((50 ? 127 : (arr_23 [18] [6] [18] [14] [i_5 - 1] [13] [i_0]))) > (arr_10 [i_5 + 1] [13] [i_1]))))));
                                arr_24 [i_1] [1] [i_1] [i_1] [i_1] = ((((!(arr_23 [i_2] [i_1] [i_2 + 1] [i_5] [i_6] [i_2 + 1] [i_6])))));
                                var_20 += (((!143) ? ((((max(230, -2147483618))))) : (arr_6 [i_0])));
                                var_21 = (max(((-5174 ? (((3788268575 ? 59944 : 20144))) : (max(2534750947004790618, 5586)))), ((((arr_23 [i_5] [i_5] [i_5 + 2] [i_5] [i_5 - 2] [i_5] [i_5]) & 1581835774)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= ((~(0 - 18446744073709551611)));
    #pragma endscop
}
