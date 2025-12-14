/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191376
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
    var_12 = ((/* implicit */signed char) var_0);
    var_13 ^= ((/* implicit */unsigned int) (unsigned char)243);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) arr_2 [i_1]);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_4)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), ((~(((/* implicit */int) (unsigned char)244))))))) : (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((arr_2 [i_0]), (arr_3 [i_1])))))));
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_3 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((_Bool) arr_2 [(unsigned char)1])), (arr_4 [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) -874611287))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)96))))))));
    var_18 &= ((/* implicit */_Bool) ((((var_2) ? ((-(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_7)))))) + (((((/* implicit */int) max((var_7), (var_3)))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_7))))))));
}
