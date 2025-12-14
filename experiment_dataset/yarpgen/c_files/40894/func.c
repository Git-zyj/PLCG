/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40894
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
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_14)))) && (var_11)))) / (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (!(((var_1) >= (arr_3 [i_0 + 1] [i_0] [i_1 - 3])))));
            var_20 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_5 [i_0] [i_0]))) < (((arr_5 [i_0 + 1] [i_0]) & (arr_5 [i_0 + 1] [i_0])))));
            var_21 = ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)114))))), ((signed char)-112)));
            arr_7 [i_0] [i_0] [i_1 - 3] = ((/* implicit */unsigned char) min((((unsigned int) arr_4 [i_1 + 2] [12U] [(signed char)10])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1 - 3] [i_1 + 2] [i_1 - 2])))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-110)))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((min((max((((/* implicit */unsigned int) var_12)), (var_5))), (((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)105))))))) > (((max((((/* implicit */unsigned int) var_8)), (arr_3 [i_0] [(short)10] [i_2]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_2]) > (33553920U)))))))))));
            var_24 -= ((/* implicit */signed char) min((((arr_8 [(unsigned short)6]) % (((/* implicit */long long int) ((arr_11 [i_0] [i_0] [(unsigned short)0]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */long long int) var_6)) : (var_4))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) | ((-(33553920U)))))) : (((((((arr_8 [12U]) + (9223372036854775807LL))) >> (((arr_5 [(unsigned char)4] [(unsigned char)4]) - (1721342909U))))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((4261413376U) != (((4261413375U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_14 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_0 + 2] [i_0]) + (arr_5 [i_0 + 2] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0])) ? (arr_5 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (short i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_0] [(unsigned char)5] [i_5] [i_6] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_19 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_0] [i_6])) > (((/* implicit */int) arr_19 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_0] [i_6]))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((/* implicit */long long int) (unsigned char)255)), (((max((var_2), (var_16))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (arr_21 [i_5])))))))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_13))));
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_13 [i_3] [i_5 + 1] [i_6 - 1]))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_11 [i_0 + 1] [i_5 + 2] [i_3])) | (((/* implicit */int) arr_4 [i_5 - 1] [i_3] [i_0]))))))))))));
                            var_30 = ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_0 + 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_22 [i_6] [i_5 + 2] [i_3])) : (((/* implicit */int) arr_22 [i_0 + 2] [i_3] [i_4]))));
                        }
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_31 &= arr_18 [i_4] [i_7] [i_7] [i_7];
                            arr_27 [i_0] [i_3] [i_4] [i_4] [i_5] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16384ULL)) && ((_Bool)1)));
                            var_32 = ((/* implicit */unsigned short) (signed char)104);
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_33 += ((/* implicit */short) (unsigned char)0);
                            var_34 = ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_18 [i_0] [i_3] [i_5] [i_8])))) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)22658))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            var_35 += ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [(unsigned char)2] [i_4] [i_9 + 1] [i_4] [i_0 + 2])) : (((/* implicit */int) (signed char)110)))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-105))))) ? (max((max((4261413399U), (((/* implicit */unsigned int) (signed char)121)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) || ((_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) (short)29467)), (((/* implicit */unsigned char) var_11))))))));
                            var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_25 [i_0] [i_4] [8U])), (var_10)))) / (((((/* implicit */int) arr_13 [i_4] [i_5 + 2] [i_9])) + (((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) ((16384ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) var_1))));
                            arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_9 + 1] = ((/* implicit */short) var_0);
                        }
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_21 [i_3])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
            var_40 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_3] [i_3] [i_3])) > (((/* implicit */int) arr_19 [i_0] [i_0 + 1] [2U] [i_3] [i_3]))))) != (((/* implicit */int) min((((/* implicit */short) (signed char)-110)), (arr_22 [i_3] [i_3] [i_0 + 2]))))));
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (unsigned int i_11 = 3; i_11 < 17; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) max((var_41), (max((var_12), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)104)) | (((/* implicit */int) (short)-1024)))) > (max((arr_1 [i_0 - 1]), (((/* implicit */int) var_17)))))))))));
                            var_42 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-110))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 18; i_13 += 4) 
            {
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        arr_51 [i_3] |= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_3]))))), (min((((/* implicit */unsigned int) var_11)), (33553916U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_3] [i_3] [i_3])))))));
                        arr_52 [i_0] [i_3] [i_0] [i_14] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_13 + 1] [6]))) : (33553892U))));
                        var_43 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (4261413376U))))))));
                        arr_53 [i_14] [i_14] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        }
        for (unsigned int i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            var_44 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_54 [i_0] [i_15]) == (((/* implicit */long long int) arr_31 [i_15] [i_15 + 2] [i_0])))))) / (33553924U)));
            arr_57 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22658)) ? (min((((/* implicit */long long int) arr_1 [i_0 - 1])), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 + 2]))))))));
        }
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (signed char)118))));
        var_46 = ((/* implicit */unsigned char) ((((_Bool) arr_10 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 3 */
    for (short i_16 = 2; i_16 < 24; i_16 += 2) 
    {
        for (short i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            for (unsigned char i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                {
                    arr_65 [i_18] [i_17] [i_17] [i_17] = min((((((/* implicit */_Bool) arr_61 [i_16 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 33553892U)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [13] [i_17] [i_18])))))) : (min((var_16), (var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_64 [i_16] [i_17] [i_18])), (arr_58 [i_18])))) ? (((/* implicit */int) arr_64 [i_16 + 1] [i_16 - 1] [i_18])) : ((~(((/* implicit */int) arr_58 [i_16]))))))));
                    arr_66 [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((unsigned char) (signed char)-106));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (+((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_62 [i_16] [i_16 + 1] [i_16])) - (95))))) : (((/* implicit */int) arr_63 [(unsigned short)12] [i_16 - 1] [i_18])))))))));
                }
            } 
        } 
    } 
}
