/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193545
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_10 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(signed char)6]) : (-836055637)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (_Bool)1)))))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)182)) ? (12558087888982474959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) arr_4 [i_1]);
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)80)) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (6541035855525344217ULL) : (((/* implicit */unsigned long long int) 9223372036854775806LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22)))));
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_8 [i_2] [6LL] = ((/* implicit */unsigned long long int) arr_6 [9ULL] [i_2]);
        var_14 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))) / (-1330626812988627491LL))))) << (((((((((/* implicit */_Bool) ((unsigned short) 12558087888982474933ULL))) ? (((/* implicit */int) (short)-6144)) : (((/* implicit */int) (short)504)))) + (6187))) - (12)))));
    }
    var_15 = ((((/* implicit */_Bool) ((-1413590911) | (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50))) : (((((/* implicit */_Bool) (unsigned char)182)) ? (-3063678251331437983LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)32758)))))));
}
