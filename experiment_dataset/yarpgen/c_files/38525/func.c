/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38525
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
    var_16 &= ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) ((((83961663) < (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : ((+(((/* implicit */int) var_13))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
            arr_5 [(signed char)14] = var_8;
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) arr_3 [i_4] [i_5]);
                        arr_15 [(unsigned short)8] [i_3] [(unsigned short)8] [(short)14] [i_3] &= (-((~((~(-234611368))))));
                    }
                    for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_20 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) arr_12 [(unsigned short)10] [i_3] [i_4]);
                        var_19 = ((/* implicit */int) max((var_19), ((-((-((-(((/* implicit */int) var_3))))))))));
                        var_20 = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)10]))) : (arr_6 [i_3]))) > (((/* implicit */long long int) arr_7 [i_2]))))), (((((/* implicit */_Bool) max((arr_1 [i_6]), (((/* implicit */unsigned int) var_15))))) ? (max((((/* implicit */int) var_5)), (arr_7 [i_2]))) : (max((arr_10 [i_2]), (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_4] [i_6]))))))));
                        arr_21 [16] [i_3] [i_2] = ((/* implicit */int) var_13);
                    }
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [(unsigned char)16] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [(unsigned short)13] [i_3] [(unsigned short)13])) : (var_15))) >= (((/* implicit */int) var_7)))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_8 [i_7])), (arr_9 [i_2] [(unsigned char)6] [i_2])));
                        arr_24 [i_7] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_2])), (arr_6 [11])));
                        var_23 -= ((/* implicit */_Bool) arr_18 [i_2] [(unsigned short)9] [i_2]);
                        var_24 = ((/* implicit */_Bool) (~(var_8)));
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) arr_23 [i_2] [(unsigned short)14] [i_2] [i_2] [(unsigned short)12] [i_2])))) : (arr_10 [i_4])))));
                        arr_28 [i_2] [i_8] = ((/* implicit */signed char) var_11);
                        var_26 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_22 [2] [i_4] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) arr_0 [i_4] [i_2])) : ((-(arr_1 [i_8])))))));
                        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2] [i_2]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        arr_32 [i_9] [i_4] [13] [(unsigned short)2] = ((/* implicit */int) (((~(arr_18 [i_2] [i_2] [(_Bool)1]))) - (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        arr_33 [i_2] [(short)9] [i_2] [(short)9] [i_2] [i_2] = ((/* implicit */unsigned int) (-((-(arr_12 [i_2] [i_2] [i_2])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_7)))) / (((((/* implicit */_Bool) var_3)) ? (arr_7 [i_2]) : (((/* implicit */int) var_7)))))))));
                            arr_37 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_13);
                        }
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_2] [i_2] [i_2] [(short)13] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) >> (((arr_39 [(_Bool)1] [i_2] [i_4] [i_2] [i_3] [(unsigned short)7] [i_2]) + (1481384038)))));
                            arr_41 [i_2] [i_2] = ((/* implicit */short) arr_16 [4] [i_2] [i_2] [i_3] [i_2]);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                arr_47 [i_2] [i_2] [13U] [i_13] [(_Bool)1] [i_2] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(arr_39 [i_4] [13LL] [i_2] [i_4] [i_4] [i_3] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) <= (((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */int) arr_43 [i_4] [i_4])) : (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) (-(707007735)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_14 [i_13] [i_12] [i_4] [i_3] [(_Bool)1]))))))));
                                arr_48 [i_2] [i_3] [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_2] [i_13] [(signed char)10] [9])) / (((((/* implicit */int) var_7)) * (((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) ((((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((((/* implicit */int) var_3)) + (arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) + (2147483647))) << (((((/* implicit */int) var_6)) - (62)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 4) 
                        {
                            {
                                var_30 = (-(var_8));
                                var_31 = ((/* implicit */_Bool) var_0);
                                arr_60 [i_2] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 17; i_19 += 3) 
                        {
                            {
                                arr_66 [i_15] [i_18] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_6)) - (54))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                                arr_67 [i_2] [i_2] [i_14] [i_15] [i_15] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) * (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
                                var_32 *= ((/* implicit */signed char) arr_11 [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) var_10)))) : (var_8)));
            arr_72 [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46952)) | (((/* implicit */int) (_Bool)0))));
        }
        /* LoopSeq 4 */
        for (short i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            arr_76 [i_20] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_1))))));
            arr_77 [i_20] [i_20] [i_22] = ((/* implicit */long long int) var_14);
        }
        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) 
        {
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 19; i_24 += 4) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 4) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            arr_90 [i_20] = ((/* implicit */short) var_15);
                            arr_91 [i_24] [(unsigned char)0] [i_20] [i_20] [8U] [i_20] [i_24] |= ((/* implicit */_Bool) (~((~(arr_78 [i_20] [i_25])))));
                            var_34 ^= ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned int) arr_88 [i_20] [i_20] [i_20] [i_23] [i_23]);
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_36 = ((/* implicit */signed char) arr_82 [i_20] [i_20] [i_20] [i_20]);
            arr_94 [i_20] [i_20] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_89 [(_Bool)1] [i_27] [i_20] [(signed char)2] [i_20])) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_83 [i_20] [i_20]))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            arr_97 [i_20] [13LL] = ((((/* implicit */int) arr_69 [i_20])) > ((-(((/* implicit */int) var_0)))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_1))));
            arr_98 [10] [16U] &= (~(((/* implicit */int) var_6)));
            /* LoopNest 3 */
            for (short i_29 = 0; i_29 < 19; i_29 += 4) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (int i_31 = 0; i_31 < 19; i_31 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_102 [(unsigned short)4] [i_28] [i_29] [i_30] [i_30]))));
                            var_39 = ((/* implicit */int) (-(arr_106 [i_31] [i_31] [i_30] [i_29] [i_28] [i_20] [i_20])));
                        }
                    } 
                } 
            } 
        }
        var_40 = ((/* implicit */signed char) arr_102 [(_Bool)1] [(_Bool)1] [i_20] [i_20] [i_20]);
        /* LoopNest 3 */
        for (signed char i_32 = 0; i_32 < 19; i_32 += 4) 
        {
            for (unsigned short i_33 = 0; i_33 < 19; i_33 += 2) 
            {
                for (unsigned char i_34 = 0; i_34 < 19; i_34 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) arr_104 [i_20] [i_32] [i_33] [i_33]);
                            var_42 = ((/* implicit */_Bool) (~(-1627666007)));
                        }
                        var_43 = ((/* implicit */_Bool) arr_95 [i_20]);
                        var_44 = ((/* implicit */unsigned short) ((var_8) & (((/* implicit */int) var_7))));
                        var_45 *= ((/* implicit */_Bool) var_12);
                    }
                } 
            } 
        } 
    }
}
