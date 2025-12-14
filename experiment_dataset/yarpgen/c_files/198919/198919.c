/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!49329) && ((min(-var_15, var_4)))));
    var_19 *= (max((((!(!var_9)))), 16213));
    var_20 = (!var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((max(((min((arr_0 [i_0]), (arr_0 [7])))), ((~(arr_0 [10])))))) ? ((~(min(var_0, -13186)))) : ((min(((var_0 ? var_3 : 13185)), (((13185 && (arr_2 [i_0])))))))));
                arr_6 [i_0] [i_1] [i_1] = ((~((max((arr_1 [i_0] [i_0]), 13303)))));
                arr_7 [i_0] = (min(0, ((((((49329 ? (arr_4 [i_0] [i_0]) : 32951))) && (((118 ? -93 : 4114430265))))))));
            }
        }
    }
    #pragma endscop
}
