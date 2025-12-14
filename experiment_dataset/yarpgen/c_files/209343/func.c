/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209343
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
    var_17 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_5)) + (142)))))), (((((/* implicit */_Bool) (unsigned short)64958)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_4))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) & (max((((/* implicit */unsigned long long int) ((short) var_3))), (min((var_6), (((/* implicit */unsigned long long int) var_0)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((6170261513537638365ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (arr_0 [i_0])));
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) (unsigned char)0))), (var_3)))) ? (min((max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)24] [5])), (var_6))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) var_12)))))));
                    var_21 = ((/* implicit */unsigned char) arr_2 [i_0] [i_2]);
                }
            } 
        } 
    } 
}
