/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((max((((arr_1 [i_0]) * -28212)), 10279241879661603014)) <= ((((((arr_1 [i_0]) & (arr_0 [i_0])))) ? ((1 ? 1 : (arr_0 [i_0]))) : (((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))))));
        var_15 = -10458;
        var_16 |= ((((((((arr_0 [i_0]) ? -10444 : -104))) <= 4294967286)) ? (var_9 || 1332817515) : ((~(((arr_0 [i_0]) ? (arr_1 [i_0]) : 2147483628))))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_17 |= (((((arr_5 [i_1 - 3] [i_1 - 3] [i_1]) ? 1 : (!4294967294))) == (arr_0 [i_0])));
            arr_6 [i_0] [i_1] [i_0] = ((max((arr_1 [i_1]), (((arr_4 [i_0]) ? -27654 : (arr_1 [i_0]))))));
            arr_7 [i_0] = 0;
            arr_8 [i_0] [i_0] [i_1 - 2] = ((((((1 ? 10 : (arr_0 [i_0]))) >> (-16979 == 1))) >= (((((37089 <= (arr_5 [i_0] [i_0] [i_1 - 2])))) & (-10462 < 103)))));
        }
        arr_9 [i_0] = ((4860633881874128113 ? (arr_1 [i_0]) : (40411 <= 14064480908778068807)));
    }
    var_18 *= (~1);
    #pragma endscop
}
