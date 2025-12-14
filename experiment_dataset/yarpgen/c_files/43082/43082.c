/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_4 [i_1] [i_0]);
                var_17 += ((((arr_1 [i_0] [7]) ? 0 : -1231023609)));
                var_18 ^= min(2, (max((((arr_5 [i_0]) ? 4294967290 : 17304002759651752219)), (var_4 * 31173))));
            }
        }
    }
    var_19 ^= ((!((max(var_0, (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (223 - 223))))))));
    var_20 -= var_8;
    var_21 = ((var_11 ? var_1 : var_3));
    #pragma endscop
}
