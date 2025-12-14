/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51149
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
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((2147483644), (2147483647)))) ? (max((831798842U), (((/* implicit */unsigned int) -2147483647)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(4294967295U)))) || (((/* implicit */_Bool) var_2)))))));
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) ((min((3LL), (var_10))) < ((-(5047726248275285153LL)))))), ((-(((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_3 [i_0]);
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15907))) : (65535U)))) ? (((((/* implicit */_Bool) min((11032086228760553558ULL), (((/* implicit */unsigned long long int) 2831723676U))))) ? (((((/* implicit */int) var_15)) | (((/* implicit */int) arr_0 [8U])))) : (((((/* implicit */_Bool) -205174539)) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 3] [(unsigned char)14])) : (((/* implicit */int) (unsigned char)10)))))) : (min((((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2])), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
