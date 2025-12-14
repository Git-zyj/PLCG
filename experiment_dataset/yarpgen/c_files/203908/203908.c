/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= -40;
    var_21 = (min(var_21, (((var_2 ? var_10 : var_13)))));
    var_22 = ((min(-44, -38)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((min((((((17386368316187892818 ? (arr_1 [i_1]) : 23634)) << (((arr_1 [i_3]) + 2146))))), ((-(arr_9 [i_4] [i_3] [i_2] [i_1] [1] [i_0]))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (min((arr_3 [i_0] [i_0]), ((~(arr_3 [i_3] [i_1])))));
                                var_24 = (((arr_8 [5] [20]) >> (((((arr_5 [i_4]) ? var_16 : ((((51139 > (arr_9 [i_0] [i_1] [i_1] [19] [i_3] [i_4]))))))) - 2980906276))));
                            }
                        }
                    }
                }
                var_25 = (min(var_25, ((max(1792, (min((arr_10 [i_0] [11] [i_0] [i_0]), var_13)))))));
                var_26 = (min(99, (((arr_9 [i_0] [i_0] [i_0] [i_0] [16] [i_0]) ? var_5 : (arr_9 [i_1] [i_0] [19] [20] [i_0] [20])))));
            }
        }
    }
    #pragma endscop
}
