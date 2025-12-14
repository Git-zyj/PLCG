/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54437
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((var_10) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) ((short) arr_6 [i_0] [i_1]))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))))));
                    var_18 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (short)2047))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) + ((-9223372036854775807LL - 1LL))))))));
                    var_19 = -1;
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 4; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) var_7);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))) % (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28259))) * (var_10)))));
                    /* LoopSeq 3 */
                    for (short i_5 = 4; i_5 < 21; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */int) arr_11 [i_4]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) (unsigned short)37277);
                            arr_21 [i_0] [i_3] [i_5] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_0] [i_4] [i_6] [i_5] [i_5])) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37277))) : (var_8)))))) ? (((long long int) arr_18 [i_0] [i_5])) : (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)37276)), (var_3))))));
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37276))) % (6830199455768913946LL)))))) ? ((+(((/* implicit */int) arr_13 [i_3] [i_5])))) : (((((/* implicit */_Bool) (short)-3134)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)-32766))))));
                        }
                        var_24 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)37275)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28260))) : (65535LL))) < (((/* implicit */long long int) var_1)))))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            arr_25 [i_5] [i_3] [i_3] [i_5] [i_7] = ((/* implicit */short) ((long long int) (signed char)-1));
                            var_25 = var_12;
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((min((arr_1 [i_4 + 1]), (arr_28 [i_0] [i_4] [i_4] [i_5 - 2] [i_5 - 2] [i_5]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5 + 1]))))))));
                            var_27 = ((((((/* implicit */_Bool) arr_0 [i_0] [i_4 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4 - 2] [i_5] [i_5 - 4] [i_5 - 3] [i_5] [i_5] [i_8]))))) - (((/* implicit */unsigned int) ((arr_22 [i_0] [i_0] [i_5 - 3] [i_5] [i_8] [i_5] [i_4 - 4]) / (((/* implicit */int) arr_29 [i_4 + 1] [i_4 + 1] [i_5 - 3] [i_5 + 1] [i_5 + 1] [i_8] [i_4 + 1]))))));
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) var_15);
                            var_29 = ((/* implicit */int) ((signed char) ((unsigned char) var_4)));
                        }
                    }
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_36 [i_4] [i_4] [i_4 - 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-13)) ? (-176013655227764215LL) : ((-9223372036854775807LL - 1LL))));
                        arr_37 [i_0] [i_3] [i_0] [i_10] = ((/* implicit */int) arr_11 [i_10]);
                        arr_38 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (((/* implicit */int) arr_31 [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 3] [i_4] [i_4])) : (((/* implicit */int) var_15))))) ? (((((((/* implicit */long long int) var_1)) == (arr_1 [i_4]))) ? (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) (short)-3134))))) : (((unsigned long long int) 676356184)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)37277)) ? (((/* implicit */int) (unsigned short)37283)) : (((/* implicit */int) (unsigned short)6266)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) (+(((long long int) (signed char)-124))));
                        var_31 &= ((/* implicit */int) arr_26 [i_0] [i_3]);
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_3] [i_4] [i_11])) ? (arr_19 [i_11] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */long long int) 1276813665))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_27 [i_0] [i_0] [i_4 - 4] [i_11] [i_4 - 4] [i_12] [i_4 - 4])));
                            arr_47 [i_0] [i_0] [i_0] [i_3] [i_4] [i_11] [i_12] = ((/* implicit */unsigned short) (signed char)-1);
                            arr_48 [i_0] [i_4 - 1] [i_4] [i_11] [i_4 - 4] [i_4] [i_12] = ((long long int) ((unsigned long long int) 1899729979U));
                        }
                        for (long long int i_13 = 1; i_13 < 21; i_13 += 2) 
                        {
                            var_33 ^= ((/* implicit */_Bool) 8U);
                            arr_51 [i_0] [i_3] [i_4 + 1] [i_4] [i_11] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2085474913)) ? (arr_20 [i_13 - 1] [i_13] [i_13] [i_13] [i_13] [i_13 + 1] [i_13 + 1]) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)37276)) : (((/* implicit */int) (unsigned char)48))))));
                            var_34 ^= var_15;
                        }
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                        {
                            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_14) : (var_14)))) : ((+(var_12)))));
                            arr_55 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_9);
                            arr_56 [i_0] [i_0] = ((/* implicit */int) ((75420567145292427ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */signed char) ((arr_41 [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))));
                            var_37 -= ((/* implicit */short) arr_12 [i_0]);
                        }
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_11] [i_3] [i_4 + 1] [i_3] [i_0])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        arr_59 [i_0] [i_3] [i_4] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_39 = ((/* implicit */long long int) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_3] [i_0] [i_0] [i_15] [i_15]))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 2) 
        {
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_0] [i_0]))) : (var_14)))) - (arr_57 [i_0] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_13 [i_0] [i_0]))))))) : (((long long int) (-(((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_16])))))));
            var_41 = ((/* implicit */_Bool) (-(((unsigned long long int) var_15))));
        }
    }
    var_42 = ((/* implicit */unsigned long long int) var_12);
}
