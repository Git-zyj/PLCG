/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [22] &= (((var_1 ^ var_2) ? (min(((var_0 ? 1 : var_8)), ((min(-87, var_1))))) : (((!(arr_2 [i_0 + 1] [i_1 - 1]))))));
                var_11 = (min(var_11, var_1));
            }
        }
    }
    var_12 += ((((-var_8 * (var_5 * var_4))) / (((min(var_7, var_6))))));
    var_13 = (min(var_13, (((((-((252 ? -9 : 11696)))) != (min((~205), -98)))))));
    #pragma endscop
}
