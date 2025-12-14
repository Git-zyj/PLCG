/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(((max(((8191 ? var_11 : (arr_2 [i_0] [i_1]))), (var_8 && 32)))), ((~(arr_4 [i_1] [i_1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] |= -var_8;
                                var_17 = min((min(((49 % (arr_1 [i_0]))), 27)), (arr_8 [i_0] [i_0]));
                                var_18 = ((45 ? (((((arr_13 [i_0] [i_0] [i_0] [i_3] [i_4]) >= (arr_10 [i_3] [i_0] [i_0]))))) : (max((arr_11 [i_4] [i_2] [i_1] [i_0]), ((~(arr_4 [i_3] [i_1] [i_2 - 1])))))));
                            }
                        }
                    }
                }
                var_19 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_20 = ((((max((~var_11), (min(var_10, 4611404543450677248))))) ? var_14 : ((277641043126110061 ? (((var_5 ? var_1 : var_6))) : ((-1 ? var_5 : 4611404543450677244))))));
    #pragma endscop
}
