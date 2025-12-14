/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38912
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned char)0)), (var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (var_9)))))))) ? (((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) + (2147483647))) >> (((int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_9))))));
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((4294967289U) - (4294967280U)))));
    var_17 = ((/* implicit */int) (-(-6844087834673068473LL)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((max((min((var_13), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) var_7)))), (((((var_5) ? (4294967295U) : (((/* implicit */unsigned int) 1383005628)))) << (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_1)))))))));
        arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_13) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2])))))), (((arr_1 [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (var_13)))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6272)) ? (-5LL) : (2638286929600523536LL)));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_0)))) / (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) var_13))))))) || (((/* implicit */_Bool) ((long long int) arr_7 [i_1])))));
        arr_8 [i_1] = ((((/* implicit */_Bool) (-(arr_7 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))))) : (min((min((8026913048152562721LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) arr_2 [i_1] [i_1])))));
        var_21 = ((/* implicit */int) (-(((arr_6 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
    }
}
