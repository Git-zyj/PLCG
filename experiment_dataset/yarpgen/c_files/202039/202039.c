/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = var_13;
                var_17 &= var_15;
                arr_5 [i_0] [i_0] [i_1] = (arr_4 [i_0] [i_0] [i_0]);
                arr_6 [i_0] [i_1] = (((min((arr_1 [i_0]), var_1)) - (((-(arr_4 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_18 = (max(var_1, ((~(13534223645202692405 * 4912520428506859190)))));
    var_19 = ((((((var_7 ? var_13 : var_12)) < 1597075209)) ? ((var_12 ? var_6 : ((819818963 ? var_14 : var_11)))) : var_0));
    var_20 = var_3;
    var_21 = var_11;
    #pragma endscop
}
