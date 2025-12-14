/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((min((min(var_4, 9223372036854775807)), (min(10638276297030643489, (-9223372036854775807 - 1))))))));
                var_11 = (min((min((-9223372036854775807 - 1), 4294967292)), ((min((min(var_2, (arr_3 [i_0]))), var_0)))));
            }
        }
    }
    var_12 = (min((min(var_4, ((min((-9223372036854775807 - 1), 81))))), var_9));
    var_13 = (min(9223372036854775807, 174));
    #pragma endscop
}
