/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~var_1) - ((var_11 ? -32764 : ((min(12851, var_2)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 -= (min((arr_2 [i_0]), ((32764 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_17 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((var_3 ? -142 : (arr_0 [i_0]))))) : (arr_1 [i_0] [i_0])));
        var_18 = (((((arr_1 [i_0] [i_0]) ? 32764 : 20103)) != (~59)));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_19 = (((max(95, 1885))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1 + 1] [i_1] [5] [i_3] = (min(var_1, (((~32767) & (arr_0 [i_1 - 1])))));
                    var_20 = (arr_2 [i_1 + 1]);
                    var_21 = (59 + 127);
                    arr_11 [i_1] [i_2] [i_2] [i_3] |= (min((max(var_9, (((arr_5 [i_2]) ? -45 : (arr_9 [i_1] [i_2]))))), var_0));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_22 = ((~((min(var_1, var_3)))));
                                var_23 |= 697224487074213697;
                                var_24 = (((arr_7 [i_2] [i_4] [i_5]) ? (((56545 * 115) >> (((arr_1 [i_1 - 2] [i_1 - 1]) + 33)))) : (((((9223372036854775807 - (arr_9 [i_1] [i_1]))) != (arr_0 [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
        var_25 = (min(((4646568600279428084 | (arr_2 [i_1]))), (arr_9 [i_1] [i_1])));
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        arr_20 [i_6] = ((!(((10420 ? 386 : 1812502596)))));
        arr_21 [i_6] = (((arr_19 [i_6] [i_6]) ? (((arr_2 [i_6 + 1]) ? ((((arr_19 [i_6 + 2] [i_6]) ? (arr_19 [i_6 + 2] [i_6 + 2]) : 10420))) : 18446744073709551599)) : (((max((max(-14535, -59)), var_4))))));
        var_26 = 34889;
    }
    #pragma endscop
}
