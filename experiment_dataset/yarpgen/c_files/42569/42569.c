/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 |= ((!(var_10 >= 1)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_2] = ((827907827 ? (var_6 != 1) : 0));
                        var_12 = (min(var_12, var_7));
                        var_13 = (-15859 && 64434);
                    }
                }
            }
        }
        var_14 ^= var_3;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_15 = (min((max(4022398161, 550569017)), (((max(var_9, var_2))))));
        var_16 = (((((((max(var_6, 1))) << (((((arr_7 [i_4] [i_4]) & -12830)) - 2090666044))))) ? ((((15850 < 0) != 1969992961))) : (((min(0, (arr_14 [i_4]))) ? -21894 : 127))));
        var_17 = arr_1 [i_4];
    }
    var_18 = 60;
    var_19 = var_0;
    var_20 = var_0;
    #pragma endscop
}
