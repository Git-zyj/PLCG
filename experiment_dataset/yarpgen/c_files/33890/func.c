/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33890
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
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)43)))), (((/* implicit */int) var_10)))))));
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_10))));
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : (9626540530235752085ULL))))))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)100)) ? (min((var_15), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))))))));
        var_23 = ((/* implicit */unsigned char) arr_3 [i_1]);
    }
}
