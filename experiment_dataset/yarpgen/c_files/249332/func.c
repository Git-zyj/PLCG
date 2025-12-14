/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249332
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_0))) * (((((/* implicit */_Bool) var_3)) ? (2524435295U) : (var_8)))))) ? (((((/* implicit */_Bool) (+(var_4)))) ? (min((3364817699U), (((/* implicit */unsigned int) (short)8085)))) : (((((/* implicit */_Bool) (short)-32756)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))), (var_6)))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_5))))));
                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))))) ? (min((((/* implicit */long long int) min((3U), (((/* implicit */unsigned int) (unsigned char)26))))), (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))))));
            }
        } 
    } 
}
