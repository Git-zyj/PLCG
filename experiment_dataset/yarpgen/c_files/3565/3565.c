/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((arr_2 [i_1 - 1] [i_1 - 1]) ? ((-(arr_1 [i_0]))) : 1));
                var_15 = ((+(((arr_4 [i_0] [i_0] [i_0]) ? 1414581485 : ((((-32767 - 1) >= 0)))))));
                var_16 = (arr_4 [i_0] [i_0] [i_1 - 1]);
                var_17 = ((-((((((1 && (arr_2 [i_0] [i_0])))) > -20131)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            {
                var_18 = ((~(((!(arr_8 [i_2 + 1]))))));

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_19 = (((((arr_2 [i_2 - 1] [i_3 + 1]) << (((arr_3 [i_2 - 1] [i_3 + 1]) - 1081425142))))) ? (1 && -20131) : ((((arr_3 [i_2 - 1] [i_3 + 1]) > 1))));
                    var_20 += ((((arr_14 [i_4 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_2 - 1]) : (arr_14 [i_2 - 1] [i_2] [i_2 - 1]))));
                    var_21 = ((+((((((arr_0 [i_3]) ? 1334207333 : (arr_2 [i_3] [i_2 + 1])))) ? (((arr_8 [i_4]) ? (arr_1 [i_3]) : (arr_8 [i_2]))) : (arr_11 [i_4 + 1] [i_3 - 1] [i_2 - 1])))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 6;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_22 = (((arr_15 [i_5 + 4] [i_5 - 1] [i_2 + 2]) ? ((127 - (arr_13 [i_6] [i_3] [i_5 + 2]))) : (arr_18 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])));
                        var_23 ^= ((-20131 ? ((((arr_1 [i_5]) / 1))) : (arr_7 [i_2 + 2])));
                        var_24 = (((arr_19 [i_2 + 2] [5] [i_3 + 2] [i_6]) ? (arr_19 [i_2 - 1] [i_2] [i_3 - 1] [i_6]) : (arr_19 [i_2 + 2] [i_3] [i_3 + 2] [i_2 + 2])));
                    }
                    var_25 = (max(var_25, (((1 ? ((40 >> (((arr_17 [i_3] [3]) - 1777344926)))) : (((arr_18 [i_2] [i_3] [i_3 + 1] [i_3 + 1] [i_5 + 1] [i_5]) ? (arr_0 [i_3]) : (arr_2 [i_3] [i_5]))))))));
                    var_26 = (min(var_26, ((((arr_18 [i_3 + 2] [i_3 + 2] [i_5] [i_2 + 2] [i_5] [0]) ? 0 : -8071842197069688564)))));
                }
            }
        }
    }
    var_27 = (((~((4294967295 ? 3031453815 : 3031453815)))));
    var_28 = var_10;
    #pragma endscop
}
