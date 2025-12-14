/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((0 ? 234 : (min((min(4294967295, 65535)), var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (((arr_1 [i_2]) % (((arr_8 [i_2] [i_0]) ? (arr_8 [4] [4]) : 0))));
                    var_14 = ((arr_5 [i_2] [i_1]) != ((~(-9223372036854775807 - 1))));
                    var_15 |= (arr_4 [i_1] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((((((arr_19 [1]) ? (arr_12 [i_4]) : (arr_7 [i_5])))) ? var_3 : (max((arr_3 [i_5] [i_7]), (arr_17 [i_3] [i_3] [0])))))) ? (arr_21 [i_3] [i_3] [i_5] [i_6]) : ((((max(-9223372036854775790, 65535))) ? var_2 : ((510 ? (arr_24 [0] [i_4] [i_4] [i_6 + 1] [i_7] [i_6]) : var_0)))))))));
                                arr_26 [i_3] [i_3] [i_3] [i_6 + 1] [i_4] [i_7] = ((!((max((arr_19 [i_4]), (arr_19 [i_4]))))));
                            }
                        }
                    }
                }
                var_17 = (max(var_17, var_10));
            }
        }
    }
    var_18 = ((((((var_1 ? 1 : 1)) ? var_2 : var_6))));
    #pragma endscop
}
