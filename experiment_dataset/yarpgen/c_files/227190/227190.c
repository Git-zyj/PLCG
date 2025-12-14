/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 >> (((((-2147483647 - 1) ? 198229182 : ((92 ? 32765 : 213)))) - 198229172))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min((((((var_5 ? var_4 : (arr_0 [i_0])))) ? (var_9 ^ var_6) : ((var_9 ? 9595495475441905814 : (arr_0 [i_0]))))), (((var_4 >> (var_5 - 3718005991))))));
        arr_4 [i_0] = ((((max((arr_1 [i_0]), (max(255, var_8))))) ? (max(-1880996380, 154717522)) : ((~(-2147483647 - 1)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] &= (arr_2 [i_1]);
                    arr_10 [i_0] [i_1] [9] = ((((min((!12), ((-154717523 * (arr_8 [i_0] [i_0] [i_0])))))) ? (((arr_1 [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : ((-255 ? -155842795 : 0)))) : ((((-3584831590973999735 ? (arr_5 [i_0]) : var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [1] [i_4] [i_0] [i_4 - 1] = (arr_8 [i_3 - 1] [i_4 - 1] [i_4 - 1]);
                                arr_18 [i_0] [2] [i_1] [i_0] [i_4 - 1] &= ((-255 > 1912513481) > (min((min(var_4, var_4)), var_5)));
                            }
                        }
                    }
                    var_12 = (arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]);
                    var_13 = (max(var_13, ((max(42, 198229185)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [4] [6] [i_7] = (max(1880996376, ((var_0 ? (((max(var_1, 81)))) : (var_8 + var_5)))));
                        var_14 = ((((-8184 ? 154717522 : 60))) ? var_3 : (max((arr_24 [i_7]), -995570254)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_15 = (var_8 ^ var_2);
        arr_33 [i_8] = (~-1317103020168827029);
        var_16 -= ((var_1 >> ((((((1 + (-2147483647 - 1))) - -2147483637)) + 18))));
        var_17 = (var_2 < var_3);
    }
    var_18 = 1;
    #pragma endscop
}
