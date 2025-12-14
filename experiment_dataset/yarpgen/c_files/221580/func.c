/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221580
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
    var_12 = min((((/* implicit */long long int) ((((long long int) var_8)) != (((/* implicit */long long int) (((_Bool)1) ? (140696776) : (((/* implicit */int) (_Bool)1)))))))), (max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7692)))))), (max((((/* implicit */long long int) var_5)), (var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */unsigned short) var_9))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) || (((/* implicit */_Bool) -304771972))))), ((+(var_3)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((int) max((((/* implicit */unsigned int) var_5)), (var_3)))) << (((((/* implicit */int) ((unsigned short) ((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) - (584))))))));
        var_15 = ((/* implicit */long long int) var_3);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((_Bool) arr_0 [i_1]));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (-8817565962966959765LL)));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) var_11)), (arr_9 [i_2])))));
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((_Bool) max((((/* implicit */signed char) var_7)), (var_9))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_0) - (6328967343306881598LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (signed char)122)))))) : (min((var_3), (((/* implicit */unsigned int) var_9))))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) var_8);
    }
}
