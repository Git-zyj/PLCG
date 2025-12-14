/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31711
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
    var_11 = ((/* implicit */unsigned int) (~(max((((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-6202829995130607703LL))), (var_9)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (~((+(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-40))), (arr_0 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8216840891501813645LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (8216840891501813642LL) : (((/* implicit */long long int) 3704781712U))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8402))) | (arr_0 [6ULL])))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((17913102918010951831ULL), (((/* implicit */unsigned long long int) (unsigned char)112))))) ? (-1LL) : (((long long int) (signed char)-21))));
        var_14 = ((/* implicit */_Bool) (short)8421);
        arr_6 [i_1] = ((/* implicit */signed char) var_5);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) (signed char)45))))))))));
    }
}
