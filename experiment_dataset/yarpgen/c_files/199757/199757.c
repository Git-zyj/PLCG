/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((312994296 ? (arr_0 [5]) : (((((arr_1 [i_0]) ? 65535 : -1)) & 0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((var_7 ? (arr_2 [i_0]) : var_10)) - (((arr_1 [i_0]) ? -17783 : 32767)))))));
                            var_21 = ((((((((-(arr_0 [i_0])))) ? (var_16 / 177) : (arr_4 [i_0] [i_1] [15])))) + (((65535 ? 0 : var_3)))));
                        }
                    }
                }
                arr_9 [i_1] = ((+(((arr_6 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [0]) : (!var_1)))));
            }
        }
    }
    var_22 = (min(var_22, var_7));
    #pragma endscop
}
