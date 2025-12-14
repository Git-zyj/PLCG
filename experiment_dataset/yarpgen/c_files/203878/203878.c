/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (min(var_0, var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3])));
                                var_18 = ((221 ? -6975876181262319945 : 6975876181262319949));
                                var_19 ^= (arr_3 [i_0 - 1]);
                                var_20 = var_11;
                                var_21 = var_3;
                            }
                        }
                    }
                    var_22 = ((((((((arr_9 [i_0] [i_0] [i_0] [i_0 - 1]) * var_3))) ? -var_9 : var_7)) == (((+(((-1 + 2147483647) << (6975876181262319945 - 6975876181262319945))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_23 = ((((~(!-1340212789528231842))) <= var_8));
                    var_24 = ((((((((31 ? (arr_20 [i_5] [i_5] [i_5] [i_6]) : 5263923945199494391))) ? 18446744073709551597 : (arr_19 [i_5])))) ? var_10 : (arr_0 [1] [1])));
                    var_25 |= ((((min(var_10, var_7))) ? (((((arr_6 [i_6] [i_6] [i_7 + 1]) ? 2147483630 : (arr_2 [i_5]))))) : ((((arr_16 [1] [i_7 - 1]) && var_13)))));
                    var_26 = (((arr_0 [i_6 + 1] [i_6 - 3]) >> ((((min((arr_0 [i_6 - 2] [i_6 - 2]), (arr_0 [i_6 + 1] [i_6 - 1])))) - 32927))));
                    var_27 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
