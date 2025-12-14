/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 ^= 10;
                    var_14 = ((((((-108 ? 138 : 138))) & var_4)) & (arr_7 [6]));
                    arr_11 [i_1] = var_9;
                    var_15 = ((((arr_6 [i_0] [i_1] [i_2]) ^ var_11)));
                }
            }
        }
    }
    var_16 = (max((min(var_7, var_8)), (((!(((107 ? 47038 : var_9))))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_17 |= (((min((!112), ((14 ^ (arr_13 [1]))))) > (arr_19 [i_3] [i_4] [14] [i_6])));
                            arr_22 [i_5] = var_7;
                        }
                    }
                }
                var_18 = arr_20 [i_4] [i_4] [i_3] [i_3];
            }
        }
    }
    var_19 *= (!var_12);
    #pragma endscop
}
