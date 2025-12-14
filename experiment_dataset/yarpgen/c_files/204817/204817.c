/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((min((max(var_15, 1936288486)), (min(2976774382, 3454623428))))), ((var_5 ? (((var_8 ? 1 : 1))) : ((var_1 ? var_8 : var_5))))));
    var_20 = (0 != var_4);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 += (arr_0 [8]);
                    var_22 = (min(var_22, ((max((arr_5 [i_0] [i_2]), (((!(94 || 65515)))))))));
                    var_23 = (max((max((arr_1 [i_0 - 1] [i_1]), (max(0, (arr_0 [i_0]))))), ((max(((min(90, 71))), (max(2, 65502)))))));
                    arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (arr_3 [i_0 + 1]);
                }
            }
        }
        var_24 = -58;
        arr_10 [i_0] [i_0] = max((max((((5235431916047482699 < (arr_0 [i_0])))), (((arr_5 [i_0] [i_0]) + 18416610693401143962)))), ((((arr_3 [i_0 + 1]) || (arr_3 [i_0 + 2])))));
        var_25 = 190;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_26 = ((var_14 < ((((((max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]), -28)))) < (((arr_4 [i_0 - 1] [i_0 - 1] [16]) ? 1 : (arr_5 [i_3] [i_4]))))))));
                    var_27 *= ((((0 / (~1689))) >= (arr_6 [i_3])));
                    arr_15 [i_0] [i_0] [i_4] = (((((var_6 ? ((var_13 & (arr_1 [i_3 + 1] [i_4]))) : (((arr_5 [i_0] [i_3]) & 190))))) ? ((((max(127, 1))) ? (((max((arr_6 [i_0 + 1]), (arr_7 [i_4] [i_4] [i_3] [i_0 + 1]))))) : ((var_5 ? (arr_5 [7] [i_3]) : -1)))) : (arr_14 [i_0] [i_3] [i_0])));
                    var_28 = (max(var_28, (((arr_12 [i_0] [i_3]) ? ((((((arr_1 [i_0 + 1] [i_3 - 2]) ? 47 : (arr_14 [i_0 - 1] [i_3] [i_4])))) ? (arr_14 [i_0] [i_3] [i_4]) : 30)) : (((0 < ((190 ? (arr_5 [i_4] [i_4]) : (arr_0 [9]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
