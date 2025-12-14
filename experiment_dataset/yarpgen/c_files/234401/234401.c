/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-var_10 ? (((max(var_3, var_0)))) : ((var_10 ? var_1 : var_0))))) ? var_7 : var_1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_3] [i_4] = (((arr_5 [i_0 + 4] [i_0] [i_0 + 4]) ? (arr_8 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 3]) : (((13800763864680705445 ? (arr_3 [i_0 + 3] [i_0 + 1]) : var_3)))));
                                var_12 = ((((arr_11 [i_0 - 1] [i_0 + 4] [i_0 + 4]) ? (arr_2 [i_2]) : ((min((arr_10 [i_0] [i_0] [i_3] [i_4]), -125))))));
                                arr_14 [i_2] [i_1] = (arr_1 [i_2]);
                            }
                        }
                    }
                    arr_15 [i_1] [i_1] [i_2] = ((((~(arr_12 [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_0 + 1])))) ? (arr_7 [i_1]) : ((~(min(var_10, 313618993799872482)))));
                }
            }
        }
    }
    #pragma endscop
}
