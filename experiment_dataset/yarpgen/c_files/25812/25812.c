/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_1] [i_3] = (arr_11 [i_0] [4] [i_2] [0]);
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0] = (max((min((max((arr_6 [i_1]), 8796088827904)), (arr_7 [i_1] [i_1] [i_3]))), (5196044204013872378 || 5196044204013872378)));
                            var_21 = (min((arr_6 [i_1]), (arr_6 [i_1])));
                            arr_14 [i_1] = (max((min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1]))), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1])))));
                        }
                    }
                }
                var_22 = (min(((min((arr_8 [i_0] [i_0] [i_1 - 1] [i_0]), (arr_3 [i_0] [i_0] [i_0])))), (((arr_6 [i_1]) ? (arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1]) : (arr_4 [i_0] [i_1])))));
                arr_15 [i_0] [i_1] = (min((6259922507368066447 / 1056964608), 1354903286));
                var_23 = max(((((((((arr_2 [i_0] [i_1]) != (arr_2 [i_0] [i_1]))))) != (arr_4 [i_0] [i_1])))), (min(18446735277620723693, 13250699869695679230)));
                arr_16 [i_1] [10] [i_1] = (min((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (max((min(9222246136947933184, 593223930)), (arr_10 [i_1 - 1] [i_0])))));
            }
        }
    }
    var_24 = var_19;
    var_25 ^= var_4;
    #pragma endscop
}
