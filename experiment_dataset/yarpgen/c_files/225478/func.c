/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225478
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(min((((((/* implicit */int) (unsigned char)221)) + (10))), (-4))))))));
    var_19 &= ((/* implicit */short) min((((/* implicit */unsigned int) 10)), (4294967295U)));
    var_20 *= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10)) ? (-9223372036854775799LL) : (-2139719609874446928LL)))) ? (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (_Bool)1)) : (0))) : (((/* implicit */int) (unsigned char)75)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) min(((unsigned short)4366), (((/* implicit */unsigned short) (unsigned char)123)))))) ? (min((((/* implicit */long long int) (+(1657453847)))), (((((/* implicit */_Bool) (unsigned short)55628)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (2139719609874446916LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */int) (unsigned char)123)), (1657453847))) >= (((/* implicit */int) (short)-32213))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59610)) ? (((/* implicit */int) (short)-32754)) : (1657453847)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-23678)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-520))) % (3063609411U)))));
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (unsigned char)219))));
}
