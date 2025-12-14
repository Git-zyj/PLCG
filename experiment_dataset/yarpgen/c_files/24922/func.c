/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24922
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_12);
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4217863384U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65137))))) : (((((/* implicit */_Bool) (unsigned short)55876)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1740830841U)))));
    }
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_16 *= ((/* implicit */signed char) ((((/* implicit */int) min((var_0), (min(((unsigned short)23410), (((/* implicit */unsigned short) (_Bool)1))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9)))))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4611686018427387904LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-122))));
        var_17 ^= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18621))) | (((((/* implicit */_Bool) var_6)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) >> (((((/* implicit */int) var_2)) - (170)))));
    }
}
