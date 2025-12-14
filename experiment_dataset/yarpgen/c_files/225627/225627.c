/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (!1);
                    var_11 = (max(var_11, (arr_3 [i_0])));
                    var_12 -= -1215743869173965444;
                }
            }
        }
    }
    var_13 = 39;
    var_14 = 4;
    #pragma endscop
}
