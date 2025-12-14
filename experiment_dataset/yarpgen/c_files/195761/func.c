/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195761
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
    var_11 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)41903)) < (((/* implicit */int) ((min((var_7), (var_4))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_12 += ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_0])))));
    }
    var_13 = (+(((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)41928)) ? (var_6) : (var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)41916))))))));
    var_14 = ((/* implicit */short) var_0);
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((signed char) (unsigned short)41928))), ((unsigned short)23608)));
}
