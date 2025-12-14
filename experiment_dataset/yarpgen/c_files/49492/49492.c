/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-66727341 ? ((41500 ? 524284 : 23436)) : (var_0 && 63136)))) ? (min(var_1, -var_9)) : -15));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = ((((+(((arr_0 [8] [i_1]) >> (var_13 + 4097032532118333838))))) & (~3221225472)));
            var_15 = var_5;
            var_16 = var_5;
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_17 += 3221225447;
            arr_8 [i_0] [i_2] = (((((var_2 ? var_6 : var_10))) ? (((arr_6 [i_2 + 1] [6] [5]) ? (arr_6 [i_2 - 3] [i_2 - 3] [i_0]) : (arr_6 [i_2 + 3] [i_2] [i_2 + 3]))) : ((3221225472 ? var_0 : 1))));
            var_18 = (max(var_18, 1114));
            var_19 = (((66727341 ? var_9 : 1)));
        }
        var_20 = (-(((((arr_7 [i_0] [i_0]) ? var_6 : var_8)))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_21 = -4;
        arr_12 [i_3] = (((((524284 ? var_10 : ((3221225498 ? 1073741824 : 24031))))) ? -66727364 : 4050));
        var_22 = (max(var_22, (max(((((((arr_5 [i_3]) ? -8440657055233169920 : -755214334))) ? -66727342 : (~-1073741824))), ((~((min((arr_10 [i_3] [1]), 59816)))))))));
        arr_13 [i_3] = ((min((arr_0 [i_3 + 1] [3]), (arr_0 [i_3 + 2] [i_3]))));
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        arr_18 [i_4] = (((((min(64398, (arr_14 [i_4 - 2]))) ? (arr_9 [i_4 - 2]) : 1))));
        var_23 += ((!((min((arr_1 [i_4 + 1]), (arr_2 [i_4 - 1]))))));
        var_24 += (max(((~(~66727341))), (((!-787838423) ? (-3533756727753585331 || 6589049243733732469) : 524284))));
    }
    var_25 = (~(((195902411 % 9174603442725762519) ? (-127 - 1) : 3)));
    var_26 = (!var_3);
    #pragma endscop
}
