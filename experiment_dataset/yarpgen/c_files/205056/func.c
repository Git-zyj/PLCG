/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205056
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) ? (arr_1 [8LL] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))) == ((+(((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (var_2) : (((/* implicit */unsigned int) var_11))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((arr_3 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_1 + 1] [0]) - (3707016922U))) : (((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])))))));
                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) min(((_Bool)1), (var_10)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(arr_1 [i_1 + 1] [i_1 + 1])))) : (((((unsigned long long int) (_Bool)1)) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [15LL])))) - (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [12U])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) - (min((var_0), (((/* implicit */unsigned int) var_15))))))));
            }
        } 
    } 
    var_20 ^= ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_1)))) >> ((((~(-6876686687577420279LL))) - (6876686687577420274LL))))) ^ (((((((/* implicit */int) (unsigned char)195)) >> (((2147483647) - (2147483635))))) << (((/* implicit */int) (unsigned char)3)))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((var_9), (((/* implicit */unsigned long long int) -2147483647)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */int) min((var_15), (((/* implicit */short) var_3))))), ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)8))));
}
