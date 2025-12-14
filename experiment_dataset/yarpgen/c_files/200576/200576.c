/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_14 = (max(var_14, (~var_11)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((1 ? 4095 : 38121));
                                arr_11 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] [i_4] [i_2] &= (min(((~((~(arr_4 [i_4]))))), ((max(var_0, ((min(39, var_8))))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_15 [i_0] [i_0] [i_0] [i_5] &= -9120625313715710447;
                    arr_16 [i_0] [i_1] [i_1] [i_1] = 2147483647;
                    var_16 += (((arr_14 [i_5] [i_5] [i_1 + 1]) ? (arr_0 [i_1]) : (arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 1])));
                }
                arr_17 [i_0] [i_0] [1] = min(((max((var_1 ^ var_12), ((1 ? var_1 : (arr_5 [i_0] [i_0] [i_0])))))), (((var_9 ^ 9002801208229888) ? ((((arr_3 [i_1] [i_1]) ? 0 : 536870904))) : (~var_5))));
            }
        }
    }
    var_17 = (max(var_17, var_11));
    var_18 = (min(0, var_5));
    #pragma endscop
}
