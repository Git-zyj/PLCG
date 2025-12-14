/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225719
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((arr_1 [i_0]) == (((/* implicit */long long int) arr_0 [1ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((5ULL) <= (((/* implicit */unsigned long long int) 2251799813684224LL)))))) : (((((/* implicit */long long int) arr_0 [i_0])) + (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */short) ((long long int) ((long long int) arr_0 [i_0])));
            arr_7 [i_0] [12LL] |= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [8U])) ? (((/* implicit */int) arr_4 [1LL])) : (arr_0 [(short)10])))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */long long int) arr_5 [i_0] [i_0])))))));
            arr_9 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) arr_0 [i_0])) | (arr_1 [i_0]))) : (((/* implicit */long long int) ((unsigned int) arr_0 [i_1]))));
            arr_10 [13U] [i_0] [(unsigned short)15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)3]))) != (arr_1 [i_0]))))));
        }
        for (int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) ((unsigned int) (unsigned short)65535))))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) arr_13 [i_2] [i_0] [(unsigned short)0]);
            var_21 = ((((/* implicit */_Bool) (short)13640)) ? ((-(1081903499298556939LL))) : ((-(-2251799813684224LL))));
        }
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            var_22 *= ((/* implicit */signed char) 1072693248U);
            var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) * (18446744073709551614ULL)))) ? (((/* implicit */unsigned long long int) ((int) 1072693248U))) : ((-(arr_12 [i_3] [i_3] [(short)11])))));
        }
        arr_17 [i_0] [2ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(2199023255551LL)))) != (((((/* implicit */_Bool) 1073741568)) ? (7294316008439613131ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0]))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [4U]))) != (4294967295U))))) ^ (7294316008439613119ULL))))));
    }
    var_25 = ((/* implicit */unsigned char) var_3);
    var_26 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((int) var_13))) % (var_14))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (688508824113499524ULL) : (2518203826125536834ULL)))) ? (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) << (((3222274047U) - (3222274035U)))))))));
}
