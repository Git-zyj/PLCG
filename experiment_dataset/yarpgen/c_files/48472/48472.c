/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_1] [i_1] |= ((!(((min(var_8, var_2))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] = 255;
                                arr_14 [i_0 - 1] [i_1] [13] [i_2] [i_3] [9] |= 8106428233901294859;
                                var_12 ^= (((arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_4 - 1]) ? (arr_9 [10] [i_0] [i_0 + 1] [i_4 - 1]) : ((min((arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_4 + 1]), (arr_9 [7] [i_0 + 1] [i_0 - 1] [i_4 - 1]))))));
                                var_13 = ((var_9 <= (((((arr_3 [6]) ? (arr_12 [i_0]) : (arr_5 [i_1] [i_1] [17])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    arr_23 [i_6] = ((~((86 ? 86 : (arr_19 [8])))));
                    arr_24 [i_5] [i_6] [11] [17] |= (min((min((((arr_21 [i_5] [i_6] [16]) ? 18446744073709551615 : (arr_19 [i_7]))), (arr_20 [i_7 - 1] [i_7] [i_7 + 1]))), (((((2800271274966503314 >> (((arr_20 [i_5] [16] [16]) - 28974)))) % (arr_20 [i_7 + 1] [i_7 + 1] [i_7 - 2]))))));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_14 = (max(var_14, ((max(8106428233901294859, 193)))));
                        var_15 = 9223372036854775797;
                        var_16 -= 255;
                    }
                }
            }
        }
    }
    #pragma endscop
}
