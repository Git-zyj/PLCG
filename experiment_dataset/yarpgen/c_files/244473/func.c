/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244473
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    var_14 = ((/* implicit */int) min((min((var_4), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (var_1))))), (((/* implicit */unsigned long long int) var_9))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (max((var_7), (var_11)))))) && (((((/* implicit */_Bool) ((signed char) 1547359621))) && (((/* implicit */_Bool) var_10))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (signed char)102));
                    arr_11 [i_0] [i_0] [i_0] = min((arr_3 [i_2]), (((unsigned char) (signed char)-7)));
                }
            } 
        } 
    } 
}
