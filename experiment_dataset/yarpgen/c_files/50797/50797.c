/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((var_10 ? var_17 : (min((max(-8553668829646158100, 719624655217634493)), (!4412)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((min((arr_4 [i_1 + 1]), (arr_0 [i_1 + 1])))) ? ((((max(var_12, (arr_3 [i_1])))) ? (17359 + 1) : (((arr_3 [i_1]) + -9152860173638697088)))) : ((((max((arr_0 [i_0]), -907084272)))))));
                    var_21 = ((arr_0 [i_1 + 1]) ? (min((arr_0 [i_1 + 1]), 1)) : (max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 1]))));
                    var_22 = ((4411 ? (((((max(4411, 65535))) ? -907084254 : 4393))) : (min((arr_5 [i_0] [i_0] [i_2] [i_2]), (arr_2 [i_0] [i_2])))));
                    var_23 = ((var_0 ? (((((arr_5 [i_0] [i_0] [i_1] [i_1 + 1]) != (arr_1 [i_1 + 1] [i_1]))))) : (arr_2 [4] [i_2])));
                    arr_6 [i_1] = ((var_13 * (var_17 / var_13)));
                }
            }
        }
    }
    var_24 = (max(((max(var_17, 61123))), var_11));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_25 = 907084289;
                            var_26 -= 730630821;
                            var_27 = arr_22 [i_6];
                            var_28 = (((var_6 ? (max(var_3, var_4)) : 4409)));
                        }
                    }
                }
                var_29 = (-127 - 1);
            }
        }
    }
    #pragma endscop
}
