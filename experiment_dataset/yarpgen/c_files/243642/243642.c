/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_11 ? 32501 : 0)))) ? var_3 : ((var_6 ? (~var_10) : -452619410))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_19 = ((((((arr_0 [i_0]) ? 806806888 : 30685))) ? ((((!(arr_8 [i_1] [i_2] [i_0]))))) : (((arr_3 [i_0]) ? (((arr_8 [i_0] [i_1] [i_0]) - (arr_2 [i_0]))) : (((9071 ? (arr_5 [10] [i_1] [i_1]) : (arr_2 [i_0]))))))));
                    arr_9 [i_2] [i_0] [i_0] [15] = (((((1 % (arr_3 [i_0])))) ? (((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) : (((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_6 [i_0] [1] [i_2])))));
                }
                var_20 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) | (((!(arr_5 [i_0] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_1] = (((((((((arr_3 [i_0]) ? 0 : 806806888))) ? (arr_6 [1] [i_1] [i_0]) : (arr_12 [i_3])))) ? (1 <= 21680) : ((((!(arr_0 [i_3])))))));
                            var_21 = (((((0 ? (arr_7 [i_0]) : (arr_7 [i_3])))) ? (((arr_7 [i_0]) ? (arr_7 [i_3]) : (arr_7 [i_0]))) : (((arr_7 [i_4]) ? (arr_7 [i_1]) : (arr_7 [i_4])))));
                            var_22 -= ((((-1 ? (arr_14 [i_1] [i_3] [i_3] [i_1] [i_1]) : 402653184))) ? (((!((((arr_8 [i_1] [i_3] [i_1]) ? (arr_5 [i_0] [i_1] [i_4]) : (arr_13 [i_4] [i_0] [i_3] [1] [2] [i_0]))))))) : (((((~(arr_3 [i_1])))) ? (arr_6 [i_4] [i_0] [i_0]) : (((arr_10 [i_4] [i_3] [i_0]) ? (arr_13 [i_0] [8] [i_0] [8] [i_0] [i_0]) : (arr_10 [i_1] [i_3] [i_4]))))));
                        }
                    }
                }
                arr_16 [i_0] = ((1 ? (arr_6 [i_0] [i_0] [i_1]) : (((((((!(arr_13 [i_0] [i_0] [i_0] [i_0] [1] [i_1]))))) < ((-3775187178544128525 ? (arr_6 [i_0] [0] [1]) : 21663)))))));
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
