/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18962
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
    var_14 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))) / (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6346))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned short)18270)) ? (var_9) : (var_3)))))));
    var_15 = -183700239;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = var_0;
                    var_17 = ((/* implicit */unsigned short) min((var_17), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1294602890))))), (arr_4 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = max((((/* implicit */int) var_13)), (max((((((/* implicit */int) (unsigned short)47266)) & (((/* implicit */int) (unsigned short)50282)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
}
