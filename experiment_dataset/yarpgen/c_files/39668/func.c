/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39668
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_1);
        var_16 -= ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) 0ULL)))))) - (max((var_10), (((/* implicit */long long int) var_13))))))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)9] [(short)9])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))))));
        arr_3 [14] [14] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (var_6)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) 131071)) & (3702700955U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) var_13)))))));
                        var_21 *= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_4)))));
                    }
                    var_22 = ((/* implicit */long long int) arr_12 [i_2 + 1] [i_2 - 2]);
                    arr_14 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2 - 1])) || (((/* implicit */_Bool) max((var_6), (arr_1 [i_2 + 1] [i_2 + 1]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [11U]))) ? (((max((((/* implicit */unsigned int) var_1)), (arr_6 [i_1]))) - (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13657))) : (0ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (signed char)5))))) : (((/* implicit */int) var_8)))))));
        var_24 = ((/* implicit */signed char) 0ULL);
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */short) (~(3753727778U)));
                        arr_24 [i_6] = ((/* implicit */unsigned char) arr_15 [i_5] [i_5]);
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) / (((/* implicit */int) var_9)))))));
                        arr_29 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned long long int) (~(arr_5 [i_5 - 1])));
                        var_27 = ((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_14))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 342109186U)) ? (((/* implicit */int) (short)25048)) : (131071)));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_33 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] = arr_25 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_7];
                        arr_34 [i_5 - 1] [i_6] [7LL] [i_10] [i_10] = ((/* implicit */int) ((arr_31 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) & (arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                        arr_35 [i_5 - 1] [i_5] [6U] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 0U))) && (((/* implicit */_Bool) arr_13 [i_5 - 1]))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) arr_7 [i_10])) : (((/* implicit */int) arr_7 [i_10]))));
                        arr_36 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) ((((/* implicit */_Bool) (short)23507)) && (((/* implicit */_Bool) (signed char)127)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_30 *= ((/* implicit */signed char) var_3);
                                var_31 = ((/* implicit */signed char) (((((~(arr_4 [i_5] [i_5 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_1))))))) >> (((var_12) - (1293295322U)))));
                                var_32 += ((/* implicit */_Bool) arr_6 [i_11]);
                            }
                        } 
                    } 
                    arr_43 [i_5 - 1] [i_5 - 1] = ((/* implicit */signed char) var_15);
                    arr_44 [i_5] [i_6] [i_7] = ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_37 [i_5] [i_5] [i_7] [(short)2])))) ? ((~(var_4))) : (((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [(short)5] [(short)5])))));
                    var_33 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                }
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                        {
                            {
                                arr_52 [i_5] [(signed char)2] [(signed char)2] [i_5] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((2045270356U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) / (8880477517467794167LL)));
                                var_34 ^= ((/* implicit */int) var_9);
                                arr_53 [i_13] = ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_49 [i_5] [i_5] [i_13] [i_5 - 1] [i_5 - 1] [i_5]))))) ? ((~(arr_46 [8U] [i_6]))) : (min((137371844608LL), (((/* implicit */long long int) (_Bool)0))))));
                            }
                        } 
                    } 
                } 
                arr_54 [(short)1] [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)23356)) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */int) min((arr_49 [i_5 - 1] [i_5 - 1] [(short)6] [i_5 - 1] [i_5] [i_5 - 1]), (arr_49 [i_5 - 1] [i_5 - 1] [8] [i_5 - 1] [i_5] [i_5 - 1])))) : (((/* implicit */int) arr_49 [i_5 - 1] [i_5 - 1] [(short)6] [i_5 - 1] [6LL] [i_5 - 1]))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-115))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))));
}
