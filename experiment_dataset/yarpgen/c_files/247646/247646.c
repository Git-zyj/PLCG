/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 = ((991737226 ? var_3 : 131068));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_22 = 9222717062239616062;
                        var_23 = -9222717062239616069;
                        var_24 = -216;
                        var_25 = (9101350005219383673 <= var_12);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_26 = (max(var_26, (((((min(var_10, var_10))) & ((~(~-9222717062239616080))))))));
        var_27 = (((~63) >= ((min((arr_1 [i_4]), -14532)))));
    }
    #pragma endscop
}
