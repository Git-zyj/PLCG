/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191858
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)112))))) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) var_12)))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (var_9)));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)134)) / (((/* implicit */int) (unsigned char)21))));
                arr_7 [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)59261)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (unsigned char)14)))) >> (((((((/* implicit */int) (unsigned short)50106)) >> (((((/* implicit */int) (unsigned char)92)) - (91))))) - (25028)))))) ? (max(((~(((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14185))))))) : (((/* implicit */int) (unsigned short)59278))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)147)) / (((/* implicit */int) (unsigned char)105)))) >> (((/* implicit */int) min(((unsigned char)134), (var_13)))))) == (((/* implicit */int) var_15))));
}
