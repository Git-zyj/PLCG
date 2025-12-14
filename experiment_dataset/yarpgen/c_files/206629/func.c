/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206629
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-85))))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)-85)) : ((-(2147483647))))))));
                var_18 = ((((((/* implicit */_Bool) 1320079781)) ? (((/* implicit */int) (unsigned char)89)) : (2147483647))) / (((/* implicit */int) (signed char)-85)));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((int) min((arr_2 [i_0]), ((signed char)-117)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_11)))) : (((((/* implicit */_Bool) var_3)) ? (-2147483640) : (((/* implicit */int) (signed char)127))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)166)))))) ? (((((/* implicit */int) max(((unsigned char)27), ((unsigned char)0)))) >> (((((/* implicit */int) (unsigned char)254)) - (237))))) : (((/* implicit */int) (unsigned char)96))));
    var_22 = ((/* implicit */unsigned char) var_5);
}
