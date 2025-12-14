/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_2));
    var_12 &= ((var_6 ? ((-var_1 ? ((var_0 ? var_10 : var_8)) : var_2)) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (((max((arr_1 [i_1] [i_0]), (arr_3 [9] [i_1]))) % ((((arr_3 [i_1] [i_0]) + ((((arr_0 [i_0] [i_1]) && (arr_2 [i_0])))))))));
                arr_5 [i_0] |= (((min(((((arr_0 [i_0] [16]) || (arr_1 [i_1] [1])))), (((((arr_3 [i_1] [i_0]) + 2147483647)) << (((((arr_3 [i_1] [i_0]) + 3146)) - 10))))))) / (arr_1 [7] [13]));
            }
        }
    }
    var_13 += var_4;
    #pragma endscop
}
