/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((((max(15626, (arr_3 [i_0]))))) >= (max(((15631 + (arr_1 [9]))), ((max(-21, 49910)))))));
                arr_6 [i_0] [i_0] = (((((((max((arr_4 [1] [6] [i_1]), var_3))) && (arr_3 [i_1])))) >= (min(15624, -49907))));
            }
        }
    }
    var_20 = (min(var_20, (~65535)));
    var_21 = (49909 < 78);
    var_22 = var_7;
    #pragma endscop
}
