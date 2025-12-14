/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 204;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((2542810277 ? 1 : ((-1805124390905915285 ? 127 : 50884)))) % (min((arr_2 [i_1 + 3] [9]), ((~(arr_5 [i_0])))))));
                var_17 = (((min(var_6, (((arr_2 [i_0] [i_0]) << (1752157011 - 1752157003)))))) / (max((((0 ? (arr_0 [i_0]) : 26))), 4602733299242445356)));
            }
        }
    }
    var_18 = (min(var_11, ((-(!var_11)))));
    var_19 = ((var_3 ? ((var_12 ? ((1 ? 2542810277 : 214)) : var_4)) : (((var_10 ? ((var_1 ? 1 : var_11)) : ((var_4 ? var_5 : var_10)))))));
    #pragma endscop
}
