/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = (((min(3140606090669932919, (!1))) > 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 *= (min(((var_4 % (min(var_16, var_3)))), (min((arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 2]), var_1))));
                    var_20 = (max(var_20, -1041419685));
                }
            }
        }
        arr_9 [7] [i_0] = (-1 > 2147483633);
    }
    var_21 = var_3;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_22 = (min(var_22, 11851));
                var_23 = (min(var_23, ((((var_3 / -var_14) ? (arr_4 [i_3 - 3]) : ((11209248057680086363 + ((0 ? 54895 : 119)))))))));
            }
        }
    }
    var_24 = -var_17;
    #pragma endscop
}
