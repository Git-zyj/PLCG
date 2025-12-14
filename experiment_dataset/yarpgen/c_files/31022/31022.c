/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-((min(14480, 51077)))))) ? (min(((70 ? 16927073528978650635 : 3640600550)), ((min(var_1, 104))))) : ((9103641005163268430 ? ((var_9 ? var_14 : var_14)) : (((var_0 ? 51077 : var_8)))))));
    var_16 = (-((min((!var_6), (min(-66, 26460))))));
    var_17 = (min(var_17, ((max(-662063029001763152, (((10895889660582354419 ? 51058 : 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((-(max((~-6779952356216229244), var_7))));
                var_19 = (((min(((-662063029001763152 ? 112547691219359309 : 25634)), ((min(71, (arr_3 [i_1]))))))) ? (min((((-(arr_1 [i_0])))), (((arr_1 [i_0]) ? 1959368495843239932 : (arr_0 [i_0] [6]))))) : (!98));
                var_20 = ((~(((((-(arr_1 [i_1 + 1])))) ? ((~(arr_2 [i_0] [i_1]))) : ((-(arr_1 [i_0])))))));
            }
        }
    }
    var_21 = ((((((((var_6 ? 27663 : var_13))) ? (((max(35639, 224)))) : ((var_12 ? var_10 : var_10))))) ? ((~(max(var_14, 1)))) : (((23432 ? 215 : 14382)))));
    #pragma endscop
}
