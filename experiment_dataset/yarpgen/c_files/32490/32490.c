/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((728687948512406494 ? 1215736652886358550 : 81)) % (((var_6 ? var_3 : var_6))))) << (!-156153937)));
    var_13 += var_0;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 -= (arr_1 [i_0]);
        arr_2 [i_0] = (((((var_10 ? ((var_4 / (arr_1 [i_0]))) : var_4))) ? (arr_1 [i_0]) : ((((((arr_1 [i_0]) / var_6))) ? (min(var_9, var_2)) : ((-(arr_1 [i_0])))))));
        var_15 = (max(var_15, (((!(~1253383687133175900))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_16 = (arr_4 [i_1 - 1]);
        var_17 = (max(var_17, ((((arr_1 [i_1 - 1]) ? 125 : var_6)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_18 = (max((arr_12 [i_4] [i_4 + 3] [i_4]), ((var_11 ? (arr_11 [i_3] [i_4] [17]) : (arr_11 [i_4] [i_4] [i_5])))));
                        arr_15 [i_4] [4] [4] [4] [i_3] [i_4] = (max((arr_13 [i_4]), ((var_0 / (-1253383687133175900 + var_11)))));
                        var_19 = (((((~(max(1824033350484977453, (arr_6 [9])))))) ? ((~(((arr_3 [7]) ? (arr_8 [i_2] [i_2]) : var_1)))) : ((((((~(arr_12 [i_4] [i_3] [9])))) ? ((var_0 ? 164 : (arr_13 [i_4]))) : (arr_9 [i_2]))))));
                        var_20 = ((arr_6 [i_5]) >> ((1253383687133175900 ? 1 : (arr_12 [i_4] [i_3 + 1] [i_4]))));
                        var_21 = ((((~(~15605972943678113793))) << (((((1824033350484977453 << (183 - 149)))) - 2917660430513995738))));
                    }
                }
            }
        }
        var_22 ^= (min(81, (((arr_1 [i_2]) ^ 88))));
        var_23 = ((((min(((3 ? 2901472466382348993 : var_11)), var_2))) ? (max(253, ((var_3 ? (arr_11 [i_2] [i_2] [2]) : 2840771130031437819)))) : ((((arr_3 [i_2]) * (!-2901472466382348993))))));
        arr_16 [i_2] |= var_1;
    }
    #pragma endscop
}
