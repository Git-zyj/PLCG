/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((max((((var_0 ? 39 : var_13))), ((221 ? var_4 : var_4))))) ? var_4 : (((~((9223372036854775805 ? var_6 : var_13))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = var_4;
                    var_16 = (((arr_6 [i_0] [i_2]) ? (max(var_4, (arr_6 [i_0] [i_1 - 1]))) : (((~((max(1, (arr_3 [i_0])))))))));
                    var_17 = ((((((((var_9 << (var_13 + 59)))) ? ((var_6 ? (arr_8 [i_0]) : var_14)) : (arr_4 [i_0])))) ? var_12 : (arr_7 [i_0] [i_2 + 2])));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_18 = (((((~((max(1, (arr_8 [i_0]))))))) ? ((((((var_8 - (arr_1 [i_0])))) ? ((((arr_3 [i_0]) ? var_14 : 32582))) : (arr_10 [i_0])))) : 23));
                    var_19 = (min(var_19, (((-((-700652969 ? var_0 : var_2)))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = ((((max((arr_20 [i_1] [i_1 - 1] [i_1 - 1] [i_4] [i_0] [i_4] [i_4]), var_2))) ? ((((arr_6 [i_0] [i_5 + 1]) ? 0 : 19175285))) : ((-(min(var_5, var_0))))));
                                var_21 = (max(((max(44, (~61875)))), (min((arr_13 [i_1 - 1] [i_0] [i_5 + 1]), (~-8595957548830406241)))));
                                arr_21 [i_0] [i_1] [i_6] [i_5 + 1] [i_6] |= ((-((-(arr_13 [i_1 - 1] [i_6] [i_1])))));
                                var_22 += (arr_1 [i_6]);
                            }
                        }
                    }
                }
                var_23 = (~(((var_1 && (arr_11 [i_0] [i_1 - 1] [i_1] [13])))));
            }
        }
    }
    #pragma endscop
}
