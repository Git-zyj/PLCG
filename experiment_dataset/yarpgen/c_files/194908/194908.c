/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = ((max(12604053179098373952, 1)));
                            var_20 = (max((max(116, 5121513957354867140)), (((!(((197 >> (((arr_3 [i_3] [15] [15]) - 8993661388585343040))))))))));
                        }
                    }
                }
                var_21 = (((min((min((arr_10 [i_0] [i_0 - 1] [15] [15] [i_0 + 1]), (arr_9 [i_0] [i_0] [i_0]))), ((min((arr_4 [9]), var_10))))) + -var_15));
                arr_11 [i_0 + 1] [i_0 + 1] [i_1] = (((((min(116, var_13)) / (arr_8 [i_0 - 1] [0] [i_0 - 1])))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_22 = ((+((((arr_12 [12] [i_0 + 1] [i_0 + 2] [8]) || var_1)))));
                    var_23 *= (~115);
                }
                var_24 = (((((~((max(var_4, var_12)))))) ? 117 : 511));
            }
        }
    }
    var_25 = var_9;
    #pragma endscop
}
