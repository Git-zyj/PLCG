/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(3802824007039216940, (min(3802824007039216940, 88))));
                var_19 = ((-((var_11 ? (-122 * 91) : 91))));
                var_20 *= (min((min((arr_3 [i_0 - 1] [i_0 - 3] [i_0 - 1]), -1)), var_11));
                arr_5 [1] [i_0] [i_0 - 3] = ((min((min(14643920066670334675, 25), var_2))));
            }
        }
    }
    var_21 *= (~var_8);
    var_22 &= (min(((min(var_2, var_1))), (min((!var_7), -94))));
    #pragma endscop
}
