/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_1 != (((var_8 <= ((196 << (4294967295 - 4294967293)))))))))));
    var_17 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((((arr_4 [i_1] [i_1]) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1])))) ? (((!(arr_1 [i_1])))) : (~1013044866)));
                var_19 = (arr_0 [i_0] [i_1]);
                var_20 = 1812844126948243906;
                arr_5 [i_1] = (((max(var_4, ((var_7 ? var_9 : 1))))) || (((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : 4294967290))) ? (((60 ^ (arr_1 [i_0])))) : (max(var_1, var_3))))));
                var_21 = 1425822597;
            }
        }
    }
    #pragma endscop
}
