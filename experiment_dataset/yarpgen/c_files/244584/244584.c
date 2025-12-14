/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_19 / 78) * var_2));
    var_21 += ((min(var_0, var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_22 *= (max(65535, 65512));
                    var_23 -= ((((((var_2 + 2147483647) >> (((arr_4 [i_0]) + 1337824213))))) ? ((-(arr_4 [i_1 - 1]))) : (((arr_4 [i_1 - 1]) ? var_19 : var_9))));
                }
                var_24 = var_11;
                var_25 = (((((!(arr_2 [i_1] [i_1 - 1])))) ^ var_19));
                var_26 = var_10;
            }
        }
    }
    #pragma endscop
}
