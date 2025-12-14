/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 10656038986967704758;
    var_19 = (max(((((max(1131116168332707439, 1))) ? var_4 : 1)), var_5));
    var_20 = (max(var_20, var_15));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 += (arr_4 [i_1] [i_0] [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = var_7;
                                arr_15 [i_0] = ((((((arr_12 [i_0 + 1] [i_3 + 1]) ? var_14 : var_16))) ? (6726 - 65535) : ((-(arr_12 [i_1] [9])))));
                                var_22 = (max(var_22, (((((max(-1699725075166196746, (max(-1699725075166196746, 1131116168332707439))))) ? ((var_3 ? (~1) : (max(var_14, (arr_8 [i_0] [i_0] [10] [i_1]))))) : ((min((arr_3 [i_3] [i_3 - 1]), (arr_3 [i_3] [i_3 - 1])))))))));
                            }
                        }
                    }
                    var_23 = (((var_2 ? (arr_12 [i_1] [i_0 - 3]) : (arr_12 [i_0 - 3] [i_0 - 3]))));
                }
                var_24 = (min(var_24, ((max((~43995), var_1)))));
            }
        }
    }
    #pragma endscop
}
