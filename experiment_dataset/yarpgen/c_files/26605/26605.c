/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((~var_16) ^ ((((var_4 & 247) & (min(16, var_12)))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = ((~((-(arr_4 [i_2 + 2] [i_2 + 2] [1])))));
                    arr_6 [i_0 - 1] [i_1] [i_0 - 2] [i_0 - 1] = ((((max(var_6, (max((arr_1 [i_0]), var_8))))) && -var_11));
                }
            }
        }
        arr_7 [i_0 - 2] = ((((((var_8 == (arr_4 [23] [i_0 - 2] [i_0]))) ? (arr_3 [i_0 - 1]) : ((((arr_3 [i_0]) && var_14))))) > ((~((((arr_2 [i_0 + 1]) > var_6)))))));
    }
    var_22 = ((!((min((((31 ? var_1 : var_15))), var_9)))));
    var_23 = ((((((max(var_18, var_2))) ? var_11 : (~var_17))) * (((var_19 || ((max(var_12, 31))))))));
    var_24 = (((((((!var_13) && ((max(-4332515792509551751, var_3))))))) * (min(var_10, (~var_16)))));
    #pragma endscop
}
