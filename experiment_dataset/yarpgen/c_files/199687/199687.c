/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = (min(((~(8609184450722467042 - var_15))), (arr_4 [i_2])));
                    var_17 = 473487785;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((6765 ? 10267985098284278070 : 24));
                                arr_12 [i_0] [i_0] = ((((min(231, (!var_15)))) ? (max(((24 ? 1 : 26175)), (min(20497, -129260646)))) : (((arr_2 [i_1 - 2] [i_4 + 1] [i_1 - 2]) ? 30281 : (arr_2 [i_4] [i_4 - 2] [i_1 - 1])))));
                            }
                        }
                    }
                    var_19 = (((((((max((arr_2 [i_1] [i_1] [i_2]), (arr_6 [i_2] [i_1] [i_0])))) % (1 % 11972900374020348355)))) ? (((((var_8 ? (arr_11 [i_0] [i_1 - 2] [i_1] [i_1] [i_2] [i_2]) : 4294967295))) ? 4294967277 : -30165)) : ((((((arr_6 [i_0] [i_1] [i_0]) * 47857))) ? (max((arr_9 [i_0] [i_0] [i_0] [i_1 - 1] [i_2]), 25521)) : (arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2])))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((((17106071614865958443 & 0) + (((min((min(var_10, 27474)), var_10)))))))));
    var_21 = (max(var_21, ((((((-(var_14 ^ var_3)))) ? ((((!var_13) & var_7))) : var_11)))));
    var_22 = ((((max((!854794913), (min(4402, 27288))))) ? var_5 : ((((max(14, 27292)) % (((max(-32740, 253)))))))));
    #pragma endscop
}
