/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (((max((max(var_6, var_1)), -8118815842360821952)) * ((((!(var_1 - var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [13] = ((((max(((((arr_0 [1] [i_0]) && 48114))), ((~(arr_3 [17] [i_1] [2])))))) ? (((((10327335720875041472 ? var_0 : var_10)) > (-127 - 1)))) : 17421));
                var_14 = ((((max(48114, (!17421))))) ^ (arr_2 [i_0]));
            }
        }
    }
    #pragma endscop
}
