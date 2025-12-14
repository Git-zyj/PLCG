/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [4] [i_1] [i_0] = (i_0 % 2 == zero) ? ((max((min((max((arr_2 [i_0] [i_1]), 13975)), ((((arr_1 [i_0] [i_0]) << (((arr_2 [i_0] [i_1]) - 2357749015))))))), (arr_2 [i_0] [i_0])))) : ((max((min((max((arr_2 [i_0] [i_1]), 13975)), ((((arr_1 [i_0] [i_0]) << (((((arr_2 [i_0] [i_1]) - 2357749015)) - 3912323015))))))), (arr_2 [i_0] [i_0]))));
                arr_5 [0] [i_1] [i_0] = ((-(arr_2 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
