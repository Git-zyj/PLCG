/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 *= var_7;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = (((1 ? -1982111778 : (arr_9 [10] [i_1] [i_2] [i_3] [i_4]))));
                                arr_13 [10] [i_1] [i_1] [i_1] [10] = (((!(arr_2 [i_0] [i_0]))));
                                var_19 = (!1982111778);
                            }
                        }
                    }
                    var_20 += (((max(((max((arr_9 [i_0] [6] [i_0] [i_0] [i_0]), (arr_10 [i_0] [5] [5] [i_0] [i_0])))), ((var_8 ? (arr_11 [i_0] [i_1] [10] [10] [i_1]) : var_4)))) <= (((min((!var_17), (arr_7 [4] [i_1] [i_1])))))));
                    var_21 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_22 ^= var_15;
    var_23 = (~142863570);
    #pragma endscop
}
