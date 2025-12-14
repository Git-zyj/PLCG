/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = arr_1 [i_1];
                arr_6 [2] [i_1] [i_1] = var_6;
                var_14 = ((((var_6 != (var_8 != var_1)))) == var_2);
                var_15 = var_0;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = ((var_5 == (((var_8 == (15985091860216018232 % -683868591))))));
                            var_16 = var_5;
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
