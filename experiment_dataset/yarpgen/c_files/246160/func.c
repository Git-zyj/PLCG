/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246160
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
    var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1023))))), (min((var_6), (var_5))))))));
    var_16 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) ((unsigned long long int) 0U))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [(signed char)21])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)2])) && (((/* implicit */_Bool) (unsigned short)8192)))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (var_14))));
        var_18 *= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) >= (((/* implicit */int) ((signed char) 4ULL)))));
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) (+(min((18446744073709551590ULL), (((/* implicit */unsigned long long int) (short)8031)))))))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_21 -= ((/* implicit */int) max((((((/* implicit */int) min((((/* implicit */unsigned short) (short)1871)), (var_12)))) > (((/* implicit */int) var_10)))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1871)) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) var_13))))));
}
