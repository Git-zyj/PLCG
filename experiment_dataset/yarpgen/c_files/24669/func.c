/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24669
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)202)) ? (0U) : (((/* implicit */unsigned int) (-2147483647 - 1))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(var_10)));
        arr_4 [i_0] = ((/* implicit */int) ((signed char) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_12 &= ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)40)) || (((/* implicit */_Bool) (unsigned short)40576))))) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-28)), (4294967273U)))) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))) : ((+(((/* implicit */int) (unsigned char)69))))));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_9 [i_2] [(unsigned short)14] |= ((/* implicit */unsigned char) 350950614681305358ULL);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) ((long long int) 0))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)216)))) : ((-(-1792410230))))) : (((/* implicit */int) ((short) min((0U), (((/* implicit */unsigned int) var_6)))))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3))))) >= (((unsigned long long int) 29ULL))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            arr_18 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551614ULL)))));
            var_16 |= ((/* implicit */int) var_5);
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (0ULL)));
            var_18 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1513779472956144485LL))));
        }
    }
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3))))) | (var_0)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))) : (13U))) << (((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-12))))))) : (8ULL)));
    var_20 = ((/* implicit */int) ((4278432340450316019LL) == (9223372036854775800LL)));
}
