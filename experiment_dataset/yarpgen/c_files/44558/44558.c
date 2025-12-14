/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_1] = (var_11 < (arr_1 [i_0] [i_1]));
                    var_13 -= (~var_6);
                }
                var_14 = min(var_3, (((0 | (!var_6)))));
                arr_10 [i_1] = (min((((arr_2 [i_1]) ? (4294967281 >= var_4) : (min(2114056372, 0)))), ((min(((min(var_7, var_12))), ((0 ? -1 : var_6)))))));
                arr_11 [i_1] [i_1] = -2057317731;
            }
        }
    }
    var_15 = (max(var_15, (((((((-45 / -154576127) ? ((max(var_1, var_2))) : ((max(var_2, var_8)))))) ? ((min(var_6, ((var_2 ? var_0 : var_10))))) : 0)))));
    #pragma endscop
}
