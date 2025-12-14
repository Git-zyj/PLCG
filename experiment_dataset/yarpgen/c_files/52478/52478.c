/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 += ((((893987968 < (arr_5 [i_0]))) ? (((arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) ? ((~(arr_8 [i_0] [i_0] [i_0] [i_0] [7]))) : 1287730982)) : 16571));
                            arr_9 [i_0] [i_0] [i_2] [i_2] = min(-893987968, (min(((var_12 * (arr_6 [i_0]))), ((-893987968 ? var_1 : (arr_1 [i_1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_18 = 3;
                            var_19 ^= var_14;
                            arr_16 [i_4] [i_1] [i_4] [i_1] [i_1] [i_1] = (0 ? (min((arr_1 [i_0]), 893987967)) : (arr_12 [i_5] [i_4] [i_1] [i_0]));
                            var_20 = (arr_13 [i_0] [i_1] [6] [i_5] [i_4] [i_5]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_21 = ((!(max((arr_2 [i_0] [3]), (32 || 137438953471)))));
                                var_22 ^= (max(0, -1));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_23 = (((min(0, (max(0, (arr_7 [i_0] [i_0] [i_1] [7]))))) << (var_13 - 32648)));
                                var_24 = (arr_5 [i_0]);
                                var_25 &= (((((-893987968 ? -9 : -893987968))) ? (arr_8 [i_0] [i_1] [2] [i_0] [i_11]) : (arr_11 [i_0])));
                            }
                        }
                    }
                }
                var_26 = var_10;
            }
        }
    }
    var_27 = var_7;
    var_28 = (min(var_2, (((!var_13) ^ var_12))));
    var_29 = var_8;
    #pragma endscop
}
