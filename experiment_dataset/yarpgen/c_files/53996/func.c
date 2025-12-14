/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53996
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_4)))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (unsigned short)26845)) : (0)))), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (var_3) : (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)40)))))));
                    var_16 = ((/* implicit */int) max((var_16), ((~((~(((/* implicit */int) arr_3 [i_1]))))))));
                }
            } 
        } 
    } 
}
