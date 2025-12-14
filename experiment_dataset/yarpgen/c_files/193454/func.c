/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193454
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min(((unsigned short)52385), (((/* implicit */unsigned short) var_9))))))) > ((+(((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_5)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) -1341817492)) && (((/* implicit */_Bool) 2305825417027649536ULL))))) - (((((/* implicit */_Bool) (unsigned short)13150)) ? (4094) : (((/* implicit */int) (_Bool)1))))));
                    var_17 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (min((var_12), (var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 - 1] [(unsigned char)9])))))))));
                    var_18 = (-(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((var_14) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))))));
                }
            } 
        } 
    } 
    var_19 = (-(((/* implicit */int) ((unsigned short) ((int) var_11)))));
    var_20 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) 383785874U)))))));
}
