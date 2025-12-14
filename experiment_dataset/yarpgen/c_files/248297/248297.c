/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((((!((max((arr_4 [11] [i_1] [11] [8]), 549218942976))))))) | var_19)))));
                            var_21 = (((((-((~(arr_7 [i_3 + 1] [i_2] [i_2] [i_1] [i_0] [i_0])))))) ? ((((((var_18 ? var_1 : var_19))) ? (arr_1 [i_2] [i_3 + 1]) : (arr_7 [i_0] [8] [i_2] [i_1] [i_0] [i_0])))) : (max((4032 % -1), (((arr_5 [i_0] [i_1] [i_2] [i_3]) >> (410859155 - 410859106)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_22 = (arr_6 [i_0] [i_1] [i_1] [i_5]);
                            arr_13 [i_0] [i_4] [i_0] [i_0] [i_0] [2] = (184 >= 174);
                            var_23 *= (((arr_3 [i_0]) + ((-(arr_3 [15])))));
                        }
                    }
                }
            }
        }
    }
    var_24 &= var_7;
    var_25 = var_12;
    #pragma endscop
}
