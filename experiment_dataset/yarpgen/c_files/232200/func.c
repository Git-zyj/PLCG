/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232200
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_5)))))) < (((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)14)))) * ((~(((/* implicit */int) (_Bool)1))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned int) ((((var_11) && (((/* implicit */_Bool) (signed char)-15)))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26))) < (var_8))))))) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (signed char)-12))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)98))) || (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) < (max((((/* implicit */long long int) (signed char)-65)), (8589934591LL)))))));
    }
}
