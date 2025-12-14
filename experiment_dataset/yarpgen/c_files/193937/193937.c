/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] &= ((-(((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1 - 1] [17] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    var_10 = ((((((min(4294967293, 1))) ? ((((arr_9 [7] [i_1 - 1] [i_2] [5]) ? 134217724 : var_0))) : var_4))) ? (((var_0 > ((var_3 * (arr_4 [i_0] [i_1 - 1])))))) : (((arr_7 [3] [i_2]) << (((arr_0 [i_1 - 1] [i_1 - 1]) - 1765490767716810883)))));
                    var_11 = ((min((max(134217728, var_8), -50))));
                    var_12 *= 16138;
                }
            }
        }
    }
    var_13 = ((!(((-(119 - var_2))))));
    #pragma endscop
}
