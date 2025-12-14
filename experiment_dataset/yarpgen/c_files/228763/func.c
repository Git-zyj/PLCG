/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228763
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = (-(arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_18 = ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : ((+(var_1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_19 *= var_15;
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [0ULL])) && (((/* implicit */_Bool) arr_6 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2194160614U)))))));
        arr_7 [2LL] = ((/* implicit */short) arr_1 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)17] [i_1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_6 [i_1])))) ? (arr_5 [i_1]) : (var_15)));
        var_21 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_10) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3694158468902388727ULL)) || ((_Bool)1)))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] = ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (9223372036854775803LL) : (var_5))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18059))) : (2100806699U))))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-54)) >= (((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
    {
        arr_16 [i_3] = (-(min((var_10), (arr_4 [i_3 - 1]))));
        var_22 = ((/* implicit */unsigned char) ((arr_10 [6LL]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_14)), (min((0ULL), (((/* implicit */unsigned long long int) 4294967295U))))));
        var_24 = ((/* implicit */unsigned long long int) ((signed char) ((var_0) | (arr_9 [i_3] [i_3]))));
        arr_17 [8] |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028792723996672ULL)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8)))))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) arr_0 [i_3])) : (arr_14 [6ULL] [i_3]))) : (((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_14 [9U] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    }
    var_25 ^= ((/* implicit */unsigned int) (~(((unsigned long long int) 2872447556U))));
    var_26 = ((/* implicit */long long int) var_4);
}
