/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((6868936813155541093 / 20) - var_8))) ? var_3 : var_2));
    var_14 = (61 || 18446744073709551615);
    var_15 |= (max(74, (max((1 & 104), 212))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((-(((var_9 < var_6) ? ((min(50, 1))) : (arr_5 [i_0])))));
                arr_7 [i_0] [i_0] [i_0] = ((((((((var_10 ? 1 : var_11)) <= ((max(45, 54))))))) >= ((-((168 ? 2108900658 : 253))))));
                var_16 = ((((((arr_4 [i_0 + 3]) ? 3 : 4294967295))) && (~1085961990)));
            }
        }
    }
    #pragma endscop
}
