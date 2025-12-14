/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (i_0 % 2 == zero) ? (((77 << (((arr_1 [i_0] [i_0]) - 33762))))) : (((77 << (((((arr_1 [i_0] [i_0]) - 33762)) - 8593)))));
                arr_6 [i_0] [i_0] [i_0] = min(((-(((-32521 > (arr_2 [i_0] [i_0])))))), var_10);
                arr_7 [i_0] = var_10;
                var_18 += (min((max((min((arr_3 [18] [18] [18]), (arr_2 [8] [8]))), (min(var_9, var_4)))), var_9));
                arr_8 [i_0] [i_0] = (min(((min(5475, var_7))), (min((arr_1 [i_0] [i_0]), (max(var_11, (-127 - 1)))))));
            }
        }
    }
    var_19 = var_13;
    var_20 = (min((max(var_11, (min(var_9, var_12)))), (((+(min((-2147483647 - 1), var_0)))))));
    var_21 = (min(var_16, var_12));
    #pragma endscop
}
