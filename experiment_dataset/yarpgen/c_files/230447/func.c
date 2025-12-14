/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230447
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
    var_20 *= ((/* implicit */signed char) max((max((((/* implicit */int) var_13)), ((+(((/* implicit */int) var_1)))))), (((/* implicit */int) var_0))));
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((unsigned long long int) var_18)) * (((/* implicit */unsigned long long int) var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)96)) : (((/* implicit */int) var_3)))) << ((-(18446744073709551615ULL)))))) ? (((((6122230065825532289ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) * (4294967284U)))))) : (arr_4 [i_0])));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
            }
        } 
    } 
}
