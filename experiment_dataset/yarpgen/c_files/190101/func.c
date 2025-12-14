/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190101
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) arr_12 [i_0] [i_2] [i_3]);
                                var_14 -= ((/* implicit */unsigned long long int) ((((((_Bool) var_11)) ? ((+(arr_12 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) min((arr_9 [(_Bool)1] [i_0] [14U] [i_0] [i_3] [i_4]), (((/* implicit */int) arr_1 [i_4] [i_3]))))))) & (((/* implicit */unsigned int) 33554431))));
                                var_15 = ((/* implicit */_Bool) var_9);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)119))));
                            var_17 = ((/* implicit */short) min((arr_12 [i_0] [i_1] [i_5]), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) - ((~(var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)99))));
                    var_20 = ((/* implicit */unsigned long long int) var_6);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 33554431))))) : (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */int) var_4)) == ((~(((/* implicit */int) (_Bool)1)))))))));
                                var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_9) == (((/* implicit */int) arr_35 [i_7] [i_7] [i_9] [i_10] [i_11] [0LL] [i_9])))))));
                                var_24 |= ((/* implicit */unsigned long long int) arr_16 [i_11] [i_10] [i_9] [i_8]);
                                var_25 = ((/* implicit */int) arr_4 [i_7] [i_10] [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */short) (((~(10830943100985536948ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7])))));
        arr_36 [10LL] = ((/* implicit */int) 2202284001470750701ULL);
        var_27 = ((/* implicit */unsigned int) ((8347831959929698701ULL) | (((/* implicit */unsigned long long int) 2147483647))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) (((+(var_3))) << (((arr_3 [i_12]) - (1915326831U)))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_12] [i_12]), (var_4))))) : (16244460072238800926ULL)));
        /* LoopSeq 4 */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_30 = ((((/* implicit */long long int) arr_20 [i_12] [i_13] [i_13] [i_13] [i_12])) | (((arr_16 [i_12] [i_12] [i_12] [i_12]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            var_31 ^= ((/* implicit */short) arr_10 [i_12] [i_13] [i_13] [i_12]);
        }
        for (signed char i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */unsigned char) (~(((arr_12 [i_14] [i_12] [i_12]) << (((((/* implicit */int) (short)-1)) + (31)))))));
            arr_46 [0U] |= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_13 [i_12] [i_12] [14ULL] [14ULL] [14ULL] [i_12] [i_12])) >= (((/* implicit */int) arr_13 [i_12] [i_14] [i_14] [i_12] [i_12] [13U] [i_14]))))));
            arr_47 [i_14] [i_12] = ((/* implicit */unsigned long long int) var_7);
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((unsigned char) (+(((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_39 [(signed char)10])))))))))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_33 = ((/* implicit */short) var_5);
            arr_52 [i_12] = ((/* implicit */long long int) arr_38 [i_15]);
            var_34 = ((/* implicit */unsigned long long int) var_0);
            var_35 = var_0;
        }
        for (long long int i_16 = 1; i_16 < 14; i_16 += 2) 
        {
            arr_56 [i_16] [i_16 + 1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((((_Bool)1) ? (arr_16 [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? ((+(((((/* implicit */_Bool) 4294967287U)) ? (440120809U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) 25493027))));
            arr_57 [i_12] [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_12] [i_12] [i_12] [i_12] [i_16 - 1] [12ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (10098912113779852926ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_53 [i_12] [i_12]))))))))));
            var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)64922)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (-33554421)))))) ? (((((/* implicit */_Bool) 8628984485845193580LL)) ? (min((arr_51 [i_12] [i_16 - 1] [i_12]), (((/* implicit */unsigned long long int) (signed char)-1)))) : ((-(16244460072238800918ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_13 [i_16 - 1] [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_16] [(_Bool)1])), (arr_42 [i_12] [i_12] [i_12])))))));
        }
        var_37 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [i_12] [i_12]))) / (((((/* implicit */_Bool) arr_41 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1143464332U)))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
    {
        arr_60 [i_17] = 4294967295U;
        var_38 &= ((/* implicit */unsigned short) 4194303U);
        arr_61 [i_17] = ((/* implicit */signed char) arr_14 [i_17] [i_17] [i_17] [(signed char)10] [(short)15]);
        /* LoopSeq 4 */
        for (short i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned char) min((var_39), (((unsigned char) (unsigned short)7))));
            arr_64 [2] [i_18] = ((/* implicit */signed char) -1181764229);
            arr_65 [i_17] [i_18] = ((/* implicit */short) arr_55 [(signed char)0]);
            var_40 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_17] [i_18])) ? (1181764228) : (((/* implicit */int) arr_13 [i_17] [i_18] [i_17] [i_17] [i_17] [i_17] [i_18])))) != (((var_6) ? (((/* implicit */int) arr_21 [i_17] [i_18])) : (((/* implicit */int) arr_13 [(_Bool)1] [(signed char)16] [i_18] [i_18] [i_18] [i_18] [i_18]))))));
        }
        for (short i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 15; i_20 += 4) 
            {
                for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    {
                        var_41 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -1608091027)))) ? (((/* implicit */long long int) ((-1608091027) ^ (((/* implicit */int) arr_41 [i_17] [i_17] [i_17]))))) : (min((((/* implicit */long long int) var_2)), (var_10))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)156)) : ((+(((/* implicit */int) arr_1 [10LL] [i_19])))))))));
                        var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_55 [i_17]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_21])))))) >> (((/* implicit */int) ((_Bool) (signed char)-49)))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_49 [i_17] [(unsigned short)3] [i_21]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_54 [(signed char)3] [i_20] [i_21]), (arr_54 [i_19] [i_20] [i_21]))))) : (((((/* implicit */_Bool) arr_18 [i_17] [i_17] [i_17])) ? (arr_51 [i_17] [i_20] [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(unsigned char)6] [i_20] [i_17])))))));
                    }
                } 
            } 
            arr_74 [8U] [8U] [i_19] = ((/* implicit */unsigned short) arr_43 [(unsigned short)6] [i_19]);
        }
        /* vectorizable */
        for (unsigned int i_22 = 0; i_22 < 15; i_22 += 4) /* same iter space */
        {
            var_44 -= ((int) (!(((/* implicit */_Bool) (signed char)24))));
            arr_77 [i_17] = ((/* implicit */int) (_Bool)0);
        }
        /* vectorizable */
        for (unsigned int i_23 = 0; i_23 < 15; i_23 += 4) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned int) ((_Bool) (((_Bool)1) ? (((/* implicit */long long int) -1181764218)) : (var_10))));
            var_46 = ((/* implicit */long long int) arr_15 [i_17] [i_23] [i_23] [i_23] [i_17] [13ULL] [13ULL]);
        }
    }
    var_47 ^= ((/* implicit */signed char) (((_Bool)1) ? (65535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
}
