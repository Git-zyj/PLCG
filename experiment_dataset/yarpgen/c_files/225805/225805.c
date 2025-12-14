/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((51 - 14331562017981183635) < var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = -133955584;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((-0 - ((55539 & (!var_2)))));
                                var_16 += ((((((arr_8 [i_0] [i_1] [i_3] [i_4 - 1]) && 47229))) == (!97)));
                                var_17 = ((((~(arr_10 [i_4 + 1] [i_4 + 3] [i_4 + 3] [i_4 + 2] [i_4] [i_4]))) == (16383 && 4)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [22] [i_0] = (((((!47232) <= (arr_2 [i_0]))) && (((arr_7 [i_1]) || var_9))));
                var_18 = (max(var_18, (((!(!var_0))))));
                arr_15 [i_0] = ((+(((arr_10 [19] [i_0] [i_0] [i_0] [18] [i_1]) + 1816755069))));
            }
        }
    }
    #pragma endscop
}
