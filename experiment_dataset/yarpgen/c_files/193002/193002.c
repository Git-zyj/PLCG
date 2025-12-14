/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((((var_1 ? -1643024749 : -3843112128579297671))) ? (~var_0) : -var_16)), (var_6 >> var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max(((max(((min((arr_1 [i_0] [i_1]), var_2))), ((~(-127 - 1)))))), (((arr_1 [i_1] [i_1 - 1]) ? (arr_3 [i_0] [i_1 + 1]) : (((var_3 << (((arr_3 [i_0] [i_1 - 1]) + 3212399703091541948))))))))))));
                arr_4 [i_0] [17] [5] = (((min(2747220021, 2336424388440629700)) << (((!(((var_13 ? var_17 : 1))))))));
                arr_5 [i_0] [i_0] [7] = (var_1 ? 1 : ((2456 ? 4294967295 : (min(1, 568881442)))));
            }
        }
    }
    #pragma endscop
}
