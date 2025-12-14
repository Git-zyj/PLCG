/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(((!(arr_0 [3]))), (-62746607 >= 1)));
                arr_5 [7] [i_1] [6] = ((+(min((arr_4 [i_0 - 1] [7] [5]), (arr_1 [i_0 + 3])))));
                var_12 = (min((min((var_9 % var_8), (arr_1 [i_0 + 1]))), (~var_3)));
                arr_6 [1] [i_1] = ((((((var_8 ? var_10 : (arr_1 [i_1]))))) ? (min((47 ^ var_7), (((~(arr_3 [i_0])))))) : ((min((max(62746606, 109)), (arr_2 [i_0 - 2]))))));
            }
        }
    }
    var_13 = ((((min(var_5, var_4))) % (62746606 | 147)));
    #pragma endscop
}
