/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(!0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [1] [12] [i_4] = ((((min(1311080002501445481, (arr_8 [i_4] [i_0] [i_2 - 1] [0])))) ? (((arr_8 [i_4] [i_3] [7] [10]) >> (var_4 + 9049))) : (((((arr_8 [1] [i_1] [i_1] [5]) >= (arr_8 [6] [i_1] [i_1] [i_1])))))));
                                arr_13 [1] [i_1] [12] [4] = ((((-(~var_13))) * ((((arr_4 [i_1] [i_3]) ? ((max(38, (arr_9 [i_3] [i_2] [i_1] [i_0])))) : (arr_10 [i_2 - 1] [i_2] [i_2 - 1] [2] [i_2 - 1] [i_2 - 1] [4]))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] [15] = (arr_4 [i_2] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
