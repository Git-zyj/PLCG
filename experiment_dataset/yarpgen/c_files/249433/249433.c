/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((var_6 % (min(var_6, 60823)))), ((max(73, 97)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 -= (max((4131813324 != var_13), ((!((max(8924650083286451371, 151)))))));
                    var_16 = var_10;
                    var_17 = (min(var_17, (arr_4 [i_0] [i_1] [i_0] [i_2])));
                    var_18 = (max(1, -8924650083286451382));
                }
            }
        }
    }
    var_19 = var_8;
    var_20 -= (1 - 2147483647);
    #pragma endscop
}
