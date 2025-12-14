/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38084
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
    var_10 = ((/* implicit */_Bool) ((-9223372036854775792LL) & (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-117)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) (-(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)0))))));
        var_12 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)21141)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (unsigned char)190);
        var_14 ^= ((/* implicit */short) ((unsigned char) var_6));
        arr_5 [i_1] = ((/* implicit */long long int) ((signed char) (short)13122));
        arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((-3806968902725932597LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-21142))))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3396)) ? (((/* implicit */int) (unsigned short)15652)) : (((/* implicit */int) (unsigned char)190)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_2))))));
    }
    var_16 = ((/* implicit */unsigned char) var_6);
}
