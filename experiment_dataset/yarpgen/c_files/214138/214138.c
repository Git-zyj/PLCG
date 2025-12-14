/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_0 >= (min((((6178351051255820314 ? 245 : 1156381620))), (min(727352418, var_14)))))))));
    var_17 = (min(var_17, (((-1 > (max(((-231728394451898522 ? 231728394451898500 : var_6)), ((min(3138585674, 15116))))))))));
    var_18 &= (min(var_1, (var_3 != 74)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 6178351051255820314));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((90 ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))) > (arr_3 [i_0 + 1]))))));
                                var_21 = (((arr_7 [i_0] [5] [5] [i_0]) | 0));
                                var_22 = var_6;
                                var_23 = ((~((((min(var_5, 16842074642258222563))) ? ((max(400403555, 2519329765))) : var_14))));
                            }
                        }
                    }
                }
                var_24 += 16;
            }
        }
    }
    #pragma endscop
}
