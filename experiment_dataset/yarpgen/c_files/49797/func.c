/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49797
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_8);
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~(arr_0 [14LL]))))));
    }
    var_17 = ((/* implicit */unsigned short) max((min((((3220805593263993853ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) var_12))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1831131572)) : (10338823759872766520ULL)))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 3836289866U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)45))))))) >> (((min((var_6), (((unsigned long long int) var_0)))) - (57449ULL)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))) <= (((/* implicit */int) (unsigned char)24)))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_2 [i_2 - 2] [i_1])) % (((/* implicit */int) var_9)))) + (2147483647))) >> (((((/* implicit */int) ((short) var_10))) + (1770)))))) : (((arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1486804630)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) > (((/* implicit */int) (unsigned char)253))))) ^ (((((-504067693) + (2147483647))) >> (((((/* implicit */int) (unsigned char)232)) - (230))))))) : (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) 2100050496)), (8589934590ULL))) <= (((/* implicit */unsigned long long int) ((int) var_12))))))));
}
