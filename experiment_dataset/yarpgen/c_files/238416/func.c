/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238416
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned int) var_2)), (max((((/* implicit */unsigned int) var_10)), (24U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) 24U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : ((~(2U)))));
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (4294967259U)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((signed char) var_5));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
        var_17 = ((/* implicit */signed char) var_1);
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) min((var_8), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_1])))));
        var_19 = ((/* implicit */signed char) (-((+(((unsigned int) 2017612633061982208ULL))))));
    }
    for (signed char i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        arr_11 [7ULL] |= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)))), (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        arr_12 [4ULL] = ((/* implicit */signed char) (((-(0ULL))) * (((/* implicit */unsigned long long int) (+(((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))))))));
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3] [0LL]))) < (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) arr_0 [i_3])), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)189))))) & (max((((/* implicit */unsigned int) var_5)), (var_7))))) & (var_9)));
    }
}
