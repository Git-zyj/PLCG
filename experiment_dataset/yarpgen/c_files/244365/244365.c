/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_8;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_20 = (min(var_20, ((max(65535, var_4)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [5] [i_1] [4] = ((~(max(((((arr_3 [i_0 + 2] [i_0 + 2] [i_2]) ? -1077119207396752077 : 2))), (arr_5 [i_2] [i_0 - 2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (arr_14 [i_0] [i_0] [5] [0] [i_0] [i_1]);
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_2] [i_4] = (max((max((((arr_5 [i_4] [i_2] [i_0]) ? -1077119207396752082 : 1202413005944781727)), 1462)), ((min(-var_15, (arr_7 [i_0 - 2] [i_1] [i_0]))))));
                                arr_17 [1] [i_1] [i_2] [i_2] [i_2] [i_2] = (max(var_3, (!20046)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_1] [i_1] = ((-(((1077119207396752056 >> (-1077119207396752077 + 1077119207396752106))))));
                    var_22 = (min(var_22, var_9));
                }
            }
        }
        arr_19 [i_0] = (((arr_8 [0] [0] [i_0 + 2]) ? ((((arr_8 [10] [i_0 + 1] [i_0 - 1]) >> (((arr_15 [i_0 - 2] [i_0 - 1] [i_0] [10] [14] [i_0 - 2]) - 60060))))) : (((arr_3 [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_15 [i_0 - 3] [i_0 + 2] [i_0 - 3] [8] [4] [i_0 - 1]) : 4632176597782508965))));
    }
    #pragma endscop
}
