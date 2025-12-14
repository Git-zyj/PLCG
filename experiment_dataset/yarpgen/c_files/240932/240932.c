/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = 7697614725969001247;
                var_17 ^= ((-(((8184 <= (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
            }
        }
    }
    var_18 = (max(var_18, -849672446313181133));
    #pragma endscop
}
