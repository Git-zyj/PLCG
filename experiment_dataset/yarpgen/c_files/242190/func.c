/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242190
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (signed char)85))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) (~(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) * (16538040168686395846ULL))), (((/* implicit */unsigned long long int) (~(-2472653067606429604LL))))))));
        arr_2 [i_0 + 1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) max(((unsigned char)181), ((unsigned char)59)))) != (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_0 [i_0 + 1]))))))));
        var_16 = arr_0 [i_0 - 1];
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1 + 1])), (((((/* implicit */_Bool) (~(673539158858170654ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((~(4031819614U)))))));
        var_18 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) arr_0 [i_1]))))), (((arr_4 [i_1 - 1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44107))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (-2472653067606429600LL) : (((/* implicit */long long int) 3292446913U)))), (((/* implicit */long long int) ((4294967292U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))))));
    }
    for (signed char i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) (~((~(673539158858170658ULL)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_18 [i_4] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */int) (((~(arr_4 [i_5] [i_4]))) << ((((~(((/* implicit */int) var_9)))) + (25062)))));
                        arr_19 [i_2 + 1] [i_4] [i_5] [i_6] = (~(arr_8 [i_2] [i_2] [i_2]));
                    }
                    arr_20 [i_4] [7LL] = ((/* implicit */_Bool) var_1);
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_2 + 1] [i_3] [i_3] [i_4] [i_5])))) | (14606055436362163569ULL)));
                }
                for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_8] [i_3] [i_4] [i_2 - 1] [i_8] [i_2 + 1] [i_4] = ((/* implicit */unsigned short) ((((arr_4 [(_Bool)1] [i_7 - 2]) == (((/* implicit */unsigned long long int) 2258384979U)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_2 + 1] [i_3] [i_4]) : (arr_17 [i_2] [i_2] [i_4 + 1] [i_7] [i_7] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) 134217664U))));
                        var_21 = (~(((/* implicit */int) arr_9 [i_4] [i_3] [i_4] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_10 [i_9] [i_9]))) - (((((/* implicit */_Bool) arr_8 [i_7 + 3] [i_7] [i_7 + 3])) ? (9011217260930145385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_4] [i_7] [i_7])))))));
                        var_23 *= ((/* implicit */long long int) ((12978095633395687760ULL) / (((/* implicit */unsigned long long int) -3960405299874026519LL))));
                        arr_29 [i_2] [i_4] [i_2 - 1] [10LL] [i_2] [i_2] = ((int) arr_8 [i_7 + 1] [i_9] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_22 [i_2 - 1] [i_3] [i_4 + 1] [i_7 - 1])))) >= (((/* implicit */int) ((unsigned char) var_10)))));
                        var_25 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_7 [i_3] [i_3])))) <= ((~(((/* implicit */int) arr_11 [i_2 - 1] [i_10] [i_4 + 1]))))));
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_22 [i_2 + 1] [i_4 + 1] [i_4 + 1] [i_7 + 3]))));
                        var_27 = ((/* implicit */short) (~((~(arr_15 [i_4] [i_3] [i_7 + 2] [i_11])))));
                        arr_34 [i_4] [i_2] [i_7] [i_7 - 2] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_21 [(_Bool)1] [i_4] [i_4] [i_4 + 1])))));
                        arr_35 [i_2] [i_2] [i_2 + 1] [i_4] [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_4] [i_11] [i_4] [i_7]))));
                        var_28 = ((/* implicit */int) (~(arr_28 [i_7 + 1] [i_4] [i_3] [i_7 - 2] [(signed char)5])));
                    }
                    arr_36 [i_4] = ((/* implicit */unsigned short) (~(263147663U)));
                    arr_37 [i_2] [i_4] [i_2 - 1] [i_2 + 1] = ((/* implicit */int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_7])))) < (((/* implicit */int) ((unsigned short) arr_7 [i_2] [i_2])))));
                }
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */int) arr_3 [i_4]);
                    arr_40 [i_2] [i_2 + 1] [i_3] [i_2 - 1] &= ((/* implicit */int) arr_25 [i_2 + 1] [i_3] [i_4] [i_4 + 1] [i_2 - 1]);
                }
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                {
                    var_30 *= ((/* implicit */_Bool) var_9);
                    var_31 = ((/* implicit */unsigned short) (~(2046U)));
                }
                arr_44 [i_4] [i_3] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54898)) ? (arr_23 [i_2] [i_4] [i_3] [i_4]) : (((/* implicit */long long int) (+(4031819614U))))));
                /* LoopSeq 2 */
                for (unsigned short i_14 = 2; i_14 < 11; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 2; i_15 < 9; i_15 += 2) 
                    {
                        arr_50 [i_4] [i_4] [i_4 + 1] [i_14 - 1] = ((/* implicit */short) arr_33 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]);
                        var_32 = (~((~(4294965250U))));
                        arr_51 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4 + 1] [i_4] [i_15 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22584)) ? (((/* implicit */int) arr_22 [i_2 - 1] [i_2 + 1] [i_4 + 1] [i_14 - 1])) : (((/* implicit */int) arr_22 [i_2 - 1] [i_2 + 1] [i_4 + 1] [i_14 - 1]))));
                    }
                    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)184))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14429))) : (3292446913U))))));
                }
                for (unsigned short i_16 = 2; i_16 < 11; i_16 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_2] [i_4] [i_4 + 1] [i_2])) << (((((((/* implicit */_Bool) arr_11 [i_16 - 2] [i_16 - 1] [i_16])) ? (((/* implicit */int) (unsigned short)22584)) : (((/* implicit */int) arr_3 [i_4])))) - (22560)))));
                    arr_54 [i_4] = ((/* implicit */unsigned int) (~(var_6)));
                    /* LoopSeq 1 */
                    for (int i_17 = 4; i_17 < 11; i_17 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) var_1)) : (arr_24 [i_2 - 1])));
                        var_36 = ((/* implicit */unsigned short) arr_8 [i_4 + 1] [i_16] [i_16]);
                    }
                }
            }
            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_28 [i_2] [i_3] [i_2 + 1] [i_3] [i_3]))));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) arr_46 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_3]))));
            arr_59 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_3 [i_2 - 1]);
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_39 = ((/* implicit */unsigned short) ((signed char) arr_6 [i_2]));
            var_40 = ((/* implicit */int) var_7);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            arr_66 [i_19] [i_19] = ((/* implicit */unsigned short) ((int) arr_30 [i_19] [i_19]));
            /* LoopSeq 1 */
            for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
            {
                arr_70 [i_2] [i_19] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 3292446913U))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)30429)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) ((1930505905) == (arr_16 [i_2] [i_2] [i_19] [i_2] [i_20]))))));
                var_41 = ((/* implicit */unsigned int) var_7);
            }
            arr_71 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_23 [i_2 - 1] [i_19] [i_2] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_19] [i_19] [i_19])))))) : (3474087591U)));
            arr_72 [i_19] [i_19] = ((/* implicit */long long int) arr_61 [i_2]);
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 4; i_21 < 10; i_21 += 1) 
        {
            arr_75 [i_21] = ((/* implicit */_Bool) (~(((820879679U) >> (((((/* implicit */int) arr_30 [i_2 + 1] [i_21])) - (47867)))))));
            var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35107))));
            arr_76 [i_2 - 1] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274873712640ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_2] [i_21] [i_2 - 1])))))) ? (((/* implicit */int) (unsigned short)9008)) : ((~(((/* implicit */int) var_11))))));
        }
        var_43 = ((/* implicit */short) arr_14 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]);
    }
    for (signed char i_22 = 1; i_22 < 11; i_22 += 4) /* same iter space */
    {
        arr_79 [i_22] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_46 [i_22] [i_22] [i_22] [i_22] [i_22 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)29527))))))), (arr_33 [i_22 + 1] [i_22] [i_22] [i_22] [i_22])));
        var_44 *= ((/* implicit */unsigned int) arr_49 [2U] [i_22] [i_22 - 1] [i_22] [i_22] [i_22]);
    }
    var_45 = ((/* implicit */int) 4294967295U);
}
