/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] |= var_8;

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_10 = (((((arr_6 [i_2 + 1] [7] [i_2 + 1] [22]) && (arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2]))) ? (max((arr_6 [i_2 + 1] [11] [i_2 - 1] [i_2 - 1]), -5808)) : (arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                    arr_8 [i_0] = -1546473641999861995;
                }
                var_11 ^= 42018;
            }
        }
    }
    var_12 ^= var_3;
    #pragma endscop
}
