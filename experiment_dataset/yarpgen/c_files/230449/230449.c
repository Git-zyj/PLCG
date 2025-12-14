/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = (max(var_14, (!3765771266)));
                        var_15 = (max(var_15, ((((~22395) ? (((var_11 ? 1 : var_2))) : ((9223372036854775781 ? (arr_1 [i_0]) : var_0)))))));
                        var_16 |= ((-((((max(26, var_13))) ? ((min(11, var_1))) : (!22)))));
                        var_17 = (~-1338369123);
                    }
                    arr_8 [i_0] = 2251799813685247;
                    var_18 = 23268;
                }
            }
        }
    }
    var_19 = (-9223372036854775758 ? 2725643336 : 4294967295);
    var_20 = ((((((((var_12 + 9223372036854775807) >> (2147483620 - 2147483576))) - 668415149))) ? ((((2147483641 << (3360248967 - 3360248967))) - 65514)) : var_0));
    #pragma endscop
}
