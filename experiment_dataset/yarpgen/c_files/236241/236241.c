/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(((675 ? 14431853718811008995 : var_8)), 32750)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (((min((((arr_3 [i_2] [i_2] [i_2]) / -17059)), 9)) > (((arr_7 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_7 [5] [i_2] [i_1 + 1]) : (arr_4 [i_0] [i_1])))));
                    var_12 = (-(((var_6 / var_3) | 67)));
                    var_13 = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (arr_10 [i_0] [i_1 - 3] [i_3]);
                                var_15 = (min(104, ((152 ? 9613920505567567158 : 152))));
                                var_16 *= (((((((arr_4 [i_0] [i_1]) < (arr_10 [i_0] [i_1] [i_2]))))) ? (((!((min(5774152303986526123, -31191)))))) : (((!(arr_4 [1] [i_1]))))));
                                var_17 = (max(((min((-212029260 < var_6), (arr_9 [i_0])))), ((104 ? (((min((arr_4 [i_0] [i_0]), (arr_11 [i_0] [5]))))) : (arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
