/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (!var_2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (arr_4 [i_3] [i_0]);
                            arr_13 [i_1] [i_0] [i_1 + 1] [i_1 + 1] [i_0] = min((((var_14 ? var_14 : 2734231762))), (arr_6 [i_1 - 1] [i_3] [12]));
                            arr_14 [14] [i_0] [i_0] = ((((min((arr_4 [i_2] [i_2]), (arr_4 [i_3] [i_1 + 1])))) ? ((4294967267 ? 98 : 246)) : ((max((min(var_7, (arr_7 [i_3] [i_2] [i_1] [i_0]))), (arr_6 [i_0] [i_1 - 4] [i_1 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_15 ^= var_6;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_16 = var_3;
                                var_17 = (min(var_17, (arr_21 [i_8] [i_5] [i_7])));
                                var_18 = (min(((((((var_8 ? var_2 : var_3))) ? var_0 : var_9))), var_2));
                                var_19 += (min(((max((~1023), ((1 ? (arr_6 [i_7 - 1] [i_7 - 1] [i_5]) : (arr_7 [i_4] [i_5] [i_6] [i_7])))))), ((var_2 ? var_8 : 4154215626))));
                            }
                        }
                    }
                    var_20 = (((arr_17 [i_4] [i_5]) ? var_6 : (arr_20 [i_5])));
                    var_21 ^= ((~(max((arr_6 [i_4] [i_5] [i_6]), 175))));
                    arr_29 [i_4] [i_4] [i_6 + 1] [i_4] &= (((((~(~7501171829110411450)))) ? ((((arr_4 [i_5] [15]) <= (arr_6 [i_6 + 1] [17] [i_6 + 1])))) : (arr_15 [i_4])));
                    var_22 = (min(var_22, var_9));
                }
            }
        }
    }
    #pragma endscop
}
