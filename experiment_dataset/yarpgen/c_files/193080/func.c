/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193080
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((var_6) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)239)))) : (((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_5)) - (41057))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_0 [i_0]);
                    var_21 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235))) : (var_11)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))), (var_7)));
    var_23 = ((/* implicit */short) var_6);
}
