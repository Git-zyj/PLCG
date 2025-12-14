/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((max(3, 65535))) >> ((((var_8 << (var_5 + 95))) - 552845305))))) ? var_6 : (201 - 108)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_13, ((max((((arr_5 [i_0] [i_1] [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1] [i_0]))), var_8)))));
                var_17 = (3556726096565042983 / 17);
                var_18 *= (min(((((max(var_7, -1))) && var_9)), ((((max(var_5, (arr_0 [i_0])))) && (!var_14)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] |= (((arr_4 [i_2] [i_1] [i_1]) ? var_10 : -1));
                                var_19 += ((~(arr_10 [i_1 + 1] [i_1] [i_2] [i_2])));
                            }
                        }
                    }
                }
                arr_17 [i_0] = var_2;
            }
        }
    }
    var_20 = (((((-(var_1 && var_1)))) < ((-((2024664947001394073 << (var_11 - 13922211597164771341)))))));
    #pragma endscop
}
