/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30450
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 3255113141U)) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (2147483647)))) : (3421731723U))), (1039854144U)));
    var_15 = min((((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-462839129)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((var_2) ? (var_11) : (94601176U))))), (((unsigned int) var_7)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    var_16 = ((/* implicit */int) ((_Bool) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((int) arr_3 [i_0] [i_0] [i_0])) : (((arr_7 [i_0] [i_1] [i_2]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
                }
            } 
        } 
    } 
}
