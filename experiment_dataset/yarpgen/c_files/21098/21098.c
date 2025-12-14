/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!127) << (var_4 - 3464533705599761418)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (min(((var_6 % (((8 ? (arr_0 [i_0]) : 174425652))))), (((+(min((arr_0 [i_0]), var_0)))))));
        arr_3 [i_0] = 15;
        arr_4 [9] = var_3;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = 3;
        var_12 = ((arr_6 [i_1]) ? ((((((~var_0) + 2147483647)) << ((((var_7 ? (arr_6 [5]) : var_3)) - 22270))))) : ((-6 ? (arr_7 [i_1] [i_1]) : ((var_0 ? 238 : var_6)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_13 *= (min((((var_1 - ((var_3 ? 123 : var_1))))), (((var_9 + var_8) ? var_7 : ((16 ? 39 : 17))))));
                        var_14 = (((((max((!var_6), -1)))) != (((max(var_3, 9223372036854775807)) >> (var_6 - 5602668830823940796)))));
                        var_15 = ((-(((arr_7 [i_2 - 1] [i_2 - 1]) / (arr_7 [i_2 - 1] [i_2 - 1])))));
                    }
                }
            }
        }
        var_16 = (arr_2 [i_2]);
    }
    var_17 |= (min(((min((max(26284, var_1)), var_1))), (min((68 / 666889533), ((4120541627 ? var_1 : 1459334130127192836))))));
    var_18 = ((!(((1 ? 17 : 1)))));
    #pragma endscop
}
