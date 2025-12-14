/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212549
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (var_2)))) ? (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned long long int) 16776192)) : (8779041497812317154ULL))) : (((/* implicit */unsigned long long int) (+(-16776214))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (short)-128))) - (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) ^ (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 4]))));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))));
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0 + 3]))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                arr_14 [i_3] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_0 + 1]))) < ((+(arr_9 [i_0] [i_1] [i_3]))));
                arr_15 [i_0 + 4] [i_1] [i_3] = ((/* implicit */short) ((int) arr_8 [i_0 - 1]));
                var_19 = ((((/* implicit */int) (_Bool)1)) - (16776188));
                arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_0 + 4])) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1]))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4] [i_4 - 3])) ? ((+(arr_10 [i_1] [i_1] [i_1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 4] [i_4 - 3])))));
                /* LoopSeq 1 */
                for (short i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    var_21 ^= ((unsigned short) ((((/* implicit */_Bool) (unsigned char)126)) && (((/* implicit */_Bool) 9223372036854775807LL))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((2305561534236983296ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 3] [i_0])))))));
                        var_23 &= ((/* implicit */unsigned char) ((_Bool) arr_19 [i_6] [i_6] [i_0] [i_5 + 2] [i_5 + 2]));
                        arr_24 [i_1] [i_4] [i_4 - 3] [i_1] [i_1] = ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 2] [i_4])) || ((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_6])))));
                    }
                    var_24 = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5 - 2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_10 [i_7] [i_0] [i_1] [i_0]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))));
                        var_25 = ((/* implicit */short) (!(arr_8 [i_5 - 1])));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_0] [i_0] [i_0 + 2]));
                        var_27 = ((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_5 + 1] [i_4 + 1] [i_0 + 4]));
                        var_28 = ((/* implicit */signed char) ((unsigned char) arr_12 [i_4 - 2] [i_1] [i_0 + 4]));
                    }
                    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_4 - 1] [i_4] [i_5 + 1] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0 + 4] [i_5 + 1])) ^ (((/* implicit */int) var_8))));
                        var_29 += ((/* implicit */_Bool) ((long long int) arr_28 [i_5 - 1]));
                        var_30 = ((/* implicit */short) ((arr_8 [i_0 - 1]) ? (arr_9 [i_5 - 1] [i_4 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4])))));
                        var_31 = ((/* implicit */short) ((signed char) arr_10 [i_4] [i_4] [i_5 + 2] [i_8]));
                    }
                    for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_32 = var_12;
                        var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9007199254740990LL)) ? (((/* implicit */int) arr_29 [i_5 - 1] [i_0 + 3] [i_4 - 2] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_1 [i_5 + 1] [i_4 - 2]))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    arr_37 [i_0 + 4] [i_4] [i_1] [i_4] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4 - 1])) >= (((/* implicit */int) arr_35 [i_0 + 4] [i_4 - 1] [i_4 + 1] [i_10 + 2] [i_4 + 1]))));
                    var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                }
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_41 [i_11 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_18 [(unsigned short)8]));
                var_35 += ((/* implicit */signed char) arr_5 [i_0] [i_0]);
            }
            var_36 = ((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 2]);
        }
        for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            var_37 = ((/* implicit */short) ((arr_28 [i_0 + 2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_28 [i_0 + 1]))));
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 16; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    for (signed char i_15 = 2; i_15 < 15; i_15 += 2) 
                    {
                        {
                            arr_54 [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_15 - 1] [i_15 + 1] [i_15 + 1])) & (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_21 [i_0] [i_14] [i_13] [i_0] [i_0]))))));
                            arr_55 [i_0 + 4] [i_14] [i_14] |= ((/* implicit */unsigned char) ((arr_49 [i_14] [i_0 + 2]) << (((var_14) - (1751458287U)))));
                        }
                    } 
                } 
            } 
        }
        var_38 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))) < (var_7));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 4; i_16 < 14; i_16 += 4) 
    {
        var_39 = ((/* implicit */signed char) var_10);
        var_40 = ((/* implicit */unsigned long long int) ((signed char) 4160749568U));
    }
    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_11))));
}
