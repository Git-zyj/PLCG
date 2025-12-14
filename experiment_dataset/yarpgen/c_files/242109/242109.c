/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_8, (var_0 & 1048576)));
    var_15 -= var_9;
    var_16 = (((((min(1048576, 806318469)) ? (1 ^ var_13) : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 8893786079876858316));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (min((max((var_2 | var_1), (((((arr_2 [i_3] [1] [i_3]) + 9223372036854775807)) >> (arr_1 [i_0]))))), ((min(var_13, 806318469)))));

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                arr_13 [6] [i_1] [i_2] [i_3] = ((1048577 + ((((var_9 - var_4) > (1048577 * var_13))))));
                                arr_14 [i_0] [i_0] |= -5984823132297374241;
                                var_19 = (((arr_5 [i_3] [i_0]) ? ((((-1048582 % var_3) * (var_10 && 124)))) : ((((((arr_0 [i_1] [i_1]) & (arr_6 [i_0] [1] [i_2] [i_0] [i_4])))) ? 6146598189563589687 : 195))));
                                var_20 |= (((min((arr_11 [i_4 + 2] [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 4] [i_4]), -32763))) || (1683423149 || 1));
                            }
                            var_21 = (min((arr_6 [i_1] [i_1] [i_1] [i_1] [i_1]), ((((1048576 ^ 4) == (min(1048576, -5984823132297374244)))))));
                            var_22 |= (~-1627068284);
                            arr_15 [i_0] [i_1] [i_2] [i_3] = (((((1 - (1 <= 11017)))) ? ((((2508852392 || var_2) > (!5984823132297374249)))) : 0));
                        }
                    }
                }
                arr_16 [i_0] [i_0] = ((((1 + (((-2147483647 - 1) ? (arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0]))))) >= (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])));
                arr_17 [7] [i_1] = ((((110936859801771683 || (arr_4 [i_0] [i_0] [i_0]))) && 1));
            }
        }
    }
    #pragma endscop
}
