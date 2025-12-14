/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44738
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                    arr_8 [i_0] [i_1] [i_2] = min((((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 1] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 += max(((+(17898214882352400263ULL))), (((/* implicit */unsigned long long int) max((((long long int) arr_9 [i_0 + 3])), (arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_1] [7ULL] [i_4])))));
                                arr_13 [(unsigned short)10] [i_3] |= var_5;
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)10992), ((unsigned short)1)))) == (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        arr_18 [i_5] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 2]);
                        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 2] [i_5 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) 17898214882352400263ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 4] [i_0] [i_0]))))));
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2])) - (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 2] [i_1] [i_2] [i_1] [3ULL]))) : (var_8)));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [(unsigned short)10])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_1] [i_1] [i_1] [i_1]), (arr_16 [i_2] [i_2] [(_Bool)1] [(short)3]))))) : (((long long int) var_4)))))));
                    }
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) ((var_0) * (((unsigned int) var_11))));
    /* LoopSeq 1 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6 - 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8])))))) && (((/* implicit */_Bool) (-(arr_21 [i_6 - 1]))))));
                                arr_36 [i_6] [i_6] [i_8] [(unsigned short)15] [(unsigned short)15] [3ULL] [i_10 + 1] = ((/* implicit */short) arr_25 [i_7]);
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((18014398509416448ULL) - (18446744073709551600ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~(var_2)));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_24 [i_7 - 1] [i_7 - 1]), (arr_24 [i_6] [i_8])))))))));
                        var_25 = ((/* implicit */unsigned short) (-((+(arr_39 [i_6 - 1] [i_7 - 2] [i_11 + 1] [i_11])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((arr_29 [i_6] [i_7] [i_8] [i_12] [(unsigned short)6] [i_7]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_7 - 1] [i_6 - 1]))) > (((var_0) >> (((((/* implicit */int) (signed char)-61)) + (68)))))))))))));
                        var_27 = ((/* implicit */unsigned short) -1584532241373601107LL);
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_42 [(signed char)15] [i_7] [(unsigned short)2] [i_6] [(unsigned short)2] [i_6 - 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 16; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [(_Bool)1])))))));
                            var_30 = ((/* implicit */unsigned int) arr_42 [i_6] [i_6] [i_8] [i_12] [i_13] [i_13]);
                            var_31 ^= ((/* implicit */unsigned short) arr_31 [i_8] [i_12]);
                        }
                        var_32 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((arr_44 [i_7]) ? (((/* implicit */int) arr_44 [i_7])) : (((/* implicit */int) arr_44 [i_7])))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        var_33 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))));
                        var_34 &= ((/* implicit */short) var_2);
                        arr_50 [i_8] [10U] [i_6 - 1] [i_14 - 1] [i_14 - 1] [i_6] &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 12930999432218492541ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) : (-6823626713638227127LL)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_35 &= ((/* implicit */signed char) arr_32 [i_6]);
                            arr_53 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_35 [i_6] [(unsigned short)6] [i_6])) : (((/* implicit */int) (_Bool)0)))))))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 3; i_16 < 15; i_16 += 4) 
        {
            for (unsigned char i_17 = 4; i_17 < 16; i_17 += 2) 
            {
                {
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_37 [i_6] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        for (short i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            {
                                var_37 += ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_6 - 1])) ? (((/* implicit */int) max((arr_59 [i_17]), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))))))));
                                var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned short) arr_61 [i_6] [(unsigned short)14] [i_17] [i_17]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7711))) >= (var_2))))))) ? (((/* implicit */int) arr_59 [i_6 - 1])) : (((/* implicit */int) (_Bool)1))));
                                arr_68 [i_6 - 1] [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 96910855655010295ULL)))))) > (((((/* implicit */_Bool) 11541442155705812459ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_18] [i_6]))))))))) | (((((/* implicit */_Bool) (+(arr_25 [i_16])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_6] [i_6] [i_16 - 1] [i_6])) ? (arr_56 [(_Bool)1] [i_16 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))))) : (((arr_67 [i_6] [14U] [i_17 + 1] [i_18] [i_19]) >> (((arr_58 [i_6 - 1] [i_17] [i_16] [(_Bool)1]) - (6632955904011328463ULL)))))))));
                                var_39 += ((/* implicit */unsigned short) (~((+((~(((/* implicit */int) arr_66 [i_6] [i_16 - 2] [i_6] [i_18] [i_18] [i_19]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 ^= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_42 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]))))));
    }
}
