/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((((min((var_3 || 54568), var_2))) || ((max((max(var_2, var_12)), var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((var_2 >= (max((arr_9 [i_0 - 2] [i_1] [i_2 + 2] [i_3 + 2] [i_4] [i_4]), (arr_9 [i_0] [i_1] [i_2 - 2] [i_3 - 1] [i_4 - 1] [i_3 - 2]))))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 2] [i_3] [i_1 + 1] [i_3] [i_4] = (arr_4 [1] [i_4]);
                                var_15 = ((~((~(((arr_3 [i_0] [i_1] [i_2 + 2]) - var_1))))));
                                var_16 -= (((arr_8 [i_0 + 3]) ? (arr_8 [i_0 - 1]) : ((~(arr_9 [i_1 - 2] [i_1 - 2] [i_2 - 1] [i_3 + 2] [i_3 + 2] [i_4])))));
                            }
                        }
                    }
                    var_17 -= ((!((((arr_2 [i_0 + 4] [i_1 - 2]) ^ (arr_11 [i_0 - 2] [i_1 - 2] [i_2] [i_2 + 2]))))));
                }
            }
        }
    }
    var_18 = (max(var_8, ((max(var_1, ((var_4 ? var_9 : 10967)))))));
    #pragma endscop
}
