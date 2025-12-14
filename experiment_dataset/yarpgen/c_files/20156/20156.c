/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = var_2;
                                var_15 = ((~(((((var_10 ? (arr_9 [11] [i_3] [5] [5] [5]) : (arr_2 [i_1] [i_1])))) ? (arr_5 [i_1]) : ((((arr_4 [i_0] [i_0] [i_0]) >= var_5)))))));
                                var_16 = (max((~0), ((min(var_3, (((arr_0 [15]) ? var_7 : var_8)))))));
                                var_17 = (max(var_17, 8589869056));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] = ((((var_12 || (arr_7 [15] [15] [i_2] [1])))));
                                arr_16 [i_1] [i_2] [i_1] = ((((((((arr_6 [i_2] [i_2]) ? var_13 : (arr_1 [i_0])))) && ((((arr_8 [i_1] [i_1] [i_5] [i_6]) ? var_13 : (arr_4 [i_2] [i_2] [i_2])))))) ? (((((~(arr_9 [2] [i_5] [2] [2] [i_0])))) ? (((arr_7 [i_0] [5] [5] [5]) ? (arr_6 [6] [6]) : var_11)) : ((min((arr_14 [i_1] [i_1]), (arr_4 [i_0] [i_0] [i_0])))))) : ((-(var_3 & var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 -= (((((max(var_13, var_6)))) ? (((((((min(var_6, var_9)))) == (min(var_2, var_8)))))) : (~var_2)));
    var_19 = (max(((((((var_13 ? var_5 : var_6))) || var_8))), ((var_13 ? (var_2 | var_12) : var_10))));
    #pragma endscop
}
