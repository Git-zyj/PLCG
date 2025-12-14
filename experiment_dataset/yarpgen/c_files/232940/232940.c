/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, (((var_9 ? ((~(arr_2 [i_0] [i_0]))) : (arr_0 [i_0]))))));
        var_20 = (85 == -9002870877354516146);
        var_21 = (((arr_2 [i_0] [i_0]) * (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_22 = (arr_5 [i_3]);
                        var_23 = 18699;
                        arr_11 [i_0] [9] [i_0] [i_0] [9] [i_3] = ((1 ? ((85 ? 1 : 102)) : 88));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_20 [i_4] [0] [i_4] = (141 != 174);
                    arr_21 [i_6] [11] [i_5] [i_4] = var_3;
                    var_24 = (max(var_24, 7204506822913236043));
                }
            }
        }
        var_25 = var_3;
    }
    var_26 = (var_15 >> var_14);

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_27 = (min(var_27, ((((var_4 ^ var_8) ? ((105 ? 11697 : 18446744073709551615)) : (max(7693597691241909015, 65535)))))));
        var_28 = (min(((max((min(116, 1027411635)), (((arr_4 [1] [i_7]) ? var_16 : var_13))))), ((130 ? -7204506822913236038 : 125))));
        var_29 = (max(((var_17 ? ((var_2 ? (arr_0 [i_7]) : var_13)) : 5)), ((((arr_13 [i_7]) == var_17)))));
        var_30 = (((~(arr_7 [i_7] [i_7] [i_7] [i_7]))));
        arr_25 [i_7] [i_7] = ((((~((27 ? 4586 : 9895))))) == (max(172, 7204506822913236049)));
    }
    #pragma endscop
}
