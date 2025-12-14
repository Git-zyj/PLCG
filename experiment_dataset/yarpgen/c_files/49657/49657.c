/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((min(((max((arr_4 [i_0] [i_0] [i_2]), 0))), (arr_5 [i_0 - 1] [i_1 - 1] [i_0 + 1]))) % ((-(min(1, (arr_5 [14] [i_1] [i_2])))))));
                    arr_7 [i_1 + 1] [i_2] = ((-(arr_6 [i_0 - 1] [i_0 + 1])));
                    var_20 = (((arr_0 [i_1]) <= (arr_6 [11] [11])));
                    var_21 = (max(var_21, (arr_1 [i_0 - 1])));
                }
            }
        }
    }
    var_22 = ((((var_18 ? (~var_12) : 1)) % 1));
    #pragma endscop
}
