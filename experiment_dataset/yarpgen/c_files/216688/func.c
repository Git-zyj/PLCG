/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216688
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((long long int) var_15)) : (((long long int) (unsigned short)65534))));
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_9))))))) : (min((((/* implicit */int) (unsigned short)4)), (((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_22 += ((/* implicit */unsigned short) (~(5746829669175346170LL)));
        var_23 *= ((/* implicit */long long int) (_Bool)1);
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((arr_0 [i_0]) << (((var_18) - (1879624516U))))) << (((/* implicit */int) ((_Bool) arr_1 [i_0])))))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (max((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_0 [i_0]));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-((+(((/* implicit */int) (signed char)110)))))))));
    }
}
