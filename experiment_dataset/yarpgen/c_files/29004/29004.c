/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(((var_11 ? var_8 : var_3)), var_11)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((max(0, (arr_7 [i_0] [i_1 + 2]))) > (((+((((arr_6 [i_0]) > 8565050728315397123))))))));
                    arr_8 [i_1] = (!919540300);
                    var_16 ^= 919540300;
                }
            }
        }
    }
    #pragma endscop
}
