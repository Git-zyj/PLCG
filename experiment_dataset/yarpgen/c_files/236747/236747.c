/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_10 >> (var_4 && 15863))));
    var_18 = (var_1 + var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3 - 3] [i_2] [i_3 - 3] [17] = ((~(((arr_8 [i_1] [i_3] [i_3] [i_1] [i_3 - 1] [i_3]) ? (arr_8 [i_1] [i_1] [i_2] [i_3] [i_3 + 1] [i_1]) : var_5))));
                            var_19 |= (arr_0 [i_2] [i_1]);
                            var_20 += (max((((arr_0 [i_0] [i_1]) ^ ((max(127, (arr_0 [6] [6])))))), var_11));
                        }
                    }
                }
                var_21 = ((((((arr_0 [i_0 + 1] [i_0 + 1]) + var_13))) ? ((~(arr_0 [i_0 + 2] [i_0 + 2]))) : (arr_0 [i_0 + 2] [i_0 + 2])));
                arr_10 [i_0] [12] [i_0] = (arr_2 [i_0 - 1] [i_0] [i_0 - 1]);
                var_22 = (min(var_22, var_4));
                arr_11 [i_0] = (((arr_5 [i_0 + 2] [i_0] [i_1]) ? ((-(arr_5 [i_0 + 1] [i_1] [i_1]))) : (!var_12)));
            }
        }
    }
    var_23 = var_4;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_24 = var_9;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_24 [i_8 - 2] [i_5] [i_7] [i_4] [i_5] [i_5] [i_4] = ((((max((arr_6 [i_6 + 1] [i_5 + 1]), (arr_6 [i_6 + 1] [i_5 + 1])))) ? var_1 : (((arr_16 [i_5] [i_5]) ? 4901357780267833253 : 38673))));
                                var_25 = ((-(arr_5 [i_8 - 1] [i_6 + 1] [i_6 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
