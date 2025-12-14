/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 = (((((-(arr_0 [i_0])))) == ((var_0 ? (arr_1 [i_0]) : var_8))));
        arr_2 [i_0] = ((-1 ? -2076274963049324549 : ((((128 % var_9) ? (arr_0 [i_0]) : var_9)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_15 += (max((((arr_0 [i_1]) - (arr_1 [i_1]))), (min(84, (arr_1 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, (((((max(var_2, (arr_3 [i_3])))) ? ((((arr_9 [2] [i_2]) ? 9223372036854775807 : ((((arr_6 [i_1]) ? (arr_5 [i_3] [i_2]) : (arr_3 [i_2]))))))) : ((((var_3 ? (arr_4 [i_2]) : (arr_9 [i_3] [i_1]))) ^ var_9)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_17 = ((-(((arr_8 [i_3] [i_2] [i_4]) ? 262973322 : (((arr_0 [i_4]) ? var_10 : 1946979209))))));
                                var_18 -= (((((~683202977) ? 6 : 3946834510857977087)) == (arr_1 [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 |= ((min(758164094, 1946979209)));
                                arr_26 [i_7] [i_6] [i_3] [i_2] [i_1] [i_1] = (arr_7 [i_2] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
