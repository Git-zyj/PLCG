/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227972
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((5U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : ((((_Bool)0) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    var_20 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)11035))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24594))) != (var_13)))), (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) min((4294967291U), (min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */int) ((((/* implicit */_Bool) -6763139607167991431LL)) && (((/* implicit */_Bool) arr_3 [i_0]))))) << (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned short)11035)))))) == (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) (short)-12921)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32739))) > (var_7)))))) : (((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) (unsigned short)3598)) ^ (((/* implicit */int) (short)0))))))));
}
