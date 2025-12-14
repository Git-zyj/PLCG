/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_2;
    var_16 = var_8;
    var_17 = (min(var_10, var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (((max(((max(var_13, (arr_0 [i_0])))), ((254 ? var_5 : var_4)))) / ((max((max(var_10, var_6)), (~var_7))))));
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = 1536;
            var_20 = (max(var_20, (((~((255 ^ (arr_0 [9]))))))));
            var_21 = (max((min(4294967295, var_2)), ((0 ? (((-947418629 ? 4294967282 : 4344))) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0])))))));
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_22 = ((((arr_5 [i_2] [i_2] [i_2]) + 9223372036854775807)) << ((((((~(!947418630))) + 48)) - 47)));
        var_23 = (arr_9 [i_2]);
        var_24 = ((((max((0 < 5752710323533065860), 2147483647))) || var_1));
        var_25 = ((~(min((max((arr_7 [i_2]), var_10)), (0 != 26)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_26 &= (arr_11 [i_3] [i_3]);
        var_27 = (947418630 != 31467);
        arr_13 [i_3] = var_3;
        arr_14 [i_3] = ((-(min(((min(20607, -946))), 4294967295))));
    }
    #pragma endscop
}
