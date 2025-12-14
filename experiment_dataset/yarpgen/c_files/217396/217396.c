/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = (~37134);
                            var_18 = ((-(((arr_1 [i_0] [i_1 - 2]) ? (arr_1 [i_0] [i_1 - 1]) : (arr_7 [i_0] [i_2 - 2] [i_2])))));
                        }
                    }
                }
                var_19 = ((((min(var_9, (arr_3 [i_0] [i_1 - 1])))) ? (((arr_3 [i_0] [i_1 + 4]) ? (arr_3 [i_0] [i_1 + 4]) : (arr_3 [i_0] [i_1 - 2]))) : ((((arr_3 [i_0] [i_1 - 1]) > (arr_3 [i_0] [i_1 + 4]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_5] = ((((max((arr_11 [i_0] [i_0] [i_1 + 2] [i_4]), var_2))) ? var_5 : var_9));
                            var_20 = (((arr_13 [i_0] [i_4] [i_1 - 1] [i_0] [i_5] [i_1 - 2]) == 13367347132450398461));
                            var_21 ^= (arr_8 [i_1] [i_1 + 3] [20] [i_1 - 2]);
                        }
                    }
                }
            }
        }
    }
    var_22 += (max(var_15, ((-((28402 ? 2453620284297956637 : 9285))))));
    #pragma endscop
}
