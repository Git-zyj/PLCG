/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46467
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_8)))) : ((-(((/* implicit */int) var_5)))))) != (((((/* implicit */_Bool) ((signed char) 58626558785223929ULL))) ? (((((/* implicit */int) var_7)) / (var_10))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))))))));
    var_13 = ((/* implicit */short) var_4);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 2811753798U))) ? (var_1) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 1483213498U)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2113929216U))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)27618)))), (((((/* implicit */int) var_8)) / (((/* implicit */int) var_7))))))))))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((2811753795U) - (2811753790U)))) ? (((/* implicit */unsigned long long int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (max((((/* implicit */unsigned long long int) var_6)), (18446744073709551595ULL)))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!((!(arr_1 [i_0]))))))));
        var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)3518), ((short)26999))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((var_9) ? (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-18259))))) : (((/* implicit */int) (short)26999)))), (((/* implicit */int) ((arr_5 [i_1]) <= (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) (signed char)104)) ? (((((/* implicit */unsigned long long int) var_1)) + (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4194048U))));
        arr_6 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_1] [i_1])), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 2811753790U)))))) : (min((-5930986956274597301LL), (((/* implicit */long long int) 2811753790U))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2811753798U)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_0)))))));
    }
}
