/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5168
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_13), (var_12))))))) ? (((/* implicit */int) var_16)) : (((var_12) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned short)7802)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)16711))))))));
    var_19 &= ((/* implicit */short) (~(((/* implicit */int) ((short) max((var_6), (((/* implicit */unsigned long long int) var_2))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) ((_Bool) (-2147483647 - 1))))));
    var_21 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) 1198790600)), (9223372036854775807LL)));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-32766)), (arr_0 [i_0])));
        var_23 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)110)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32766))))) : (((unsigned long long int) arr_0 [i_0]))));
        var_24 = ((unsigned long long int) max((var_3), (((/* implicit */unsigned short) var_13))));
        arr_3 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (((long long int) arr_1 [i_1]))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [6LL])) ? (((((/* implicit */_Bool) arr_4 [i_1] [0LL])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (arr_6 [i_1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_16))) && (((/* implicit */_Bool) (+(arr_1 [(unsigned char)8])))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_6 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = arr_10 [i_2];
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-61)) + (((/* implicit */int) var_9))))) ? (arr_11 [i_2] [i_2 - 2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_3])))))));
            var_27 = ((/* implicit */unsigned char) ((arr_13 [i_2 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        }
    }
}
