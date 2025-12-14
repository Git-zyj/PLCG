/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53600
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    var_18 = var_7;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 57344ULL)) ? (16041661691717938331ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))))));
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-38))));
                    arr_6 [i_0] = ((/* implicit */signed char) (-(((arr_5 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
                }
            } 
        } 
    } 
}
