/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(var_12, ((((max(9223372036854775807, (((arr_0 [i_0 - 1]) ? var_7 : 3265849849))))) ? (((min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 + 1]))))) : (((var_2 ? var_3 : (arr_1 [i_0] [i_0]))))))));
        var_13 = (max(var_6, ((min(((max(127, (arr_1 [i_0] [i_0 + 1])))), (((arr_1 [i_0] [i_0]) + (arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = var_8;
            var_15 = var_1;
            arr_6 [i_1] [4] &= ((((!((max((arr_5 [i_1]), var_6))))) || ((min((arr_4 [6] [7]), (arr_4 [i_1] [4]))))));
            var_16 |= (((min(var_10, (!var_1))) % ((((((min(var_6, var_6)) + 9223372036854775807)) << (((arr_2 [i_1]) - 52050)))))));
        }
        var_17 = ((((((((arr_0 [i_1]) ^ (arr_4 [i_1] [i_1])))) ? (~1039997349) : (max((arr_5 [i_1]), (arr_2 [i_1]))))) * (arr_1 [i_1] [i_1])));
    }
    var_18 = var_2;
    var_19 = var_2;
    var_20 = (max(var_20, 255));
    #pragma endscop
}
