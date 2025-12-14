/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : (!268369920)));
                arr_6 [16] = var_3;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 *= ((-778740109 || ((min(-268369899, -6130)))));
                                var_16 = (min(((268369899 & (max(var_14, (arr_0 [i_1]))))), (max(((min((arr_10 [i_2 + 3]), var_5))), ((var_13 | (arr_7 [i_2])))))));
                                var_17 &= (((((((46957099 ? (arr_9 [i_1] [1] [13]) : 268369920))) ? (arr_3 [i_0]) : (!7333946086666037138))) | (((1 == (arr_10 [i_3]))))));
                                var_18 = ((~(min((min(var_5, var_0)), var_0))));
                                var_19 += (min(var_7, (var_8 >= var_10)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_6 ? 268369899 : (max(var_2, (min(-766590359, 31))))));
    #pragma endscop
}
