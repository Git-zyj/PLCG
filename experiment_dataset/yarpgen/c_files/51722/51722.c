/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_16 = (max(54, var_15));
                            var_17 = var_0;
                        }
                    }
                }
                var_18 = (max((((var_2 >> (54 - 38)))), (((arr_7 [i_0]) ? 55 : (arr_1 [i_0])))));
                var_19 = ((((((((arr_2 [i_0]) ? (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_6))) ? (var_3 % var_5) : 67108608)) >= -var_7));
                var_20 = ((var_14 ? (max((((arr_1 [i_0]) % 32702)), (((-32687 ? -82 : (arr_8 [i_0])))))) : (((~((min((arr_5 [i_0]), var_3))))))));
            }
        }
    }
    var_21 = ((var_12 ? ((var_1 << (((var_14 + 130) - 16)))) : (((!((max(var_2, var_8))))))));
    #pragma endscop
}
