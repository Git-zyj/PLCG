/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = ((((((min(var_7, var_0))) ? (((var_2 ? var_2 : var_7))) : ((var_0 ? var_0 : var_8))))) ? ((-3 ? -3 : -105)) : ((7 ? -39 : -26)));
    var_13 = min((((-((var_3 ? var_2 : var_2))))), var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_14 = (min(((max(24, 16))), ((52 ? 1 : 41))));
                    arr_7 [i_0] [i_0] = (((!511) ? (max(var_5, var_0)) : ((var_7 ? var_0 : var_3))));
                    arr_8 [i_0] [i_1] [i_1] = ((-((((~var_2) == var_4)))));
                }
                arr_9 [i_0] [i_1] [i_1] = var_0;
                var_15 = var_6;
                var_16 = (min(var_16, ((min((min(var_5, var_9)), ((var_1 ? var_1 : var_0)))))));
            }
        }
    }
    #pragma endscop
}
