/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191548
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
    var_19 ^= ((/* implicit */unsigned int) (+((-(((/* implicit */int) max((var_0), (var_1))))))));
    var_20 |= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_17)))) || ((!(((/* implicit */_Bool) var_1))))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (var_6)))) ? (min((-4320941891807392676LL), (((/* implicit */long long int) (short)-31043)))) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_18)) : (var_17)))))));
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) min((min((((/* implicit */unsigned short) var_0)), (var_6))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13)))))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 512U)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)244))))))), ((+(min((((/* implicit */unsigned int) var_3)), (var_18)))))));
                var_23 = (+(min((((/* implicit */unsigned int) var_0)), (max((((/* implicit */unsigned int) var_1)), (var_18))))));
                arr_9 [(short)16] [12LL] = ((/* implicit */unsigned long long int) max((((max((((/* implicit */long long int) var_3)), (var_7))) | (((/* implicit */long long int) ((((/* implicit */int) (short)1544)) >> (((((/* implicit */int) (unsigned char)70)) - (39)))))))), (min((((/* implicit */long long int) var_1)), (((((/* implicit */long long int) var_18)) | (var_11)))))));
                var_24 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_15))))));
            }
        } 
    } 
}
