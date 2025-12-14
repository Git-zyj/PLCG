/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2 + 2] [i_0] [i_1] = ((arr_7 [i_0] [i_1]) << ((-1516150856360184558 ? (-6873721413924213311 >= var_8) : 16006)));
                    var_21 = (((((~((-(arr_4 [i_1 + 1] [i_1])))))) ? (min(8969384713332503511, -120)) : 1));
                }
            }
        }

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_22 -= (arr_0 [i_0] [i_3 + 2]);
            arr_11 [i_0] = -109;
            var_23 -= var_12;
        }
    }
    var_24 = var_18;
    var_25 = 2001100807;
    #pragma endscop
}
