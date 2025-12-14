/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (min(var_12, (((var_5 ? (min(((max(58, 0))), (min(var_5, var_7)))) : 203)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(6604, (arr_0 [i_0])))) != ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] |= (max(var_5, (min((max(49, 4294967290)), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = (~(max(2311970210872541913, var_6)));
        var_14 = (min((((min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))))), 197));
        var_15 |= ((!((((-6611 + 2147483647) >> (((5415090635668247412 && (arr_5 [i_1] [i_1])))))))));
        var_16 ^= max(3493654513, (((198 || ((((arr_5 [i_1] [i_1]) ? 11319943436983621900 : (arr_5 [i_1] [i_1]))))))));
    }
    var_17 = (min(var_17, (((((-18446744073709551609 ? 13329596518243407171 : ((58 ? 197 : 7017369135648074431)))) > (((((min(45213, 3025039603))) ? (696810599833621349 || var_10) : ((var_4 ? var_0 : var_0))))))))));
    #pragma endscop
}
