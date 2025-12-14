/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241435
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
    var_11 ^= ((/* implicit */_Bool) var_9);
    var_12 = ((/* implicit */unsigned short) (_Bool)0);
    var_13 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))) == (min((((/* implicit */long long int) var_5)), (var_10))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_14 |= min((((((/* implicit */_Bool) 11543869735048798064ULL)) ? (min((arr_0 [i_0] [i_0]), (11543869735048798085ULL))) : ((~(6902874338660753550ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (_Bool)1))))));
        var_15 -= max((((/* implicit */int) var_0)), (var_9));
        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (0)));
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_5 [(unsigned char)12]))));
        var_18 = ((/* implicit */int) min((var_18), (((((((/* implicit */int) arr_5 [(unsigned char)4])) * (((/* implicit */int) arr_2 [i_1])))) << (((((((/* implicit */int) var_5)) << (((arr_0 [(unsigned char)5] [i_1]) - (10501896179369127873ULL))))) - (27262975)))))));
        var_19 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)28733));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6929351198857179321ULL)) && (((/* implicit */_Bool) 6902874338660753551ULL))));
}
