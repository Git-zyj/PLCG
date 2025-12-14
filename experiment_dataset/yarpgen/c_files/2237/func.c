/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2237
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((max((1276381829259953547ULL), (((/* implicit */unsigned long long int) (signed char)75)))) ^ (((/* implicit */unsigned long long int) ((int) ((int) arr_3 [i_0] [i_0]))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1276381829259953570ULL)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3540377866U)) <= (1276381829259953547ULL))))));
        arr_5 [i_0] = ((/* implicit */_Bool) min(((short)32757), (((/* implicit */short) ((((/* implicit */_Bool) (short)-32749)) && (((/* implicit */_Bool) (-(1276381829259953571ULL)))))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) (-(((arr_7 [i_1] [i_1]) / (((/* implicit */long long int) arr_1 [i_1]))))));
        arr_10 [i_1] = ((/* implicit */_Bool) min((((((var_11) || (((/* implicit */_Bool) arr_1 [i_1])))) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) / (arr_2 [i_1] [i_1]))))));
        var_16 = ((/* implicit */int) max((var_16), (((int) var_8))));
        arr_11 [i_1] = ((/* implicit */short) (+(min((arr_7 [10LL] [i_1]), (arr_7 [i_1] [i_1])))));
        var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((6U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32757)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) : (1276381829259953571ULL))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1891)) + (2147483647))) >> (((((((/* implicit */_Bool) 50331648)) ? (((/* implicit */int) (signed char)-36)) : (arr_2 [i_1] [i_1]))) + (45))))))));
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)253)), (4294967295U)))) : (((long long int) (unsigned short)49129)))))))));
}
