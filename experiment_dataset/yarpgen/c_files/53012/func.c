/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53012
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
    var_16 = ((/* implicit */int) (unsigned short)31683);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((196147701365899552LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (-1915738554) : (1915738568)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (unsigned char)24))))) % (arr_0 [i_1])));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_4)) : (var_15)));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_9))));
                    arr_12 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_15 [i_4] [i_4] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_1))));
            var_21 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_4] [i_4]);
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 12; i_5 += 2) /* same iter space */
            {
                arr_20 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_7 [i_1] [i_5]))))));
                arr_21 [i_5] [i_1] = ((/* implicit */unsigned int) 134184960);
            }
            for (long long int i_6 = 1; i_6 < 12; i_6 += 2) /* same iter space */
            {
                arr_25 [(signed char)11] [(signed char)11] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4] [i_6 + 2])) ? (((/* implicit */unsigned long long int) var_8)) : ((~(arr_17 [i_1] [i_1] [i_1])))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) / (11356302062870819784ULL)));
                arr_26 [i_1] [i_1] [i_1] [i_6 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (952326726U));
            }
            for (unsigned short i_7 = 4; i_7 < 12; i_7 += 4) 
            {
                arr_30 [i_1] [i_1] [i_7 + 1] = ((/* implicit */unsigned long long int) -1603459397954069762LL);
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        {
                            arr_37 [i_1] [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_4]))));
                            arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((unsigned char) arr_31 [i_7 + 2] [i_7 + 2] [i_8] [i_9] [i_9] [i_9]));
                            var_24 = ((/* implicit */unsigned char) ((((arr_35 [i_4] [i_4]) - (((/* implicit */unsigned int) -1915738536)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    {
                        arr_44 [i_1] [i_4] [i_10] = ((/* implicit */int) arr_16 [i_1]);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (unsigned char)192))));
                        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_1] [i_11 + 3] [i_4] [i_10 - 1])) ? (arr_40 [i_1] [i_11 + 1] [i_1] [i_10 - 1]) : (arr_40 [(unsigned char)6] [i_11 + 2] [i_4] [i_10 - 1])));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1915738536)) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (unsigned char)64))));
                    }
                } 
            } 
        }
        for (int i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)63))));
            arr_47 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) var_9)) : (arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 2])));
        }
        for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_14 [i_1] [i_13] [i_13]))))))));
            var_30 -= ((/* implicit */signed char) ((unsigned short) var_5));
            var_31 = ((/* implicit */unsigned char) arr_31 [i_1] [i_1] [i_1] [i_13] [i_13] [i_13]);
            arr_51 [i_1] = ((/* implicit */short) ((unsigned short) arr_33 [i_1] [i_13] [i_13] [i_1]));
        }
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            arr_56 [i_1] &= ((/* implicit */short) ((6980182686920338807LL) / (((/* implicit */long long int) 1915738563))));
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (18446744073709551597ULL) : (arr_53 [i_1] [i_14] [i_14])));
        }
        arr_57 [i_1] |= ((/* implicit */_Bool) -1915738536);
    }
    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        arr_62 [i_15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)65))));
        arr_63 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)209)) | (min((((((/* implicit */int) var_4)) / (var_6))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)14)) && (((/* implicit */_Bool) var_7)))))))));
    }
    var_33 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)9658)) >> (((6980182686920338807LL) - (6980182686920338782LL))))));
}
