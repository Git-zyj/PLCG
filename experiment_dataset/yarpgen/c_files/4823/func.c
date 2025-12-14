/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4823
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
    var_12 = ((/* implicit */unsigned int) ((var_2) | (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))), ((-(((/* implicit */int) var_10)))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) (unsigned char)96)), (var_7))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 2183134446U)), (var_4)))) ? (var_4) : (((/* implicit */long long int) var_5))))));
    var_14 = (unsigned char)28;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */unsigned int) (+((+(((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_16 += ((/* implicit */unsigned char) max((max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)162)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217727)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27628))) : (9150212860311789131LL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_17 &= ((/* implicit */unsigned short) ((max((((2548086521668441133ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */unsigned long long int) 8U)), (14001560631066987095ULL))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_9))))), ((~(((/* implicit */int) var_11)))))))));
        var_18 += ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
    }
}
