/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219092
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_8))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((unsigned char) max((((/* implicit */unsigned int) var_8)), (3727027217U))))));
        var_12 = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : ((~(arr_2 [i_0]))))), (((unsigned int) min((var_9), ((unsigned char)0)))));
        var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (unsigned char)0))))))))));
    }
    var_14 ^= ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9))))), (((unsigned int) (unsigned char)0)))));
    var_15 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned char)20)), (1969221197U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_3)))))))) ? (((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) var_1)))) ? (((unsigned int) (unsigned char)83)) : (((((/* implicit */_Bool) (unsigned char)15)) ? (3069042492U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (2897816967U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (2325746084U) : (4192256U)))))))));
    var_16 = ((/* implicit */unsigned char) (~(((unsigned int) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))))))));
}
