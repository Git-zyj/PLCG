/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_1] [i_0] = ((((((((arr_0 [i_1]) <= var_0)) ? (max(2147483647, 8064)) : ((((arr_1 [i_1]) ? (arr_0 [i_0]) : -870732996)))))) ? ((((((arr_3 [i_0] [i_2]) % (arr_0 [i_2])))) ? ((((arr_1 [i_1]) < (arr_5 [i_0] [i_1] [i_1] [i_2 - 2])))) : ((min((arr_3 [i_2] [i_1]), (arr_3 [i_0] [i_1])))))) : (arr_4 [i_0] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 |= ((var_3 ? (((~7) ? 248 : (((arr_0 [i_3]) ? var_2 : (arr_7 [i_0] [i_1] [i_2 - 2] [i_3] [i_4]))))) : 249));
                                var_18 = (max(var_18, (((((var_9 != (arr_2 [i_3] [i_1] [i_0]))))))));
                                var_19 = (((((var_0 ? ((0 ? 252 : 18)) : 346891988))) ? (min(((max((arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]), (arr_0 [i_0])))), (((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (arr_11 [i_4] [i_1]) : (arr_1 [i_0]))))) : (((((arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_4] [i_0] [i_3]) != var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((63 <= ((var_0 - (var_9 < var_0)))));
    var_21 = (62 / var_8);
    #pragma endscop
}
