/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 -= (max((max(-var_7, 0)), 3040233322));
            var_22 |= ((!(var_17 || var_12)));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_23 = ((!((((max(0, 18019950748367833205))) || 1))));
            var_24 |= ((min(1, (arr_2 [i_2 - 1] [i_2] [i_2 + 1]))));
            var_25 = (max(var_25, (!168)));
            arr_6 [i_0] = (arr_3 [i_0]);
            arr_7 [i_0] [12] [i_0] = var_11;
        }
        var_26 = (((((660 ? 10968 : -7))) != (min((~99), (arr_4 [11] [11] [i_0])))));
        var_27 -= (max((arr_3 [i_0]), (arr_3 [i_0])));
        var_28 = (max(var_28, 1326355044616517937));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_29 |= (((arr_9 [i_3] [i_3 + 1]) ? 1326355044616517937 : ((((min(1164066161, 45)) | var_15)))));
        var_30 = ((~((max(var_6, 145)))));
        var_31 += 668;
        arr_11 [i_3] [i_3] = (var_7 <= 424332680);
    }
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_32 &= var_4;
        var_33 = (max(var_33, (arr_4 [i_4 - 4] [i_4] [i_4])));
        var_34 = (max(var_34, ((((arr_5 [1] [7]) ? ((((!192) & var_15))) : (max(-5236, -8233545852464340483)))))));
    }
    #pragma endscop
}
