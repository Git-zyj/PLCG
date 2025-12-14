/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -32010;
    var_21 = (var_13 + var_5);
    var_22 = (min(var_22, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = (max((max((min((arr_3 [i_0] [i_0] [16]), (arr_2 [7] [i_1]))), (!-9223372036854775805))), ((30462 ? 9223372036854775804 : 10978404256457032902))));
                arr_5 [i_0] [i_1] = (min(((min(((min(-32755, 12179))), 16678))), ((-var_7 * ((var_19 ? (arr_3 [i_0] [i_1] [i_0]) : var_11))))));
                arr_6 [i_0] [13] = ((((arr_0 [i_0]) | (arr_0 [i_0]))));
            }
        }
    }
    #pragma endscop
}
