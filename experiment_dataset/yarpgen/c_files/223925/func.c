/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223925
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) (((((~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (_Bool)1)))))) + (2147483647))) << (((((((/* implicit */_Bool) (short)27346)) ? (((((/* implicit */_Bool) arr_2 [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))) : (arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) - (4294967210U)))));
                arr_5 [i_0] = ((_Bool) ((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) arr_1 [i_0]))));
                arr_6 [i_0] [8ULL] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */int) arr_1 [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)110))))) ? (((((/* implicit */_Bool) 4686804419188000164LL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45639)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_16), (((/* implicit */long long int) (short)-2835)))), (((/* implicit */long long int) (unsigned short)13223))))) ? ((+(((/* implicit */int) ((unsigned short) var_12))))) : ((+((~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_2);
    var_19 = ((max((((/* implicit */unsigned long long int) ((signed char) (unsigned char)45))), ((~(8395814511632375821ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_5))))));
}
