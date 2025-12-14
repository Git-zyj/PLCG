/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 += ((32763 ? -2120509525 : -7486606239415950734));
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) ? (-16830 | -16841) : 16830));
        var_13 ^= (max((arr_0 [i_0] [i_0]), ((var_5 ? 13236583619252627531 : -16841))));
    }
    var_14 = (min(((var_7 ? 104 : -1147)), ((min(40579, var_2)))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                {
                    var_15 = ((+(min((arr_9 [i_3 - 3] [i_3] [i_3]), var_6))));
                    arr_12 [i_1] [i_1] [i_3] = (min((((!(arr_8 [i_1] [i_2 - 1] [i_3 - 3])))), var_7));
                }
            }
        }
    }
    var_16 = (min(18446744073709551597, 9223372036854775807));
    #pragma endscop
}
