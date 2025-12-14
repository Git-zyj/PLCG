/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245263
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 ^= arr_3 [i_0];
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (signed char)112))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)20853)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_7)) : (var_12)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2])) | (var_8)));
            var_16 ^= ((/* implicit */unsigned long long int) ((short) (+(var_12))));
            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ? (arr_7 [i_2]) : (arr_7 [i_1])))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_7 [i_1]))) : (arr_4 [i_1] [i_2])));
        }
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) ^ ((-(arr_7 [i_1])))));
    }
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : ((+((~(2856422669U)))))));
}
