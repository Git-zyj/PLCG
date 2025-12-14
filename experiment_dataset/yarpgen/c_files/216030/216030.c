/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_7 / 9223372036854775807);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((-1231468726 & ((min(((((arr_1 [i_1]) == (arr_0 [i_0])))), 3948005702624419621))))))));
                arr_6 [i_1] [i_1] = (((min((38 - 3683522643), var_6)) + ((max((arr_1 [i_0 - 2]), ((-(-32767 - 1))))))));
            }
        }
    }
    #pragma endscop
}
