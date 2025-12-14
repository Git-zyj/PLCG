/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231368
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
    var_14 *= ((/* implicit */_Bool) 2031616U);
    var_15 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_1 [(unsigned short)18])))) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))))));
        var_17 = ((/* implicit */unsigned short) (((~(2147483647))) ^ (((((/* implicit */int) max((var_7), (var_7)))) | ((~(((/* implicit */int) (_Bool)0))))))));
        arr_3 [i_0] = ((/* implicit */short) max(((!(((/* implicit */_Bool) -1LL)))), (((((/* implicit */_Bool) arr_1 [i_0])) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10))))))));
        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (var_1))) >= (((/* implicit */long long int) var_9)))))));
        var_19 = ((/* implicit */signed char) (~((-((+(var_9)))))));
    }
}
