/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238258
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((_Bool) ((signed char) arr_2 [i_1 - 1] [i_1])));
                var_21 *= ((_Bool) arr_4 [i_1] [i_0]);
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */int) arr_2 [i_1 + 2] [i_0])) + (((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) (!(var_3)))))) + (((/* implicit */int) arr_1 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] [i_0] = ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47817))) : (4294967295U))) | ((-(4294967295U))))) < (((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_0]))) : (4294967295U))));
                    arr_9 [16U] [i_0] [i_0] = ((/* implicit */_Bool) (((~(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_16))))) + (((((/* implicit */_Bool) ((int) 7U))) ? (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_4))))) : (max((1835402744U), (((/* implicit */unsigned int) var_4))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_22 = ((/* implicit */int) ((4294967288U) != (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))))));
                    arr_14 [i_0] [i_0] [i_0] = arr_2 [i_1] [(_Bool)1];
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)56721)))) & (((((/* implicit */_Bool) (signed char)127)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [(unsigned short)3])))))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_17 [i_0] [i_1] [i_0]))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1740491949)) ? (((2210390498970335426ULL) << (((4294967295U) - (4294967289U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2])))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 3])))) ? ((~(((/* implicit */int) arr_20 [i_6] [i_0] [i_1 + 3])))) : (((/* implicit */int) ((unsigned short) 7U)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        var_28 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_6] [(_Bool)1] [(_Bool)1] [i_1 + 3]))));
                    }
                    for (signed char i_8 = 3; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((var_1) ? (((/* implicit */int) arr_17 [i_0] [i_1 + 2] [i_0])) : (((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))))) >= (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (4294967288U))) ? (max((((/* implicit */unsigned int) (signed char)127)), (arr_7 [i_8 + 1] [i_0] [i_0] [(_Bool)1]))) : (((var_6) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))))));
                        var_30 = (!(((/* implicit */_Bool) (((_Bool)1) ? ((+(var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 3; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) (~(arr_25 [i_9 - 1] [i_9 + 1] [i_1 + 1] [i_1 + 3])));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) (unsigned short)32736);
                            var_33 = ((/* implicit */unsigned long long int) 829388862U);
                        }
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)620)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)32799))))) <= (3465578433U)));
                            var_35 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((829388862U) <= (((/* implicit */unsigned int) arr_35 [18ULL] [i_9] [i_6] [i_1] [i_0] [18ULL]))))));
                            var_36 = ((/* implicit */int) ((((/* implicit */int) arr_28 [i_11] [i_9 + 3] [i_9 - 3] [i_1 + 3])) > (((/* implicit */int) arr_28 [i_9 - 3] [i_9 + 3] [i_1 + 3] [i_1 + 3]))));
                            arr_37 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) + (((((/* implicit */_Bool) 4294967286U)) ? (2173623409U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38982)))))));
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 640556976U))));
                        }
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_38 = arr_25 [i_9 + 4] [(short)12] [i_1 + 2] [(short)12];
                            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)63))));
                        }
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_13 = 4; i_13 < 23; i_13 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (long long int i_16 = 1; i_16 < 22; i_16 += 1) 
                {
                    {
                        arr_52 [i_15] [i_16] [i_13] = (-(((/* implicit */int) (unsigned short)50083)));
                        arr_53 [i_16] [i_15] [i_14] [i_16] = ((/* implicit */_Bool) (~((((!(var_10))) ? (((/* implicit */int) arr_42 [i_13 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_13] [i_15] [i_14] [i_13])))))))));
                        var_40 = ((/* implicit */_Bool) max((((((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) min(((unsigned short)5118), (((/* implicit */unsigned short) (signed char)63))))))), (((((/* implicit */int) (unsigned short)6579)) ^ (((/* implicit */int) arr_43 [i_16 - 1] [i_13 - 3]))))));
                    }
                } 
            } 
        } 
        var_41 ^= ((/* implicit */signed char) ((((((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))) + (((/* implicit */unsigned int) ((/* implicit */int) (((+(5466252333804691038ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)23520), (((/* implicit */short) (signed char)89))))))))))));
        var_42 = ((/* implicit */unsigned int) arr_50 [i_13 - 3] [i_13 - 2] [i_13 - 4] [i_13]);
        arr_54 [i_13 - 3] = (short)0;
    }
    /* vectorizable */
    for (signed char i_17 = 4; i_17 < 23; i_17 += 1) /* same iter space */
    {
        var_43 = var_13;
        arr_57 [i_17 - 3] [i_17 - 3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_48 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 3])) : (((/* implicit */int) arr_48 [i_17 - 1] [i_17 + 1] [i_17 - 3] [i_17 - 3]))));
        var_44 = ((/* implicit */long long int) var_6);
        var_45 = ((/* implicit */unsigned short) -9223372036854775805LL);
        var_46 -= ((((/* implicit */_Bool) arr_51 [i_17 - 3] [(signed char)18] [(signed char)18] [i_17 - 3])) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)6579)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_14)))));
    }
    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)50510)), ((+(((/* implicit */int) var_13))))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_6))))))))))));
    var_48 = ((/* implicit */short) (!(((/* implicit */_Bool) 4155731264U))));
}
