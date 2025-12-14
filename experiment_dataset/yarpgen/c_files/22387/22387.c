/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((18446744073709551615 == (!18446744073709551615)));
                var_10 -= (((arr_2 [i_1]) ? ((((max(var_5, 2255195720))) ? 245 : 2255195728)) : ((((!((min(2374773646, (arr_0 [i_1]))))))))));
            }
        }
    }
    var_11 = (!-1594718583);
    #pragma endscop
}
