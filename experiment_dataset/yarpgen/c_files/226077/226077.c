/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_20 += (((max((((-2147483647 - 1) / (arr_5 [4] [i_0 + 1] [4]))), (((arr_0 [i_1]) ? 124 : var_11)))) % ((-((min(65522, (arr_4 [4] [4] [4]))))))));
                arr_6 [i_0] = (min(((max(48334, (arr_4 [i_0 + 3] [i_1 + 1] [i_0])))), ((-(arr_3 [i_0] [i_0] [i_0])))));
                arr_7 [i_0] [i_1] = ((((17202 == (arr_4 [i_1 + 1] [10] [i_0]))) ? ((((((arr_5 [i_1] [9] [i_0]) ? 17202 : 17179))) ? -8567 : ((97 ? (arr_2 [i_0]) : 48327)))) : ((-var_12 ? ((var_9 ? var_11 : (arr_2 [i_0]))) : (arr_3 [1] [i_0] [3])))));
                arr_8 [i_0] [i_1] = ((3968 ? 38592 : 142));
            }
        }
    }
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_22 = ((~((((0 << (var_13 - 17604631591964247896)))))));
                arr_13 [i_2] [i_2 + 3] [i_2] = (var_11 ? 32 : (8566 % -8566));
            }
        }
    }
    var_23 ^= (min((((max(var_18, 126)))), (((min(-1297658894, var_7)) / (~var_19)))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                var_24 *= (arr_15 [i_4] [i_5]);
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_30 [20] [i_5] [i_6] [i_5] [i_4] &= (max(var_3, 524280));
                                arr_31 [1] [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] = ((var_13 - (((((arr_23 [i_4] [i_4 + 1] [i_4] [i_7]) && (arr_23 [i_4 + 1] [i_4 - 1] [i_8] [i_4 - 1])))))));
                                var_25 = ((4712493426338127653 | (((((var_19 ? 1297658904 : var_19)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
