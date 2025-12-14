/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_12 ^= ((+(((arr_3 [i_1 + 1]) / (arr_3 [i_1 + 2])))));
                arr_5 [6] [i_1] = ((((min(var_9, 65535)))));
                arr_6 [i_1] [i_1] [i_1] = (--65535);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (((!((((arr_2 [i_0]) ? (arr_10 [i_1] [i_2] [i_1] [i_1 - 2] [i_1]) : (arr_7 [i_0 - 2] [8] [9] [i_0 - 2])))))) ? ((((!(arr_7 [12] [i_0] [i_0] [11]))))) : ((((max(var_0, (arr_10 [i_1] [8] [4] [1] [i_1])))) ? (~var_2) : ((var_2 ? var_4 : (arr_8 [i_1] [15] [i_2 + 1] [15]))))));
                            arr_11 [i_1] [i_1] [i_1] [i_0] = (((((!(arr_10 [i_1] [15] [i_1 - 3] [i_0] [i_1]))) ? (max(18446744073709551615, 1)) : (((min(var_6, var_0)))))));
                            var_14 = (max(var_14, ((min((((((arr_7 [2] [1] [i_2] [1]) ? (arr_3 [i_0]) : (arr_4 [i_0] [i_0]))) > 1)), ((((-(arr_8 [i_0] [i_0] [i_2] [i_3]))) <= (arr_4 [i_0] [i_3]))))))));
                            arr_12 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1] [i_1 + 1] = ((((((((arr_8 [i_1] [14] [i_2] [1]) ? 8 : (arr_7 [i_0] [9] [9] [9]))) | ((var_10 ? var_9 : (arr_4 [i_1] [1])))))) & (((arr_8 [i_1] [i_2 + 1] [i_1] [i_1]) & (min(2315708072, 921600333))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((((max(var_1, var_3))) == ((4294967295 ? 1 : var_6)))) ? var_8 : (!1)));
    #pragma endscop
}
