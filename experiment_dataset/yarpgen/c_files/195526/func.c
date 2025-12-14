/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195526
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
    var_20 += ((/* implicit */unsigned long long int) ((((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_1)))) + (2147483647))) >> (((((/* implicit */int) var_9)) + (42)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_14);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((+(max((arr_0 [1U]), (arr_0 [i_0]))))) : (((/* implicit */int) var_0))));
        arr_3 [i_0] = ((((/* implicit */_Bool) (short)-9955)) ? (min((arr_1 [(unsigned char)8]), ((-(arr_1 [11U]))))) : (((((/* implicit */int) var_11)) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)3840)) : (arr_1 [(short)0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [11U] [i_1]))) : (max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (var_5)))))) ? (((/* implicit */int) var_11)) : (min((((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (((/* implicit */int) arr_5 [3U])) : (((/* implicit */int) (short)4096)))), (arr_0 [i_1 - 1])))));
        var_23 = ((/* implicit */int) var_6);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_24 += ((/* implicit */_Bool) ((unsigned int) arr_7 [i_3]));
            arr_10 [i_2] [(short)0] = ((((/* implicit */_Bool) ((short) var_0))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [(signed char)14])) : (((/* implicit */int) arr_8 [i_2] [i_2]))))));
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_9 [i_2]))));
            arr_11 [i_2] [i_2] [3] = ((/* implicit */unsigned int) (signed char)-1);
        }
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            arr_15 [(_Bool)1] [(short)1] = ((/* implicit */_Bool) (-(var_5)));
            arr_16 [i_4] [17U] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1513)) ? (-7) : (((/* implicit */int) (signed char)-90))))) ? (((((/* implicit */_Bool) arr_7 [i_4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
            var_26 += ((/* implicit */_Bool) (+(arr_12 [i_2] [i_2] [i_4 + 2])));
            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-28)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 2])))));
        }
        arr_17 [i_2] = ((/* implicit */unsigned char) (signed char)-104);
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_29 *= arr_14 [i_2];
            arr_22 [i_2] [i_2] = ((/* implicit */unsigned char) var_4);
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_30 = ((/* implicit */signed char) ((short) arr_9 [i_2]));
            var_31 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 20U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)14988)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_14 [i_6])))))));
            arr_25 [20ULL] [20ULL] [i_6] = ((/* implicit */unsigned short) arr_8 [i_6 - 1] [i_2]);
            arr_26 [(short)15] [11ULL] [1ULL] = (short)-3840;
        }
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_29 [i_7] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned char)0))))) + (((unsigned int) arr_9 [(unsigned char)8]))));
            arr_30 [0ULL] [i_7] = ((/* implicit */unsigned char) var_5);
        }
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        arr_33 [19] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_8] [(signed char)8])) ? (((/* implicit */int) arr_31 [i_8] [(signed char)1])) : (((/* implicit */int) ((((/* implicit */_Bool) 3904845798U)) && (((/* implicit */_Bool) (signed char)-4)))))));
        arr_34 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_31 [i_8] [i_8])) : (((/* implicit */int) arr_32 [i_8] [i_8]))));
        arr_35 [23LL] = ((/* implicit */unsigned long long int) arr_31 [i_8] [i_8]);
    }
}
