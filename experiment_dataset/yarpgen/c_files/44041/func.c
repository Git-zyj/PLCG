/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44041
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
    var_12 = ((/* implicit */int) (unsigned short)372);
    var_13 = (signed char)127;
    var_14 ^= ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-32))));
        var_15 = (signed char)-32;
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (signed char)32))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) 10308506910480344447ULL);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10308506910480344463ULL)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) (unsigned short)65164))))) ? (((/* implicit */unsigned long long int) 167213956)) : (8138237163229207189ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)21))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)382)))))))));
    }
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)32)), (var_5)));
}
