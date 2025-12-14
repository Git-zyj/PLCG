/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = ((((139 ? -21917 : -10053)) <= (((arr_4 [i_0] [i_2]) & (arr_5 [i_1 - 1] [i_1 + 2] [i_1 - 3])))));
                    var_20 ^= 26402;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((((min(-4035552638055683819, 53753))) ? (((((-8922915728388414526 ? var_10 : 1))) ? (~30) : ((max(30, -1))))) : (((arr_2 [i_1 - 2] [i_1 - 2]) ? (arr_6 [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1 + 2])))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((max(var_0, (((53 ? ((min(-7, -13))) : 138))))))));
    var_22 = (max(var_22, (((((max(((22185 ? var_18 : 11783)), (var_5 + 1)))) ? (((((1 ? var_12 : 1))) + var_16)) : (((((min(var_15, var_10))) - var_8))))))));
    var_23 = var_2;
    var_24 = ((((((min(51193, 3103661984729901766))) ? var_7 : ((var_0 ? var_2 : var_9))))) ? ((((var_8 ? 13682 : var_2)) * var_17)) : ((max(((4941250945213367401 ? -7999 : var_6)), ((var_7 ? var_8 : 127))))));
    #pragma endscop
}
