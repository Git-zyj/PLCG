/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31960
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [13] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_1 [(signed char)15] [(short)10])))) ? (((/* implicit */int) (unsigned short)22067)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)43492)) == (((/* implicit */int) (unsigned short)22088)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_11 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_5 [i_1])) == (((/* implicit */int) (unsigned char)142))))));
        var_12 = ((/* implicit */int) (unsigned short)22072);
        arr_8 [(short)3] [(short)3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (4095U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) < (var_4))))))) & ((-(((var_9) >> (((((/* implicit */int) arr_5 [i_1])) - (135)))))))));
    }
    var_14 = ((((var_1) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)22031)) && (((/* implicit */_Bool) 1149936104)))))) > (var_4)))));
    var_15 = min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49707))) : (var_9)))), (min((var_4), (((/* implicit */unsigned long long int) (unsigned short)22090)))))), (((/* implicit */unsigned long long int) var_0)));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) var_1))));
}
