/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(((var_16 << (var_9 - 9635728869355088587))), -var_2))) ? (min(((43 ? 16 : var_0)), var_15)) : var_15));
    var_19 = (max(((var_1 ? ((min(var_4, var_7))) : 18)), (((!(!var_8))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0]), (!2381101226)));
        arr_3 [i_0] = (min(((min((8619276451770398749 >= var_9), (min((arr_1 [i_0]), -74))))), -1468914175));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = ((~(((-(arr_6 [i_1] [i_1]))))));
        arr_8 [12] |= ((~(((arr_6 [i_1] [i_1]) ? (min(-12555, var_9)) : (arr_4 [i_1])))));
        arr_9 [i_1] [1] &= ((-(((!14464645774963828770) ? var_16 : (arr_6 [i_1] [0])))));
        var_20 ^= (((((arr_6 [i_1] [i_1]) ? var_8 : (arr_6 [i_1] [i_1]))) | (min(((29843 ? (arr_6 [i_1] [i_1]) : 2147483647)), (((arr_5 [14] [i_1]) ? var_7 : (arr_6 [i_1] [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            {
                arr_18 [i_2] [i_2] [i_2] = (min(((((max(var_12, var_16))) ? ((877286500 ? var_3 : 73)) : (51102 + 1))), ((((-1779198058 | 0) || (((26162 ? (arr_4 [17]) : 24695))))))));
                var_21 = (arr_12 [i_2]);
                arr_19 [i_2] [i_3] = ((var_7 ? (min(((var_9 ? -1516670713 : 4294967295)), (73 > -8475449662705679990))) : ((((arr_6 [i_2] [i_3]) ? (((arr_0 [i_2]) ? -1839369388 : (arr_16 [i_2] [i_3] [i_3 + 1]))) : (((var_16 != (arr_14 [i_2] [i_2])))))))));
                arr_20 [1] [i_3] [i_2] = ((var_7 ? (((arr_17 [i_2] [i_2]) ? var_3 : (arr_17 [i_2] [i_2]))) : ((((((var_7 ? -68 : var_1))) ? (1 < -82) : (arr_6 [i_3] [i_3 + 1]))))));
                var_22 -= (max((arr_12 [8]), var_6));
            }
        }
    }
    var_23 ^= (min((max(43147, var_10)), ((min(var_1, ((2026419596 ? var_5 : 2268547673)))))));
    #pragma endscop
}
