/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((((0 ? -1 : 25307))) ? ((var_12 ? -16342 : 25307)) : -16340))) ? ((((40229 % 1) <= (7 % -31399)))) : ((~(!var_11)))));
                var_19 = (((1011176612 && 7202) ? (237 / 2147483647) : 10));
            }
        }
    }
    var_20 = (min(var_20, var_6));
    var_21 = ((((((var_17 << (40240 - 40216))))) ? var_14 : ((((var_17 >= (1 % 9223372036854775796)))))));
    #pragma endscop
}
