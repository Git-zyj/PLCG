/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45918
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    var_17 &= ((/* implicit */unsigned char) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), ((~(((((/* implicit */_Bool) 1073741823)) ? (-1073741823) : (23)))))));
    var_19 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) -1073741823)) || (((/* implicit */_Bool) (unsigned char)80)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 13188960080837564123ULL)))))) : (((13188960080837564122ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))))), (((/* implicit */unsigned long long int) ((16646144) - (((/* implicit */int) (unsigned char)98)))))));
}
