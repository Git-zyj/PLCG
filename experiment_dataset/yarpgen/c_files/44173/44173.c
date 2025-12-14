/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~((max((max(var_12, 41966)), ((max(var_0, 30)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = min(((~((~(arr_3 [i_0]))))), (((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : -4573837963127334570)))));
                var_15 |= (max(((max(128, (max(9037124860956646697, 2160691704))))), 11));
                arr_5 [i_0] [i_1] = 248;
            }
        }
    }
    var_16 = (max(((((((min(-109, -106254371)) + 2147483647)) << (((min(var_4, 121)) - 121))))), (max(17, var_3))));
    var_17 = var_5;
    #pragma endscop
}
