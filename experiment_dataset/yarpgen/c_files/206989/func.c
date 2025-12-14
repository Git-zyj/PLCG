/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206989
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
    var_15 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_9))))))));
    var_16 = var_10;
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
                arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((var_0) ^ (arr_3 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0]))));
            var_20 += ((/* implicit */unsigned int) (+(-1466415514)));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)107)) / (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (3532349655U)));
    }
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((((((/* implicit */_Bool) 715259527963378557LL)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) arr_3 [i_3 - 1])) : (arr_0 [i_3] [i_3]));
        var_24 |= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))) & (3532349673U))));
    }
    for (unsigned int i_4 = 4; i_4 < 8; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) arr_12 [i_4]))))), (max((arr_13 [i_4] [i_4]), (((/* implicit */long long int) (short)-32766)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 10832382194592074419ULL)) && (((/* implicit */_Bool) (short)24481)))))));
            arr_16 [i_4] [i_4] [i_4] |= ((/* implicit */unsigned char) ((max((arr_15 [(unsigned short)1]), (((/* implicit */long long int) var_14)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) && (((/* implicit */_Bool) (short)32762))))))));
        }
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32751)) | (((/* implicit */int) (short)-17131))))));
            arr_20 [i_4] |= ((/* implicit */unsigned int) ((arr_13 [i_4 + 2] [i_4 + 2]) & (((min((5568283792890232850LL), (((/* implicit */long long int) (signed char)9)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_6])) ? (3987815553U) : (((/* implicit */unsigned int) arr_14 [i_4] [i_6])))))))));
            var_27 = ((/* implicit */_Bool) arr_12 [i_6]);
        }
        arr_21 [i_4] = ((/* implicit */signed char) (-(arr_15 [i_4])));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_7] [i_7]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_7] [i_7])) ^ (var_3)));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) - (1541)))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) && (((/* implicit */_Bool) arr_22 [i_7] [i_7]))));
        arr_26 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7])) || (((/* implicit */_Bool) arr_22 [i_7] [i_7]))));
    }
}
