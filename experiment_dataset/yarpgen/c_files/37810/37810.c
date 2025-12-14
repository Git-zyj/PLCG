/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_8, var_1));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_12 = (min(var_12, (max((((!var_4) ? (((((arr_3 [i_1] [i_1]) == (arr_2 [i_0] [i_1]))))) : (((arr_3 [i_0] [i_0]) * var_3)))), ((((!var_6) >= 120)))))));
            arr_4 [i_0] = ((min(2820030867, var_0)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (((((-39 / (((arr_0 [i_0]) + (arr_3 [i_0] [i_0])))))) && var_4));
            var_14 = ((-113 ? (min((0 / 3317566292), (arr_5 [i_0]))) : ((((28 ? var_8 : (arr_3 [i_0] [i_0]))) + (((~(arr_3 [16] [i_2]))))))));
            var_15 = ((!((min(1, 4294967295)))));
            var_16 = (-16 - 1);
            var_17 ^= ((~(((arr_0 [i_2]) / (arr_0 [i_2])))));
        }
        var_18 -= (var_9 && ((max((((9 ? 1 : 1))), ((var_4 ? 1 : (arr_6 [2])))))));
        var_19 = 4632047208859840993;
    }
    var_20 = ((((-(var_7 - 1))) / (((((!var_3) != var_7))))));
    #pragma endscop
}
