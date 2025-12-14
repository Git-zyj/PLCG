/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min(var_13, (((!((max(2292489936, 2056524808351818163))))))));
                    var_16 = (((((max(var_9, (arr_1 [i_2] [i_1 - 1]))) ? -var_13 : (max(var_0, var_10))))));
                }
            }
        }
    }
    var_17 = (((max(((min(var_7, var_5))), var_10))) ? (((min(var_13, var_12)))) : ((var_8 ? (!var_5) : var_3)));
    var_18 ^= var_10;
    #pragma endscop
}
