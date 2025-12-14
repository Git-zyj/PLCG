/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((max(2, 17516784586290765006)))));
                arr_5 [i_1] = 2;
                arr_6 [i_1] = ((-12 ? 0 : 2137314098));
            }
        }
    }
    var_13 = (((var_1 % (((31 ? var_2 : 1514287456))))));
    #pragma endscop
}
