/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54156
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
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19253)))))) ? (((/* implicit */int) ((short) var_10))) : ((~(((/* implicit */int) (unsigned short)46275))))))) ? (((((/* implicit */_Bool) min(((unsigned short)46283), ((unsigned short)19273)))) ? (10U) : (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2893135452659939281LL)) ? (var_5) : (((/* implicit */unsigned long long int) 505083152))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) max((4294967262U), (((/* implicit */unsigned int) -505083162)))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)215)) ? (min((((/* implicit */long long int) -505083174)), (((((/* implicit */_Bool) 3312199215U)) ? (8690484725320896662LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46305))))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3)))))));
                arr_6 [i_0 - 1] [i_0 - 3] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 2]))))), (arr_2 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_7))));
}
