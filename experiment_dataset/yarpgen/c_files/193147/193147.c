/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((173970256 == -32757) ? (var_8 + 173970249) : (~var_9))));
    var_14 = ((~(max(var_3, (min(var_11, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 1566186904));
                var_16 = (((((!(-25736 || -2002085885)))) <= ((max((((173970259 == (arr_4 [i_0] [9] [i_0])))), (arr_3 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
