/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_7 [i_0] [i_1] [i_3] [i_4]);
                                var_14 = (min(var_14, var_3));
                            }
                        }
                    }
                }
                arr_15 [12] [i_1] |= (min(((((arr_11 [i_0] [i_0] [i_1] [8]) == 127))), (arr_8 [i_0] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_15 = 1;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_16 = (!((min(((((arr_10 [i_5] [i_5] [i_5] [i_5]) | (arr_9 [i_6])))), (arr_24 [i_8] [i_7] [i_6] [i_5] [i_6] [i_5])))));
                            var_17 = (((((((max(var_9, var_3))) ? ((30 ^ (arr_13 [i_8] [i_8] [i_6] [i_6] [i_5]))) : ((max(var_0, (arr_18 [i_7]))))))) ? (((arr_2 [i_5] [i_6]) ? -2689258456819522124 : (arr_2 [i_5] [i_8]))) : 3));
                            arr_26 [i_5] [i_6] [i_7] = (arr_6 [i_8] [i_6] [i_5]);
                            var_18 -= (min((!1), (((arr_21 [i_5] [i_6] [i_5]) ? var_4 : (min((arr_24 [i_8] [i_7] [i_7] [i_7] [i_5] [i_5]), -1))))));
                            var_19 = (((((136836448 ? 2689258456819522124 : 2644549771))) ? ((((min(-5768477893355867852, 121))) ? (((arr_6 [i_8] [i_6] [i_5]) ? var_2 : (arr_25 [i_5] [i_7] [i_7] [i_8] [i_7]))) : (arr_1 [i_5]))) : (max(-53, (min(136836448, var_8))))));
                        }
                    }
                }
                var_20 += (max((min(4503565267632128, 0)), ((min(((var_8 ? -10 : var_0)), var_8)))));
            }
        }
    }
    #pragma endscop
}
