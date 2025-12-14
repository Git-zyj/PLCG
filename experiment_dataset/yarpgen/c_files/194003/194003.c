/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (((var_10 && (var_10 && var_2)))) : var_9));
    var_12 = (min(var_12, ((min(-var_10, (min(11, ((-6678479842795383796 ? var_10 : var_9)))))))));
    var_13 = (max(var_13, ((((92 ^ var_10) + var_9)))));
    var_14 = (min(var_14, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [18] [i_1] [18] = max(((((arr_4 [i_0] [i_1]) - 230))), ((-(((arr_3 [i_0]) ? 245 : -8959876471480450576)))));
                arr_6 [i_0] [i_0] = 11;
                var_15 = 51;
                var_16 = (max(var_16, (((var_9 && (arr_0 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
