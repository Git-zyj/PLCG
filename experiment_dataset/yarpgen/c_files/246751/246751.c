/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (2007043979140780585 % 524288);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0 + 1] = ((((min((((arr_0 [i_0]) >> (39975 - 39963))), ((min(2980836071, var_9)))))) ? ((max(1071644672, 1071644672))) : (min((max((arr_1 [i_0] [1]), (arr_5 [15] [15] [16]))), (min(3223322623, (arr_4 [i_0 - 1] [15])))))));
                var_14 = (arr_5 [i_0] [i_0] [i_0 - 1]);
                arr_8 [i_1] [i_0] [i_0] = (((arr_6 [i_0]) | (min(1071644670, (max((arr_4 [i_0] [i_1]), 44111))))));
                var_15 = (max((((var_10 ? (((!(arr_3 [i_0 - 1] [i_0])))) : 21425))), (min((arr_2 [i_0 - 1] [i_1 + 2]), 3986295637))));
                var_16 = ((-(max((arr_0 [i_0]), ((max(1071644672, 21425)))))));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
