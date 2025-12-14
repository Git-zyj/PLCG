/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = 178;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = (((arr_8 [i_0] [i_3 - 2] [i_4 - 3] [i_4]) + ((-37220305 ? var_3 : ((min(-363694750523637294, 37220305)))))));
                                var_13 = (((((-37220296 ? (min(-2177926487869530177, 1)) : ((min(var_1, (arr_11 [i_0] [9] [i_0] [i_3] [9] [i_3] [i_1]))))))) ? ((min(1, (arr_10 [i_2] [i_2])))) : 0));
                                var_14 = ((((((var_9 << (((var_1 + 1834885458) - 13))))) & 18446744073709551615)) - 1);
                                var_15 = 65535;
                                var_16 = (max(var_16, (--1853700020)));
                            }
                        }
                    }
                    var_17 = (((((13168 ? 1853700020 : 13808))) ? (arr_12 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2] [i_2]) : (arr_3 [i_2 + 1] [i_1] [i_0])));
                    var_18 |= ((((var_10 ? ((37220305 ^ (arr_2 [i_0] [i_0]))) : 37220300)) >= var_9));
                }
            }
        }
    }
    var_19 |= (min((min(((var_8 ? 3243803246 : 1)), var_2)), ((((((3350986063 ? var_1 : 0))) != var_4)))));
    var_20 = (!var_7);
    #pragma endscop
}
