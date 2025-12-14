/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min((min((var_0 && 1024), var_7)), 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = (min(((~(arr_6 [i_4 + 3]))), ((max((arr_6 [i_4 + 3]), (arr_6 [i_4 + 1]))))));
                                var_12 = (min(var_12, (((255 >> (((!(min(1, 1))))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_3 + 1] [i_1] = (max(((((max(var_5, (arr_6 [i_1]))) <= 224))), -0));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_13 = ((min((arr_16 [i_0] [i_1] [i_5] [i_6]), (((arr_16 [i_0] [i_5] [i_0] [i_0]) - var_5)))) + ((((((9223372036854775807 + (arr_6 [i_0])))) ? (arr_1 [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0])))));
                                var_14 += (arr_19 [i_5]);
                                arr_21 [i_0] [i_1] [i_5] [i_6] [i_7] [i_6] [i_7] = ((!(((1 ^ (arr_18 [9] [i_7] [7] [i_5] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                var_15 = (min(var_15, (((-((((arr_16 [i_0] [i_0] [i_0] [i_0]) == (max(13420096719820558564, (arr_4 [i_0] [i_1])))))))))));
                var_16 += (arr_5 [i_0] [i_1] [i_1] [1]);
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
