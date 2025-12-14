/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((((~(34367 ^ 89)))) * var_1));
    var_15 = (max(var_15, -var_10));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [0] |= (max((arr_0 [i_0] [i_0]), var_12));
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] = (arr_0 [i_1] [i_1]);
            var_17 = ((((((max((arr_1 [i_0 + 1]), (arr_3 [i_0] [i_1]))) + (min(var_12, (arr_1 [i_0])))))) ? (((((-(arr_3 [i_0] [i_1])))) * (arr_1 [i_1]))) : (((1395864106 / 28683) ? (((var_6 / (arr_3 [i_0] [i_0 - 1])))) : ((3151786252 / (arr_1 [i_1])))))));
            arr_6 [i_1] [i_1] [i_1] &= (min(var_6, (arr_3 [i_1] [i_1])));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [3] = (((((var_1 ? 3100742955 : 1194224335))) ? ((89 ? 576587503 : 123568334)) : ((-1198811694 ? 1194224340 : -2048050639))));
            arr_12 [i_2] [i_0] = (((!((max(-24, 8918571224438054545))))));
            arr_13 [i_0] [i_0] [i_0] = (arr_1 [i_0 + 1]);
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_18 = (max(var_18, 1194224341));
        arr_17 [i_3] = ((~((62731 & ((881390477 ? 3064707128 : 530654252))))));
    }
    #pragma endscop
}
