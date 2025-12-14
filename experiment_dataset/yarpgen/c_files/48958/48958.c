/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (max(((max((arr_2 [i_0] [i_0]), (((arr_3 [i_0]) ? var_10 : (arr_3 [i_1])))))), ((1 ? (arr_0 [i_0]) : 2203))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [13] [i_1] = (arr_2 [i_0] [i_0]);
                    var_15 = (max(var_3, (arr_6 [i_0] [i_1] [i_1] [i_2])));
                    var_16 = var_1;
                    arr_10 [i_0] [i_0] [i_2] = (((arr_6 [i_0] [i_1] [i_1] [i_0]) ? ((var_0 ? (arr_3 [i_0]) : (((!(arr_2 [i_0] [i_1])))))) : ((((!(arr_7 [1] [1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = var_11;
                                var_18 = ((-14226 ? (arr_2 [i_0] [i_0]) : 7788408871531562859));
                            }
                        }
                    }
                }
                var_19 *= (arr_11 [i_1]);
                var_20 *= (max((!var_7), 144));
            }
        }
    }
    var_21 *= (min((!6047341056602431448), var_4));
    #pragma endscop
}
