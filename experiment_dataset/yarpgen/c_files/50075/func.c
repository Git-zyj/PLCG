/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50075
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
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) var_13)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_11)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((+(var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (((((/* implicit */_Bool) arr_1 [3LL])) ? (((arr_0 [i_0] [i_0]) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))) : (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]))))))));
            arr_6 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (-(var_8))))) ? ((~(((arr_0 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (((arr_1 [i_1]) | (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) var_3)))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)5441))))) ? (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [8] [i_2]))))) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_0])))), (((/* implicit */int) (signed char)4))));
                            var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((((/* implicit */_Bool) 290995414)) ? (11124017051895211081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52050))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_3] [i_4] [i_4] [7ULL] [i_4])) && (((/* implicit */_Bool) arr_2 [i_4])))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_10)))))))));
                arr_16 [i_0] = ((/* implicit */unsigned char) var_11);
            }
            arr_17 [i_0] [i_0] [(signed char)8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) ^ ((~(var_11))))))));
        }
        for (short i_6 = 3; i_6 < 19; i_6 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_15))));
                            var_23 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)4)) : (var_0))))), (((/* implicit */int) ((((/* implicit */long long int) ((arr_27 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_6] [i_7] [i_8]))) : (var_11)))) > (arr_24 [i_6 - 1] [i_9 - 2] [i_6 - 1] [i_8]))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92))) >= (((arr_21 [i_0] [i_6] [i_8]) ? (((/* implicit */unsigned int) min((-2017589010), (((/* implicit */int) arr_21 [i_0] [i_9] [i_0]))))) : (max((((/* implicit */unsigned int) arr_27 [i_0])), (22U)))))));
                            var_25 -= ((/* implicit */unsigned int) (signed char)-47);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_37 [i_0] [i_10] [i_11] &= ((/* implicit */signed char) (((-(11022161232496196609ULL))) / (((/* implicit */unsigned long long int) arr_35 [i_0] [i_11 - 2] [i_0] [i_11]))));
                        arr_38 [i_6 + 2] [i_6 + 2] [i_11 + 1] = ((/* implicit */unsigned long long int) var_10);
                        arr_39 [i_0] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [(unsigned char)18] [i_6] [i_10] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-392))) : (1316419499462787740ULL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_1))))))), (((/* implicit */long long int) (unsigned short)33401))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_6])) | (arr_1 [i_11])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)16] [i_11])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9323))))), (((/* implicit */long long int) ((_Bool) 8388608U)))))) : (((max((((/* implicit */unsigned long long int) var_5)), (arr_34 [i_0] [i_0] [i_6] [i_6 + 2] [i_10] [i_11 - 2]))) - (((/* implicit */unsigned long long int) var_0))))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_32 [i_6 - 3] [i_6 - 3] [i_6 - 2])) ? (((/* implicit */int) arr_32 [i_6 + 2] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_32 [i_6 - 1] [i_6 - 2] [i_6 - 2]))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) <= (arr_41 [(short)20] [(unsigned char)14]))))));
            /* LoopSeq 1 */
            for (short i_13 = 2; i_13 < 20; i_13 += 4) 
            {
                var_29 = ((/* implicit */signed char) arr_44 [i_0] [i_0] [i_13]);
                /* LoopSeq 4 */
                for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    var_30 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_12] [i_12])) : (158925566U)))) ? (((/* implicit */long long int) ((arr_23 [i_0] [0] [i_0]) & (((/* implicit */int) arr_25 [i_0] [i_0] [i_12]))))) : (arr_44 [i_14] [i_12 + 2] [i_13])));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        var_31 = ((/* implicit */int) ((((_Bool) (signed char)40)) ? (1ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11022161232496196612ULL)) ? (arr_43 [i_15] [i_13] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28707))))))));
                        var_32 = ((/* implicit */unsigned int) var_1);
                        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_12 - 1] [i_13 + 1]))));
                    }
                }
                for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((arr_30 [i_0] [i_12 + 2]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [9LL])) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        arr_56 [i_12] [i_12] = ((/* implicit */unsigned char) -258071515);
                        var_35 *= ((/* implicit */unsigned short) ((var_16) < (((/* implicit */int) (_Bool)1))));
                    }
                    var_36 = ((/* implicit */_Bool) ((arr_29 [i_0] [i_12 - 1] [i_16]) / (((/* implicit */int) arr_12 [i_0] [i_0] [i_12 - 1] [i_12 + 2] [i_13 + 1] [i_16]))));
                }
                for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    arr_61 [i_12] = ((/* implicit */unsigned long long int) var_10);
                    arr_62 [i_18] [(signed char)1] [i_12] [(short)0] [i_0] = arr_2 [i_12];
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0] [i_12] [i_18] [i_12] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-5711)) : (var_0)))) : (4175724877U)));
                }
                for (signed char i_19 = 1; i_19 < 20; i_19 += 4) 
                {
                    var_38 = ((/* implicit */int) 18446744073709551608ULL);
                    var_39 = ((/* implicit */unsigned char) var_6);
                    /* LoopSeq 2 */
                    for (long long int i_20 = 1; i_20 < 20; i_20 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) (-(var_15)));
                        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_19 + 1] [i_0])) ? (arr_31 [i_12 + 2] [i_12 + 2] [i_19] [i_20] [i_20] [i_20]) : (((/* implicit */int) arr_64 [i_13] [i_20 - 1] [i_13] [i_13 - 1] [i_12] [i_13]))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_69 [i_12 + 1] [i_19 - 1] [i_21] [i_21])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_69 [i_12 + 1] [i_19 + 1] [i_19 + 1] [i_19]))));
                        var_43 -= ((/* implicit */signed char) var_14);
                        var_44 = ((/* implicit */signed char) ((_Bool) var_4));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) arr_25 [i_0] [i_12 - 1] [i_19]))))));
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) 18108594958764424589ULL))));
                    }
                }
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 21; i_22 += 4) 
                {
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 2) 
                    {
                        {
                            var_47 = arr_52 [i_12];
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12])) ? (((/* implicit */int) arr_36 [i_0] [(short)13] [(unsigned char)9])) : (((/* implicit */int) (short)25118))))) ? (((/* implicit */long long int) ((arr_60 [i_12] [i_22] [i_13] [i_12]) | (((/* implicit */unsigned int) -2131356532))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_0] [i_0] [i_13] [i_0]))) | (0LL)))));
                            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [i_13] [i_23] [i_13 - 1] [i_22] [(unsigned short)4] [(unsigned short)4])) || (((/* implicit */_Bool) ((-1695143702) / (((/* implicit */int) arr_58 [i_12] [i_13] [i_22] [i_13]))))))))));
                        }
                    } 
                } 
            }
        }
    }
}
