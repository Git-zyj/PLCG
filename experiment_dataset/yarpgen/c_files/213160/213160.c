/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [1] = (max(var_7, (arr_0 [i_0])));
                arr_5 [11] &= (arr_3 [i_0] [i_0]);
                var_13 = (max(var_13, ((max(((max(var_2, ((var_9 ? 4294967284 : (arr_3 [i_0] [i_0])))))), (((max(var_8, (arr_0 [18]))) | ((((arr_3 [11] [i_1]) * (arr_3 [9] [i_1])))))))))));
            }
        }
    }
    var_14 = (max(var_7, ((min(((max(var_3, var_5))), (max(var_1, var_2)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [i_3 - 3] = (arr_6 [2]);
                var_15 = (max((var_9 - 2147483633), (min(2147483615, 64))));
                arr_11 [i_2] = ((((var_8 ? 1 : 32767))) ? (arr_3 [i_2] [i_3 - 1]) : 0);
            }
        }
    }
    #pragma endscop
}
