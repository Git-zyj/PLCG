/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 += ((-var_0 ? var_0 : var_0));
        arr_2 [i_0] = ((min(var_6, var_5)));
        var_12 ^= ((((min(var_5, var_1)))));
        var_13 = (min(var_13, (~var_8)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(min(var_4, ((min(var_9, var_2))))))))));
        var_15 = (max(((((max(var_3, var_4))) ? (min(var_9, var_4)) : var_6)), var_7));
        var_16 = (((var_2 ? (max(268435456, -268435441)) : var_1)));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_17 = (((~(max(var_2, var_0)))));
                    var_18 = (min(((min((~var_0), var_1))), var_1));
                    arr_13 [i_1] [i_1] = (((var_2 ? var_6 : var_3)));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_19 = ((min(var_8, 2147483634)));
        var_20 = (min(var_20, (((((min(var_8, var_0))) ? (min(var_2, (min(var_4, var_7)))) : (((min(var_5, var_3)))))))));
        arr_16 [4] = -268435448;
    }
    #pragma endscop
}
