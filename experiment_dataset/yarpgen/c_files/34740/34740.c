/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_0 % 161);
    var_19 -= 9223372036854775807;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_8 [19] = (arr_5 [i_2] [i_2] [i_2 - 1] [i_2 - 1]);
                        var_20 ^= (((105 * 9043323067670877663) <= (((max(1, 65535))))));
                        var_21 ^= (arr_6 [20] [i_0] [i_1] [i_2] [i_3]);
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        arr_13 [i_0] [21] [4] [11] = (((((arr_10 [i_0] [15] [i_2] [i_4] [i_2] [i_4]) ? (arr_11 [i_0] [6] [0] [7]) : (arr_6 [i_0] [i_1] [i_1] [i_2] [i_4]))) >> ((((min((arr_4 [i_1] [9] [i_1]), 0))) >> (((arr_6 [i_0] [i_0] [i_1] [i_4] [i_4]) ? 0 : (arr_9 [i_4] [i_2] [12] [2] [i_1] [i_0])))))));
                        var_22 ^= ((((min(((~(arr_0 [i_1] [i_1]))), (((-(arr_4 [i_0] [8] [i_2]))))))) ? (!-853771492) : ((((var_7 || (arr_11 [i_0] [22] [1] [i_4])))))));
                        arr_14 [18] [i_1] [5] [i_4] [i_4] = ((min((arr_3 [i_4] [i_4 + 2] [i_2 - 1]), var_8)));
                    }
                    arr_15 [i_0] [0] [i_2] [1] = -3499467439387580534;
                    arr_16 [i_0] [10] [i_2] [i_0] = 127;
                    arr_17 [i_0] = ((~((11 / (arr_0 [i_0] [i_1])))));
                    arr_18 [1] [i_1] [1] = ((+((+(max((arr_2 [1]), (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
