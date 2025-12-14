/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244759
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
    var_10 = ((/* implicit */_Bool) (signed char)98);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_0)))) ? (((/* implicit */unsigned long long int) 9223372036854775800LL)) : (min((((/* implicit */unsigned long long int) var_4)), (max((var_1), (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65521)) ? ((~((+(var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), ((~(((/* implicit */int) var_3))))))) ? ((+(((((/* implicit */_Bool) (unsigned char)17)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (max((4236702730U), (((/* implicit */unsigned int) var_8))))));
}
