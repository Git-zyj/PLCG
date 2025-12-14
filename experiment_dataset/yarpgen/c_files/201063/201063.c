/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(8365204310387103658, ((max(var_1, var_11))))) == var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 *= (arr_6 [i_0] [i_2 + 2] [i_0]);

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_19 = (-((max(-18880, -18717))));
                        var_20 = 18722;
                        var_21 = ((!(((arr_7 [i_1] [i_1]) || (var_13 && var_10)))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_22 = var_6;
                        var_23 += ((!((((arr_7 [i_0] [i_1]) ^ (!65535))))));
                    }
                    var_24 = ((-18707 ? 0 : -18707));
                }
            }
        }
    }
    var_25 = (min((min((!var_12), (~-28274))), ((var_7 ? (8 & var_11) : var_10))));
    #pragma endscop
}
