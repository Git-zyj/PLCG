/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 &= var_12;
    var_16 = (min(((var_6 - ((var_11 ? var_1 : var_12)))), var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 += (min((((arr_0 [i_0]) << (4308840839972284850 - 4308840839972284849))), ((((arr_0 [i_0]) < (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((!((((arr_0 [i_0]) + (arr_4 [i_0] [i_0] [i_2]))))));
                    var_20 = var_2;
                    var_21 = 14137903233737266765;
                }
            }
        }
    }
    var_22 = (max(var_22, ((((((var_12 ? var_0 : 14137903233737266765))) < var_13)))));
    #pragma endscop
}
