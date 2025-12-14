/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = max((((((((arr_0 [i_0]) == var_5))) >> (((min(1, -6601044360553622637)) + 6601044360553622646))))), (((arr_0 [i_0]) ? var_1 : (arr_4 [11]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((arr_5 [i_1] [i_1] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : 1111499741238557582)) - var_14))) || (arr_9 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_2])));
                                var_20 *= (((((arr_12 [i_0]) || var_14)) || ((((arr_12 [i_0]) ? (arr_12 [i_3]) : (arr_8 [i_1] [i_1]))))));
                                arr_13 [i_1] [i_2] = (min((((1455342907 % (arr_1 [i_0])))), (max(var_4, 18446744073709551603))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = 7632753953205898003;
                                var_21 -= (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
