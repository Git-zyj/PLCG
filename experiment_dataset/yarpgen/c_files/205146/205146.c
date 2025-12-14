/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (((min(19, (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))) % ((((arr_8 [0] [i_1 - 1] [i_2]) << (((arr_7 [i_0] [i_1 - 1] [i_0] [i_1]) - 3779767121)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = ((var_4 + ((-(arr_8 [i_4] [i_4] [i_4 - 1])))));
                                var_20 = (min((arr_11 [i_4] [i_0] [i_2] [i_0] [i_0]), ((min(0, -1863370723)))));
                                var_21 = ((((min((((-(arr_2 [i_0])))), -4294967286))) | (min(1, (min(4294967295, var_12))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 20;i_6 += 1)
        {
            {
                var_22 = (min((arr_16 [i_6 - 4] [i_6 - 3]), (min((arr_18 [i_6 - 3] [i_6 - 3] [i_6 + 1]), 2601416797))));
                var_23 = (max(var_23, var_9));
                var_24 = (arr_17 [i_6]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_25 = (max(var_25, ((min(-107, (arr_22 [i_7] [i_8] [i_8]))))));
                var_26 *= ((((max((min((arr_22 [i_7] [8] [i_7]), 112)), ((min(144, var_8)))))) ? 16747570684320877718 : 4294967295));
                var_27 = (min(var_27, var_15));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_28 |= ((((((arr_31 [i_9] [i_9 + 1] [i_9] [16]) - (arr_33 [2] [i_9 - 1] [i_11])))) ? (min(128, (arr_25 [18] [i_9 - 1]))) : (((((arr_31 [i_9] [i_9 + 1] [1] [4]) != (arr_33 [12] [i_9 - 1] [i_11])))))));
                            var_29 *= (max(1883274844, (arr_24 [i_9 + 1])));
                        }
                    }
                }
                arr_34 [i_9] = min(var_7, (max((max(var_1, 143)), (arr_16 [i_9 - 1] [i_9 - 1]))));
                var_30 += max(2375280558, var_7);
                arr_35 [i_9] [i_10] [i_10] = (((arr_18 [i_9] [i_9 - 1] [i_9 + 1]) || ((!(arr_16 [i_10] [i_10])))));
            }
        }
    }
    var_31 = (14858 | -var_13);
    #pragma endscop
}
