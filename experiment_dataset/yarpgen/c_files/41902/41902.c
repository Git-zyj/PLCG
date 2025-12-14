/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_13 = (arr_7 [i_0 - 2] [i_1 + 1] [i_2 + 2] [i_2 - 1]);
                    var_14 = (arr_3 [i_0] [11] [i_2]);
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_15 += (arr_6 [i_0] [i_0] [i_1] [i_3 - 1]);

                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_16 = ((~(arr_2 [i_0 - 2] [i_0] [i_0])));

                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min((arr_3 [i_0 + 1] [i_3 - 1] [i_1 - 1]), (arr_3 [i_0 - 2] [i_3 + 2] [i_1 + 1])))) / (arr_3 [i_0 - 1] [i_3 + 1] [i_1 - 1])));
                            var_17 = var_3;
                            arr_17 [i_0] [i_0] [5] [i_0 - 2] = (max(((3710241650 / (((var_9 ? (arr_11 [1] [1] [i_3] [i_4] [i_3] [i_3 + 2]) : 20868))))), (-32767 - 1)));
                            var_18 = (max((((((max(var_4, (arr_10 [i_5] [i_1] [i_5] [i_4])))) && var_0))), 96));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_19 = var_5;
                            var_20 |= (min(((max((!62), (~var_1)))), ((2048 ? 4092 : 17653586559625744926))));
                            var_21 = 16353197539949577666;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_4] [i_3] [6] = ((var_2 ? (((arr_15 [i_7 + 2] [i_4] [i_3 - 1] [i_1] [i_0]) + var_9)) : var_6));
                            var_22 = var_7;
                            var_23 = -var_8;
                        }
                        arr_23 [i_0] [5] [5] [i_0] [5] [i_0] = ((((0 > (arr_11 [i_3 + 2] [13] [i_3 + 1] [i_3] [i_1 - 2] [i_0 - 2]))) ? ((-(arr_11 [i_3 + 1] [i_0 - 1] [2] [i_0 - 1] [i_1 + 2] [i_0 - 1]))) : (((arr_11 [i_3 + 1] [i_1 + 1] [i_3 - 1] [6] [i_1 + 1] [i_0 + 1]) & (arr_11 [i_3 + 2] [i_1 + 2] [1] [i_1 + 2] [i_1 + 2] [i_0 + 1])))));
                        var_24 = (min(var_24, (arr_13 [i_4] [i_3 + 1] [i_0] [i_0] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_3 + 1] [i_8] = (((arr_13 [i_0] [5] [i_3 + 1] [i_8] [i_0]) ? -20868 : ((var_1 ? (arr_4 [13] [i_3 - 1]) : (arr_2 [i_1] [i_0] [i_1 + 1])))));
                        var_25 = ((var_4 ? 30871 : var_1));
                        var_26 = (((((-20864 / 58566) != ((((arr_6 [i_0] [i_0] [i_0] [i_0]) > 57))))) ? ((-((~(arr_20 [i_3] [i_0]))))) : (((arr_19 [15] [i_1 - 2] [i_1]) & ((min(-114, 63)))))));
                        var_27 = (arr_6 [i_8] [i_1] [i_1] [i_0]);
                        var_28 = (min(((max(0, (arr_20 [i_0] [i_0])))), ((-(arr_20 [14] [i_0])))));
                    }
                    var_29 = var_2;
                    var_30 = (min(-9565, (((((-127 - 1) ? 2000011039073660271 : 18)) - var_0))));
                    var_31 = (max(var_31, (((((((arr_19 [15] [i_1] [i_3]) ? -7936 : (var_5 ^ 96)))) ? (min((((1 ? var_5 : (arr_12 [i_0] [i_0] [i_0])))), -var_8)) : (((((min(113, var_4))) ? ((max(var_4, (arr_1 [i_0 - 1] [i_0 - 1])))) : 1))))))));
                }
                var_32 = (((((((max(var_8, (arr_5 [i_0 - 1] [6] [i_0] [12])))) ? ((-(arr_2 [4] [i_0] [i_0]))) : -var_7))) ? ((((((1 ? 58 : -32553))) == ((var_5 ? (arr_19 [i_0 - 2] [i_0 - 2] [i_1]) : var_8))))) : (((arr_11 [5] [i_0] [i_0] [i_0] [i_0] [i_0]) / 3))));
                var_33 = (((((-((var_10 ? (arr_18 [i_0] [i_1] [i_0] [i_1] [i_0 - 2] [i_0] [i_1 + 1]) : 16353197539949577656))))) ? ((((var_9 == (arr_10 [i_1] [i_1] [i_1] [3]))) ? var_8 : var_2)) : var_1));
            }
        }
    }

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_34 += var_9;
        var_35 *= (arr_28 [20]);
    }
    var_36 = (min(((min(93, 11))), 10853));
    var_37 = ((var_8 ? ((-var_10 ? var_10 : (min(2, var_8)))) : ((min(((-64 ? 1 : -2072)), ((max((-32767 - 1), -124))))))));
    #pragma endscop
}
