/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] [i_0] = (min((((-(!1821394965)))), ((~((18446744073709551615 ? 3530051901 : (arr_0 [0])))))));
                    var_12 = (max(var_12, ((((((((32428 ? var_8 : 1))) ? (arr_5 [i_1] [i_1] [i_2]) : (max(19189, 3634317366851825152)))) / (((var_3 + 9223372036854775807) << (3123501168 - 3123501168))))))));
                }
            }
        }
    }
    var_13 |= 841296128;
    #pragma endscop
}
