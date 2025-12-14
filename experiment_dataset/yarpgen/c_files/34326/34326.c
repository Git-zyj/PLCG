/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = (((((~(min(9223301668110598144, 9223301668110598148))))) ? ((((9223442405598953462 < (arr_1 [i_0]))))) : (min(((17299232399131555412 ? var_6 : var_9)), (max(524288, (arr_1 [i_0])))))));
    }
    var_11 += (min(((((min(0, 13287628389926874392))) ? var_4 : -var_1)), 1));
    #pragma endscop
}
