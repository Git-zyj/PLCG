/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_8 [i_1] = ((((min((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3]), -3272403832))) ? ((((((arr_4 [i_0] [i_0] [18]) ? 1306091719 : 4931)) / ((-106 ? 1022563463 : 1022563481))))) : (min(0, 1152921504606846912))));
                        var_12 = ((((-1284602215492437477 ? 1022563456 : 9343))) ? 10989394890954487727 : (var_6 <= 699829373809157543));
                    }
                }
            }
            var_13 = (((4611686018427387902 ? 17746914699900394072 : -1)));
            var_14 = (max(var_14, (min((arr_2 [i_0]), (((((2 ? var_0 : 94))) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_1])))))));
            var_15 = var_0;
        }
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            var_16 = 9332;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_17 -= (max((17592186044384 || var_10), ((((min((arr_11 [i_5]), 45949))) ? (((arr_0 [i_5]) ? (arr_3 [i_4] [i_6]) : var_5)) : (max((arr_3 [i_0] [i_4]), var_8))))));
                        var_18 = var_5;
                    }
                }
            }
            arr_18 [i_0] [11] [i_4] = (((((-32233 ? 0 : 4294967295)) * (arr_13 [i_4 + 1]))) > ((max(var_0, ((var_8 ? var_5 : var_3))))));
            arr_19 [i_4] = (arr_11 [i_4]);
        }
        var_19 = (max(0, ((1867438795 ? (arr_2 [i_0]) : ((min(2, 2039280761)))))));
        var_20 = (min(var_20, var_8));
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_23 [i_7] [i_7 + 2] = (((((-6 ? ((510 ? 103 : 699829373809157519)) : 13883))) ? 65524 : (((max(1, -9223372036854775807)) / -50))));
        arr_24 [i_7] = var_0;
    }
    #pragma endscop
}
