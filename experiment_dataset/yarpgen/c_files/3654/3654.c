/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1 + 1] [i_2] = (min(32767, -192));
                    arr_8 [i_0] [8] = ((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_7 : (arr_0 [i_0]))) : (((-32768 ? 352775105295232047 : 32767))));
                }
            }
        }
    }
    var_13 = ((0 ? 16911433728 : (((~(26 / -27517))))));
    var_14 = (min(var_3, (~222)));
    #pragma endscop
}
