/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207439
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (((10107093762186536506ULL) << (((803351280U) - (803351226U))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)23)) > (((/* implicit */int) (_Bool)1))))) >> (((/* implicit */int) (unsigned char)31))));
        var_19 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (short)27106)) + (((/* implicit */int) (unsigned short)1458))))), (0LL))));
        var_20 += ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) (unsigned char)28))))));
        var_21 -= ((/* implicit */signed char) var_9);
        var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (12691))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) max((((/* implicit */short) var_10)), (var_14)))))))));
    }
}
