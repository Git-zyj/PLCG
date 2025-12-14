/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_2, var_6));
    var_18 = ((+((min((var_7 < var_3), 121)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (~-61);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = var_15;
                    arr_6 [i_0] [i_1] [i_2] = ((((((!97) * -23))) >= (((arr_2 [i_1] [i_0]) ? var_14 : (~var_2)))));
                    var_21 = ((((((0 << (((arr_1 [i_0]) + 2428905530709833855))))) ? (max(var_3, var_15)) : (((~(arr_5 [i_0] [i_1] [i_2])))))) << ((((~(arr_1 [i_2 + 1]))) - 2428905530709833852)));
                    var_22 = (0 - -113);
                }
            }
        }
        var_23 = (((~106) ? var_3 : -var_6));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_24 = (max((((var_6 && var_12) ? (((((arr_8 [i_3]) <= (arr_8 [i_3]))))) : ((~(arr_8 [i_3]))))), (max(8588395284995929985, (!6426298298027285970)))));
        arr_9 [i_3] [i_3] = ((max((arr_7 [i_3] [i_3]), (arr_8 [i_3]))) - (((((arr_8 [6]) && 0)))));
        var_25 |= arr_7 [0] [0];
        var_26 = var_4;

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_27 = var_7;
            var_28 = ((~(arr_11 [i_3] [i_3 + 1])));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_16 [i_3] = -112;
            arr_17 [i_3] = var_11;
        }
    }
    #pragma endscop
}
