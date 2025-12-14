/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41444
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_0]);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_10))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) <= (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)5535)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)5535), (((/* implicit */short) var_1)))))))) : (var_17)));
    }
    var_20 = ((/* implicit */unsigned char) ((((var_9) != (((/* implicit */long long int) (+(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max(((signed char)0), (var_12)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((var_17) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5535)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))))));
    var_21 = var_5;
}
