/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226526
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(unsigned short)8] [i_0] |= (+(((/* implicit */int) ((unsigned char) arr_0 [14LL]))));
        var_11 = ((/* implicit */long long int) var_3);
        var_12 = ((/* implicit */unsigned int) -1059970238);
        var_13 = (((+(arr_0 [i_0]))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 3]))))));
    }
    for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) var_7)), (var_5)))))) ? (((((/* implicit */_Bool) -965253422)) ? (1978342453085669136ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-667277243))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -3758836048524645490LL)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned char)229))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((_Bool) max((5060128990739857207LL), (1143873398196074234LL)))))));
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)16))))), (((unsigned long long int) arr_4 [i_1 + 3]))));
    }
    var_16 = ((/* implicit */unsigned long long int) (~(((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) var_0)))) + (2147483647))) >> (((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (17144143316115961275ULL)))))));
}
