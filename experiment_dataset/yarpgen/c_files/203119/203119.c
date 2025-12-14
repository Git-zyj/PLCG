/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (8573 && -95);
    var_11 |= (65535 / 2);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((9 ? 95 : 15256777996952925444));
        var_13 = ((((((arr_1 [7]) ? ((7527581903016987601 ? 18446744073709551598 : (arr_0 [i_0]))) : ((((65535 && (arr_1 [i_0])))))))) ? var_2 : ((((!(arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = 249;
        var_15 = (max(31744, (-7527581903016987621 - var_4)));
        var_16 *= (((((var_7 * (max(-1508838812, 4611686018427387903))))) ? (((((!(arr_3 [i_1] [i_1])))) >> (((var_0 >= (arr_2 [i_1])))))) : (!3393704934)));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = (max((29 + 255), 7));
            var_18 = (((max(var_9, ((16 ? 126 : 3189966076756626172)))) == ((((((-7527581903016987602 ? 244 : 113))) ? var_7 : ((-1 ? -1130999815 : 255)))))));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            var_19 |= 255;
            var_20 = (min(var_20, (((!((((((-103 ? (arr_8 [i_1]) : (arr_2 [i_3])))) ? var_5 : (~3189966076756626145)))))))));
            var_21 = (11 <= 11);
            var_22 *= (((min(65535, 2551713507))) % 17411962053098014305);
        }
    }
    #pragma endscop
}
