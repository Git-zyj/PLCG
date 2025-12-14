/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 ^= ((((((64 ? 72057593903710208 : 35971)))) ? ((-(arr_3 [i_1 + 1] [i_1 + 1] [i_0]))) : (((arr_4 [i_1 + 2] [i_1 + 2]) ? (arr_4 [i_1 + 1] [i_0]) : (arr_4 [i_1 + 1] [i_1 + 1])))));
                arr_5 [i_1] [1] = 2047;
            }
        }
    }
    var_13 = ((((min(var_8, ((min(var_9, var_0)))))) ? -29754 : ((((max(-6235947288368632233, var_7))) ? ((var_6 ? -3814645617615530758 : 1)) : (((min(var_0, var_11))))))));
    var_14 *= ((9221120237041090560 ? 2047 : -2051));
    #pragma endscop
}
