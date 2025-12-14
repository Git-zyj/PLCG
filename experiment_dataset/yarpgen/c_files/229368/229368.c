/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max(var_8, (arr_1 [i_1 - 1] [i_1 - 1])));
                arr_5 [i_0] [i_0] = (max((-76 < var_10), ((var_0 * (((arr_1 [14] [i_1 - 1]) << (var_7 - 159)))))));
                arr_6 [i_1 - 1] = (arr_0 [4]);
            }
        }
    }
    var_21 |= ((((!(((var_5 ? var_14 : 579050396))))) ? ((max((4503191320822709134 && 227), (!var_19)))) : (!75)));
    #pragma endscop
}
