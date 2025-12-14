/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21565
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
    var_19 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) : (min((var_1), (((/* implicit */unsigned long long int) var_16)))))) & (((/* implicit */unsigned long long int) min((var_7), (min((var_2), (((/* implicit */int) (_Bool)1)))))))));
    var_20 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) & (var_1)))) ? (((/* implicit */int) min((var_3), (var_15)))) : (var_10))));
    var_21 = ((/* implicit */signed char) ((((int) var_7)) >= ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */int) var_17)) % (((/* implicit */int) var_11)))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_22 -= ((((/* implicit */int) ((max((-1659470913), (-6))) == (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)4] [(unsigned short)4])) <= (((/* implicit */int) var_14)))))))) & (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (arr_0 [i_0] [i_0])))), (max((var_17), (((/* implicit */unsigned short) arr_1 [i_0] [(unsigned short)0]))))))));
        arr_2 [(unsigned short)9] = ((/* implicit */signed char) min((var_0), (max((max((((/* implicit */int) (signed char)2)), (var_10))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) >= (arr_0 [i_0] [i_0]))))))));
    }
}
