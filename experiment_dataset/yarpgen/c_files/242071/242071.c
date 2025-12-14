/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_7 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1]) ? ((max((arr_8 [i_0] [i_3 - 1] [i_2] [i_3]), (arr_8 [i_3 - 1] [i_3] [i_3 + 1] [i_3])))) : ((((arr_7 [i_0] [i_3 - 1] [9] [i_3]) && ((((arr_0 [i_0]) ? -6134335522762305317 : var_17))))))));
                            var_21 = (arr_0 [i_3 - 1]);
                            var_22 = (((arr_5 [7] [i_3 + 1] [i_3 + 1]) ? (min((((arr_0 [3]) ? var_18 : var_17)), ((max(var_12, var_6))))) : var_9));
                            var_23 = (((((max((arr_5 [i_3] [2] [8]), (arr_9 [i_0] [i_0] [i_0]))))) ? 48 : ((var_9 ? (arr_6 [2]) : (min((arr_5 [i_0] [8] [i_2]), (arr_5 [6] [i_1] [i_2])))))));
                        }
                    }
                }
                var_24 = (min((min((min(var_2, -104031066)), -75)), (arr_9 [i_0] [i_1] [0])));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_25 = (max(var_25, ((((arr_9 [0] [i_1] [i_0]) | var_7)))));
                    arr_13 [i_1] [i_1] [1] [i_1] = (min((arr_8 [i_4] [i_1] [i_0] [i_0]), (arr_8 [i_4] [1] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    var_26 = ((+(((arr_12 [1] [1] [i_0]) ? (arr_4 [i_0] [0] [i_5]) : 6134335522762305316))));
                    var_27 = ((var_6 ? ((-(arr_7 [8] [8] [8] [4]))) : ((var_16 ? 18 : (arr_0 [i_1])))));
                }
            }
        }
    }
    var_28 = (min(var_28, ((min(var_6, (max(var_5, var_14)))))));
    #pragma endscop
}
