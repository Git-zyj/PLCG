/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min(var_18, var_7));
    var_20 = (!9223372036854775807);
    var_21 = (max(15032385536, ((max(((max(var_1, var_1))), ((var_4 ? var_0 : 24710)))))));
    var_22 = (min(var_13, ((((var_7 || -122) ? 0 : var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_23 = ((-((max(((((arr_0 [i_0]) < (arr_2 [1])))), (max(var_2, (arr_3 [i_0] [i_0] [i_1]))))))));
                var_24 ^= 65535;
            }
        }
    }
    #pragma endscop
}
