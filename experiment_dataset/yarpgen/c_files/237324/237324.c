/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (var_6 && var_16)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [0] = (max(((-1 ? (var_11 & var_16) : -9378)), (arr_5 [i_0] [i_1 - 1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 ^= (max((min((147 >= 1), (max(var_3, var_15)))), var_9));
                                var_19 ^= ((((((((var_7 ? 1 : (arr_0 [i_0] [i_0])))) ? ((min(37, var_13))) : (((arr_12 [i_0 + 1] [12] [i_2] [i_4] [i_1]) ? var_7 : var_6))))) >= ((+(min((arr_9 [i_0] [i_0] [i_0] [i_0 - 4]), (arr_9 [i_0] [i_1 + 2] [9] [3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_20 = ((((max(1, var_2))) ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0 - 1]) : ((((arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_6]) < (arr_3 [i_0 - 3]))))));
                                arr_19 [1] [1] [i_2 + 1] [i_5] [1] = ((min(8866461766385664, 1)));
                                arr_20 [i_1] = (min((arr_9 [i_0] [i_1] [i_2] [i_5]), (max(((((arr_4 [i_0 - 4] [i_1 + 2] [i_2 + 1] [i_5]) | (arr_0 [i_0] [i_1])))), var_15))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -1165022369;
    #pragma endscop
}
