/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194445
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
    var_17 = min((((unsigned int) max(((unsigned char)7), (var_15)))), (((/* implicit */unsigned int) (_Bool)1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (9815475306900727782ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))))));
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)243)) * (((/* implicit */int) var_12))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)248)) <= (((/* implicit */int) (unsigned char)4)))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19122)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)8320)), (var_16)))) ? (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((17396804689767947881ULL) - (17396804689767947878ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((18446744073709551613ULL) == (((/* implicit */unsigned long long int) 2603406017U))));
    }
    var_22 += ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_15)))) ? (min((16184858046605411672ULL), (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) >= (7070242449494857452ULL))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
