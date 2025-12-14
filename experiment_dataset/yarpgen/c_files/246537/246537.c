/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(21, 6393207310680733708))) ? 4294967274 : (64433 * 20928))) ^ 9218));
    var_20 = min(((4294967274 | (min(1491198424, (-9223372036854775807 - 1))))), var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((min((((-((0 ? var_8 : var_0))))), 4294967266)))));
                            var_22 = (((((min(6393207310680733698, var_2)) - ((var_16 ? (-9223372036854775807 - 1) : 6393207310680733708)))) - (((-((var_6 ? (arr_6 [1] [i_3] [i_3]) : 38)))))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((min(0, (arr_10 [i_0] [i_0] [6] [i_3 + 1]))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_0] = (1 < ((1125899873288192 ? (arr_3 [i_0] [1]) : ((((arr_7 [10] [i_0]) ^ 15))))));
            }
        }
    }
    #pragma endscop
}
