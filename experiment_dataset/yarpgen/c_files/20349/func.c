/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20349
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
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_10 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) min((((/* implicit */short) var_2)), (var_7))))) ? ((+(((((/* implicit */_Bool) -7161376584381957864LL)) ? (-7161376584381957864LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)58338)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) % (((((arr_1 [(signed char)17]) + (2147483647))) << (((((/* implicit */int) (unsigned char)115)) - (115))))))))));
        var_11 ^= ((short) (-(((((/* implicit */_Bool) (unsigned short)7208)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_0])))));
    }
    var_12 &= (!((((-(((/* implicit */int) (unsigned short)7198)))) <= ((~(((/* implicit */int) var_7)))))));
}
