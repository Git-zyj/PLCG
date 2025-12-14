/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((min((((12 ? 52 : -53))), 3069629632)))));
    var_19 = ((((min(var_4, (var_0 && var_16)))) ? var_1 : var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((-52 ? ((var_12 ? ((var_5 ? 2676156963 : 57)) : (((max(51, 0)))))) : ((((((arr_7 [i_0] [i_1] [2]) ? var_3 : var_16)))))));
                    var_21 = (~3466766776);
                    var_22 = (max(var_22, (((((((((421523356 ? 3778407225 : 61))) ? var_13 : var_14))) || ((((2954734903 > 88) ? (~3873443940) : (arr_4 [i_0 + 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
