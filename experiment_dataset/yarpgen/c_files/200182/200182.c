/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 &= var_6;
    var_14 = (min(var_14, 846987739));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((-(arr_0 [i_0] [i_0])))) && -var_11))) & ((((max((arr_1 [i_0] [i_0]), 9801681606115375215))) ? (!0) : -215))));
        arr_3 [i_0] = (((max((arr_1 [i_0] [i_0]), (40 + 32750))) == (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_15 = -32751;
        arr_6 [i_1] = (((((~(arr_0 [i_1 - 1] [i_1 - 3])))) ? (((arr_0 [i_1 - 2] [i_1 - 3]) | (arr_0 [i_1 + 1] [i_1 + 1]))) : (arr_0 [i_1 - 1] [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((((((44431 - 215) - (((arr_7 [i_2]) ? 9223372036854775785 : (arr_8 [i_2])))))) ? 0 : ((var_7 + (((15527 ? (arr_7 [i_2]) : var_8)))))));
        var_17 = (min((((((arr_7 [i_2]) * (arr_7 [i_2]))) / (arr_8 [i_2]))), 32749));
        var_18 = ((((!(arr_7 [i_2]))) && ((32714 == (min((arr_9 [i_2]), (arr_8 [i_2])))))));
        arr_10 [i_2] [i_2] = ((-(((4740671319290630496 / 215) >> (((((arr_9 [15]) ? 2035386108737675562 : (arr_8 [i_2]))) - 2035386108737675555))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 = (max(var_19, (((~((4294967287 >> (((arr_11 [i_3]) + 5563)))))))));
        var_20 = (min(var_20, (((((max((((arr_11 [i_3]) + (arr_12 [i_3]))), (((arr_11 [i_3]) + 86))))) - (max((((arr_12 [i_3]) ? var_6 : (arr_12 [i_3]))), (arr_12 [i_3]))))))));
        arr_13 [i_3] = 12421;
    }
    #pragma endscop
}
