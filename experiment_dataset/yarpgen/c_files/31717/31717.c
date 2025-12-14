/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((max((((((var_7 ? (arr_5 [i_1] [9] [i_2]) : var_5))) ? var_10 : ((var_8 ? (arr_0 [i_1] [i_2]) : var_0)))), var_0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = ((var_7 ? var_0 : (((((12108719419978851362 ? 245 : 21))) ? var_6 : ((var_6 ? var_8 : var_9))))));
                                arr_14 [i_0] [i_0] [1] [i_0] = var_2;
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((var_8 ? ((var_8 ? (arr_3 [i_1]) : var_9)) : (((arr_10 [i_0] [i_2] [2] [i_0]) - -var_5))));
                                arr_16 [i_1] [3] [3] [3] = (((((((max(3536848640, 11))) ? (((var_10 ? var_6 : var_3))) : (min(var_3, (arr_7 [i_0] [i_0] [i_2] [i_2])))))) > (((((var_5 ? (arr_9 [i_0] [i_1] [i_3] [i_4]) : var_0))) ? (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 - 1]) : (((var_7 ? var_4 : var_8)))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((var_4 >> (var_10 - 20951)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 &= ((32767 ? 21 : 4294967280));
    #pragma endscop
}
