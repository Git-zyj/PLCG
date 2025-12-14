/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40258
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (var_9)))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (var_6)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0])) ^ (((/* implicit */int) var_3))));
                var_19 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) var_9)) < (arr_6 [i_0 - 1])))) < ((+(((/* implicit */int) arr_2 [i_0 - 1]))))));
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_7)))))) & (((((((/* implicit */long long int) var_1)) | (var_4))) | (((/* implicit */long long int) ((((var_2) + (2147483647))) << (((((/* implicit */int) arr_3 [(short)16])) - (17480))))))))));
                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((var_9) <= (var_9)))), (((unsigned char) 4196660295083540187LL))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_8), (var_11))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-19025)), (-4196660295083540191LL)))))))) : ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11))))))))));
}
