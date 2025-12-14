/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((1 % (((var_4 != (((var_3 ? var_5 : 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min(3454212692, -27));
                                var_16 |= (((arr_2 [i_4]) ? ((-(arr_7 [i_0] [i_1] [i_2] [0]))) : var_2));
                                arr_13 [i_4 + 1] [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = (((arr_2 [i_4]) / (((-95 ? var_11 : (arr_11 [i_0 - 3] [i_3 - 3] [i_2] [i_4 - 2] [i_4 - 2] [i_2 + 1]))))));
                            }
                        }
                    }
                }
                var_17 = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                {
                    var_18 = (((((min(var_6, var_8)) != (((max((arr_11 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7]), 1)))))) ? (((-32 + 2147483647) << ((((arr_9 [i_5]) == 3895521218547306307))))) : ((((arr_12 [i_5] [i_5] [i_5] [i_5] [i_7]) >= (-25 % -112))))));
                    var_19 &= (((arr_6 [i_5]) == (max((arr_9 [i_5]), ((((arr_10 [i_5] [i_6] [13]) ? var_7 : 46)))))));
                    var_20 = 3755065013;
                }
            }
        }
    }
    #pragma endscop
}
