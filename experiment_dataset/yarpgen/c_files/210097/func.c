/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210097
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
    var_10 = ((/* implicit */long long int) var_9);
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((((-5353040164071916626LL) + (9223372036854775807LL))) << (((((-342455172) + (342455217))) - (44)))))))) : ((~((~(4653631757055202476ULL)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) 5234740429619809969ULL)) || (((/* implicit */_Bool) -779959721))))))))));
        arr_2 [i_0] = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (arr_1 [i_0]))) + ((-(((/* implicit */int) (short)9157)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)3)))))));
        var_14 = ((/* implicit */short) 1195753555);
        arr_7 [i_1] [i_1] = (-(((/* implicit */int) arr_6 [i_1])));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) : (((((/* implicit */unsigned long long int) 3041068086346188742LL)) - (16722839834955841626ULL)))))) ? ((-(var_4))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_10 [i_2]))))) ? ((-(((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_2])) : (1860572319)))))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_7) & (arr_1 [i_2])))) < (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (arr_9 [i_2])))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((2358384727387176088LL) >= (min((-8430122701097679774LL), (((/* implicit */long long int) (unsigned char)11))))));
    }
    var_17 += max((((/* implicit */long long int) ((unsigned char) 16ULL))), (max((((long long int) var_2)), (((/* implicit */long long int) 3050853600U)))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
}
