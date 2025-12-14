/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (((max(4294901760, ((min(225, 9357)))))) ? (arr_2 [i_0]) : ((((min(-22509, var_10))) - 13968810187282840741)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_9 [18] [18] [i_1 + 2] [i_3 - 2] [i_3]) ? (((arr_7 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1]) ? (max(11, (arr_7 [i_3] [i_1 - 2] [i_2] [i_3]))) : 128)) : (2147483647 || 9007794744410657434))))));
                            var_18 = (((arr_1 [i_0] [12]) | (((((18446744073709551615 ^ 1) >= var_1))))));
                            var_19 -= min(((((arr_9 [i_3] [i_1 - 1] [i_2] [i_3 - 3] [16]) ^ (31 ^ -30588)))), 7046967932521557221);
                            var_20 = ((24621 / (((arr_8 [i_1 + 1] [i_1 + 1]) | (arr_0 [i_0])))));
                            var_21 = max(((var_9 ? 10832343974664291611 : 6046256936190037537)), (((-(arr_9 [i_3 - 3] [i_0] [i_1 + 2] [22] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            {
                var_22 = (arr_11 [i_5 - 1] [i_4]);
                var_23 = (min(((((var_8 ? 9007794744410657451 : (arr_0 [i_5 + 1]))))), (min(var_9, (max((arr_15 [i_4] [i_4] [i_5]), var_13))))));
                var_24 = (((arr_11 [1] [i_5 + 1]) + (((arr_11 [i_5] [i_5 - 1]) + 15))));
                var_25 = 9007794744410657459;
            }
        }
    }
    #pragma endscop
}
