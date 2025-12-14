/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_2 ? ((var_19 | (((max(var_10, 65535)))))) : 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((((max(var_19, 4193))) ? ((var_6 >> (989976494 - 989976468))) : var_1))) ? (max((arr_1 [i_0]), 18446744073709551615)) : ((((min((arr_1 [i_0]), 6234)) - 51690)))));
        var_21 -= -7943612027685914677;
        var_22 = ((~(arr_1 [i_0])));
        arr_3 [6] |= (max((!13845), (arr_1 [i_0])));
        arr_4 [10] [0] &= ((+(max((arr_0 [i_0]), var_18))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_23 = (arr_6 [i_1]);
        var_24 = min((arr_5 [i_1]), ((((arr_1 [i_1]) ? 0 : 13845))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [6] [i_3] = (arr_12 [i_3]);
                var_25 -= (arr_8 [8]);
                var_26 = (max(((((min(var_7, var_3))) ? var_5 : ((var_14 ? 0 : (arr_6 [i_2]))))), ((max((-127 - 1), ((((arr_10 [8] [8] [i_3]) || 1))))))));
                arr_14 [i_3] [i_3] = max(var_15, ((-(arr_7 [i_3]))));
            }
        }
    }
    var_27 = (max(var_27, (((var_16 ? var_8 : var_6)))));
    var_28 = (max(var_28, ((((((var_2 ? var_15 : var_12))) ? var_4 : var_4)))));
    #pragma endscop
}
