/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238049
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
    var_18 = ((/* implicit */unsigned long long int) ((739703806) / ((-(((/* implicit */int) ((unsigned char) var_12)))))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) -4327212291367726355LL)))))) || (((/* implicit */_Bool) ((unsigned int) (signed char)45)))));
    var_20 = ((/* implicit */_Bool) max((var_14), (586224515U)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) min((max((arr_0 [i_0]), (arr_0 [i_0]))), ((!(((/* implicit */_Bool) var_9)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) ((short) ((arr_1 [(short)0] [i_1]) >> (((/* implicit */int) arr_0 [i_1])))));
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_5)))));
            var_23 += ((/* implicit */_Bool) (-(1LL)));
        }
        var_24 *= ((/* implicit */unsigned short) (signed char)111);
        arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
    }
}
