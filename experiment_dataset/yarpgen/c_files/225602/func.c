/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225602
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
    var_15 = ((/* implicit */short) var_12);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-23625)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)21))))) : (max((var_9), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-5)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned short)1] = ((/* implicit */short) (+(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) var_6))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)511)) & (((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(2264915702825438723ULL)))));
        arr_3 [(short)16] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) var_6)) : (arr_1 [i_0 - 3])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] |= ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((arr_1 [i_1]) ^ (((/* implicit */int) arr_4 [i_1]))))))), (max((min((((/* implicit */unsigned int) (short)3809)), (var_12))), (((/* implicit */unsigned int) var_2))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (~(arr_1 [i_1])));
    }
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (764277628)))) : (((unsigned int) (signed char)-1))))) == (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))), (((unsigned long long int) (unsigned char)171))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (short)-21719)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_0))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) ^ (var_11))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)185)), (4194300)))))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        var_21 ^= ((var_11) / (((var_9) + (var_9))));
        var_22 = var_2;
    }
}
