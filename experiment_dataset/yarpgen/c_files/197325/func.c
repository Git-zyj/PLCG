/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197325
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
    var_16 &= min((((/* implicit */unsigned short) ((var_11) >= ((-(var_11)))))), (((unsigned short) var_14)));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (short)-4345)) != (((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047LL)) ? (3793237571902168179LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))))))));
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 = ((/* implicit */unsigned char) var_9);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_1))))) ? ((((((~(((/* implicit */int) var_14)))) + (2147483647))) >> (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) ((unsigned short) ((var_10) << (((2047LL) - (2047LL)))))))));
}
