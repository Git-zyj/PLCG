/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = ((((var_8 && ((min(var_2, var_2))))) ? (((!(var_9 && var_0)))) : var_4));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 &= min(var_7, ((482004987 ? 2637426786952524362 : 507259789428235124)));
                        arr_9 [i_0] [i_3] [i_2] [i_2] = -var_7;
                        var_15 -= var_8;
                    }
                }
            }
        }
        var_16 = var_10;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_17 += ((((min((arr_3 [i_4]), (arr_1 [i_4])))) ? ((~(-11 - var_8))) : 182));
        var_18 = (max(var_18, (((15809317286757027253 ? ((((((arr_4 [i_4]) ? (arr_6 [i_4] [i_4]) : var_2))) ? ((192 ? 15809317286757027253 : (arr_8 [1] [1]))) : ((2637426786952524363 ? 2637426786952524362 : var_10)))) : ((min((arr_5 [i_4] [i_4] [i_4] [i_4]), 2147483628))))))));
    }
    var_19 &= ((var_2 ? (!-var_10) : (((!(((var_1 ? var_1 : 1))))))));
    #pragma endscop
}
