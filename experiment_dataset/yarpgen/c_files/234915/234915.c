/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_7));
    var_15 |= var_3;
    var_16 = (min(var_8, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((((!-0) % ((max(-30482, 39))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_18 &= 201;
                    var_19 = (((var_6 - var_6) + 16230344135182495101));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_20 *= ((-1644365546892048784 ? (arr_8 [4] [i_0] [11] [i_3]) : ((min(1501747072, ((min(140, 5))))))));
                    var_21 = (max(var_21, ((max(-132, (((min(-5211, 26861)))))))));
                }
                var_22 *= (((((((min(-11776, var_8))) ? -104 : (arr_9 [i_0] [i_0] [i_0] [i_1 + 1])))) > (~7420326158285657082)));
            }
        }
    }
    #pragma endscop
}
