/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195207
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
    var_20 = ((/* implicit */unsigned char) (((~((+(((/* implicit */int) var_12)))))) - (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) (unsigned char)16)))))));
    var_21 = var_5;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_22 = ((/* implicit */signed char) min(((-(((/* implicit */int) min((var_12), ((unsigned char)63)))))), ((+(((/* implicit */int) arr_2 [i_0]))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_6))));
        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_4))) || (((/* implicit */_Bool) arr_2 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) arr_2 [i_1])))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (var_9)));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) (-(min((((((/* implicit */int) (unsigned char)235)) | (((/* implicit */int) (unsigned char)70)))), (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13))))))));
        var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (unsigned char)164))))));
    }
    var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)168)) ? ((+(((/* implicit */int) (unsigned char)228)))) : (((/* implicit */int) ((signed char) (unsigned char)73)))))));
    var_30 = ((/* implicit */unsigned char) (signed char)-91);
}
