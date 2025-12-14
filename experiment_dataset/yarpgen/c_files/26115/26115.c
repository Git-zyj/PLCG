/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] |= (min(19, -32));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (min((arr_1 [i_1] [i_1]), (max((var_13 | var_14), (arr_3 [i_1] [i_1] [i_1])))));
                    var_15 = (min((((-0 != (arr_2 [11])))), ((0 + (((arr_7 [i_0] [i_2] [i_2]) ? var_11 : (arr_1 [i_2] [i_1])))))));
                }
            }
        }
    }
    var_16 = 4294967278;
    #pragma endscop
}
