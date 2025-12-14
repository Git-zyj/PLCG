/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((max((arr_8 [i_2] [2] [i_0] [i_0]), (var_9 || var_3)))))));
                    var_14 = var_6;
                }
            }
        }
    }
    var_15 = ((((max((var_6 == var_11), var_6))) ? var_6 : ((var_1 ? var_7 : (min(var_7, var_4))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_16 = ((~(((arr_12 [i_3]) ^ (((arr_9 [i_3] [i_4]) ? 2446843197906188210 : (arr_12 [i_4])))))));
                arr_16 [13] [i_4] [i_4] = var_2;
                var_17 -= (arr_15 [13] [13] [i_4]);
            }
        }
    }
    #pragma endscop
}
