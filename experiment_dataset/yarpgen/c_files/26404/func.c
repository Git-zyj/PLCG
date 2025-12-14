/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26404
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
    var_16 ^= ((/* implicit */long long int) var_14);
    var_17 = ((/* implicit */long long int) var_9);
    var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483641)) ? (((/* implicit */long long int) 1028993593)) : (9007199254740991LL)))) ? (1633249082U) : (((((/* implicit */_Bool) (signed char)127)) ? (2661718215U) : (1633249062U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) (unsigned short)33911)) ? (8417964323407284429LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2355931610698798615LL)) ? (((/* implicit */int) var_15)) : (var_8)))) ? (((/* implicit */int) ((signed char) -6691129776114556054LL))) : (((((/* implicit */int) (unsigned short)33911)) | (((/* implicit */int) (unsigned char)95))))))), (((long long int) max((((/* implicit */long long int) arr_0 [i_0])), (-8877352891524841595LL))))));
                var_19 = ((long long int) ((((/* implicit */_Bool) 2355931610698798615LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) var_4)))))) : (min((((/* implicit */unsigned int) arr_3 [21LL])), (arr_2 [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775793LL)) ? ((-(((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
