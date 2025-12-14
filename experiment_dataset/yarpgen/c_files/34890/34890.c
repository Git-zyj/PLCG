/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = var_11;
                arr_5 [i_0 - 1] [1] [i_1] = (!133);
            }
        }
    }
    var_14 = ((-(min(((2093 ? 15375192751474286771 : 15375192751474286778)), 15375192751474286771))));
    #pragma endscop
}
