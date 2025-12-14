/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(21342, ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
                arr_4 [i_1 + 1] [i_0] = (((arr_1 [i_0]) ? 12122 : (((((min((arr_0 [i_0]), (arr_2 [i_0 - 3] [i_0] [2])))) || 1554360006)))));
                var_21 ^= (min(((3578123371 ? ((-(arr_3 [10]))) : ((max((arr_1 [8]), (arr_2 [i_0] [16] [i_0])))))), ((((!(arr_0 [0]))) ? (arr_2 [i_0] [2] [i_1 + 2]) : (arr_0 [22])))));
                var_22 = ((((!(arr_2 [i_0] [i_0] [i_1 - 1])))));
            }
        }
    }
    var_23 = (var_16 && var_0);
    var_24 = (max(((((max(var_18, 1))) ? (~var_18) : var_1)), -892651270));
    #pragma endscop
}
