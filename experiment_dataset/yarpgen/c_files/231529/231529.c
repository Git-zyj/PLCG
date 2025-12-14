/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_17 = (((+-3944104267231372041) ? var_12 : (max(var_15, var_9))));
        var_18 -= (!((!(!var_12))));
        var_19 = var_5;
    }
    var_20 = ((min(((var_5 ? var_8 : var_15), ((min(var_3, var_16)))))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = (min(var_21, (((~((0 ? -1606253892 : 457199216)))))));
                    var_22 = (min(var_22, ((min(var_11, ((24763 ? (min(-1606253891, (arr_3 [i_1]))) : (~1))))))));
                    var_23 -= ((-(((1 && (((740241314 >> (var_1 - 3840446295)))))))));
                }
            }
        }
    }
    var_24 = (max(var_1, var_13));
    var_25 *= (min((9 < -32), ((var_5 ? ((var_11 ? var_3 : -7121578320896588758)) : var_9))));
    #pragma endscop
}
