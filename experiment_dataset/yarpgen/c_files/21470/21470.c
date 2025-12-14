/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((~(arr_1 [i_0]))));
                var_17 = (((arr_4 [i_0] [i_0] [i_0]) ? -1 : (((arr_1 [i_0]) ? 32767 : 32754))));
                arr_7 [i_0] [i_0] = (((((((max(0, 80))) ? (max(3863790361, 14310)) : 1))) ? (((max(32761, 14313)))) : var_5));
            }
        }
    }
    #pragma endscop
}
