/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [1] [i_2] = ((((max((arr_6 [i_0] [i_2] [17] [i_2]), (arr_6 [i_0] [i_2] [i_0] [i_0])))) && (((arr_6 [i_0] [i_2] [12] [i_2]) || (arr_6 [i_0] [i_2] [i_2] [i_2])))));
                    arr_8 [i_2] [i_1] [i_2] = (min(-8, ((~(((arr_1 [i_0] [i_1]) ? 0 : 249))))));
                }
            }
        }
    }
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_3] [i_3] = ((~(arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 2])));
                    arr_17 [i_4] [i_4] [i_3] = (max(((-((-(arr_14 [4] [1] [i_5]))))), var_0));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] = (((arr_12 [i_3]) ? ((((arr_9 [i_3] [i_4]) ? 248 : 65528))) : 3470696953399020442));
                                arr_23 [i_3] [i_4 - 2] [12] [i_6] [i_7] = (((arr_19 [i_4 - 2]) && (arr_19 [i_4 - 1])));
                                arr_24 [i_3] [9] [i_3] [i_3] = (min((arr_9 [i_3] [i_4]), (((((min(var_12, var_12)))) * (min(19, 4294967292))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 0;
    var_16 = var_3;
    #pragma endscop
}
