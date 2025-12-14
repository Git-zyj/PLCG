/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 -= min(26217, 234881024);
                                arr_11 [i_1] [i_2] [i_1] = (max(var_5, (((((max((arr_10 [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_2])))) ? (arr_7 [i_3] [i_3] [i_2] [i_3] [i_3]) : 1)))));
                            }
                        }
                    }
                    var_13 -= ((1 >= (((arr_10 [i_1] [i_2]) % (arr_0 [i_1])))));
                    var_14 = ((!(arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_16 |= (arr_15 [i_6] [10] [8]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_17 = 1;
                            var_18 = (((((((arr_17 [i_5] [i_5] [i_6] [i_8 - 1]) == (((arr_19 [i_5] [i_6] [i_7] [i_5]) ? var_3 : var_4)))))) == (max((((arr_20 [i_6] [i_6] [i_6] [i_5]) ? (arr_21 [i_5] [i_5] [i_5] [i_5] [i_5]) : var_10)), ((max(4227858432, (arr_16 [i_5] [i_5] [i_7]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
