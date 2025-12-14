/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (min(((((arr_1 [i_0]) >= (arr_0 [10])))), (arr_0 [i_2])));
                    var_15 = (((arr_4 [i_0] [i_1] [i_1]) ? (arr_1 [i_2]) : (arr_1 [i_1])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((((-(arr_0 [i_2])))) != ((637604832 ? var_4 : 393216)))))) >= 3657362464);
                    var_16 = ((((((((min(-1, var_4)))) - -5723789502357974368))) ? (var_14 / var_13) : (((var_6 * (arr_1 [i_1]))))));
                    var_17 = (-(arr_5 [i_1]));
                }
            }
        }
    }
    var_18 = ((var_12 ? var_1 : (!var_6)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = var_2;
                    var_20 = -6;
                    var_21 -= 1;
                }
            }
        }
    }
    #pragma endscop
}
