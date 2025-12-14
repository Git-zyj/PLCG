/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38233
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)250), ((unsigned char)250)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) % (18446744073709551595ULL)))));
        var_19 = (_Bool)1;
    }
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (unsigned char)5)))));
        var_20 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) 11150077755017341459ULL))) ? (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((11150077755017341459ULL) - (11150077755017341455ULL)))))))), (((/* implicit */unsigned long long int) ((((unsigned long long int) var_0)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1349435096056698291LL)) && (((/* implicit */_Bool) 15028825447842741134ULL)))))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11785974344200041419ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((long long int) var_2))))))));
    var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (6660769729509510203ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (min((((/* implicit */unsigned long long int) var_18)), (3417918625866810477ULL)))))) : (((/* implicit */int) ((((((/* implicit */int) var_16)) * (((/* implicit */int) var_6)))) <= (((/* implicit */int) (unsigned char)83)))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)44750)) ? (((/* implicit */int) (unsigned short)4610)) : (((/* implicit */int) (unsigned short)44750))))))));
}
