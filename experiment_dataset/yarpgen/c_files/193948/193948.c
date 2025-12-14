/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 -= 3434778185817367060;
                var_20 = (((+((-1628530785 ? (arr_2 [i_1]) : var_8)))));
            }
        }
    }
    var_21 |= 16550;
    #pragma endscop
}
