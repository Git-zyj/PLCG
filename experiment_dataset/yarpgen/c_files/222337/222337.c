/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (var_0 ? ((var_6 ? var_13 : (min(4924067352602580851, 65535)))) : var_6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((arr_1 [i_0 - 2] [0]) < var_2)) ? (((arr_1 [i_0 - 1] [2]) ? 4924067352602580833 : (arr_1 [i_0 + 1] [10]))) : (((((arr_1 [i_0 + 1] [2]) >= (arr_1 [i_0 - 1] [10])))))))));
                arr_7 [i_0] [i_0] [i_1] = (~4924067352602580851);
                var_16 ^= var_2;
            }
        }
    }
    var_17 = ((((((~-4924067352602580829) ? var_8 : ((var_9 ? 2516058758 : 132120576))))) ? var_9 : (~-4924067352602580813)));
    #pragma endscop
}
