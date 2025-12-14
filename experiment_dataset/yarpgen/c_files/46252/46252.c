/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(51, var_8)))));
    var_20 = (((((((max(var_7, var_16))) ? 208 : (max(4104194420, var_0))))) ? ((190772875 ? 0 : 15649359875648441176)) : (max((max(var_3, 8775)), (max(var_3, var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 &= (max((((arr_4 [i_1 + 4] [i_0 - 2]) ? (arr_4 [i_1 + 2] [i_0 - 2]) : (arr_4 [i_1 + 1] [i_0 + 1]))), ((max((arr_4 [i_1 - 1] [i_0 + 1]), 51)))));
                    var_22 = (max((max(((((arr_7 [i_1] [1]) ? (arr_10 [i_0] [8] [i_2]) : 4104194421))), (arr_0 [i_0]))), (((arr_2 [i_0]) ? (((arr_4 [i_0] [i_1]) ? (arr_10 [i_0] [i_1 + 4] [13]) : (arr_5 [i_2]))) : (max((arr_1 [i_2]), (arr_0 [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_23 = arr_6 [16] [i_2] [i_1 + 4];
                                var_24 = ((((max((arr_7 [i_0 + 1] [i_0 + 1]), 1))) ? (max((arr_7 [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 - 1]))) : (((arr_7 [i_0 + 1] [i_0 + 1]) | (arr_7 [i_0 - 1] [i_0 + 1])))));
                            }
                        }
                    }
                    var_25 = ((arr_9 [i_0] [18] [i_2] [i_1]) ? (((arr_14 [i_1 + 4] [17] [i_1] [i_1] [i_1 + 4]) ? (max(3693427657841488989, (arr_12 [i_0] [i_1 + 2] [i_2] [i_2]))) : (((13203851294011532071 ? -23601 : (arr_14 [11] [5] [i_1] [i_1] [11])))))) : (((208 | 7128594635322009263) ? ((max((arr_6 [18] [18] [i_2]), (arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_2] [i_2])))) : (max((arr_15 [i_0 + 1]), (arr_8 [i_0] [i_1 + 4] [i_0] [i_2]))))));
                }
            }
        }
    }
    var_26 &= ((var_13 ? ((((max(var_9, 4104194421)) >= ((var_8 ? 10 : var_2))))) : (((((max(var_4, var_18))) >= var_6)))));
    var_27 = (((max((var_2 + var_13), (((-1 ? 31083 : var_8))))) >= var_9));
    #pragma endscop
}
