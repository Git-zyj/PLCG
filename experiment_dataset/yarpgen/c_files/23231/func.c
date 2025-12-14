/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23231
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) arr_2 [i_4] [i_4]);
                                arr_14 [i_0] [(_Bool)1] [i_2] [(unsigned short)0] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32465)) ? (1402323986U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23263)))))) : (arr_5 [i_1]))))));
                                var_11 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [5U] [i_1] [i_2] [i_3] [(signed char)4] [7LL] [i_4 - 2]))))))))) ? (((/* implicit */int) (short)-26575)) : (((((/* implicit */int) arr_10 [i_0])) >> (((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_9 [i_4] [i_1] [i_4] [i_3] [i_2] [i_3])))) - (180)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) 1948563465))));
                                arr_22 [i_5] = ((/* implicit */signed char) (unsigned char)180);
                            }
                        } 
                    } 
                    var_13 -= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(signed char)2])) <= ((((_Bool)0) ? (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (short)-4193))))) : (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_3)) - (206)))))))));
                    var_14 ^= ((/* implicit */short) var_1);
                    arr_23 [i_0] [i_0] [(short)9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [8ULL] [i_0] [i_1] [i_2] [i_2]) ? (((/* implicit */int) arr_19 [4ULL] [6U] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_19 [2U] [i_1] [i_2] [i_2] [i_0]))))) ? ((-(((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-20065))) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -353548867))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((-1888399637), (((/* implicit */int) arr_28 [i_7 + 2] [i_7 + 2]))))), (((((/* implicit */_Bool) -1655911516290798978LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (arr_26 [i_7])))));
                    arr_33 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_7 + 1])) * (((/* implicit */int) (unsigned short)1536))))) ? (max((((((/* implicit */_Bool) arr_25 [11U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12348))) : (arr_29 [i_9] [i_7] [i_7 - 2]))), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12360)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_6))));
        var_17 = ((/* implicit */long long int) max((var_17), (max((((/* implicit */long long int) arr_31 [i_7])), ((~(var_8)))))));
    }
    for (signed char i_10 = 2; i_10 < 22; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    arr_40 [i_10] [i_10] [9LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (+(1181805033)))) & (var_8))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10 + 1])))));
                    arr_41 [i_12] [i_11] [5LL] = arr_34 [9U] [i_11];
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) > (((((/* implicit */_Bool) 9781390762027507108ULL)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_1)))))))) : (min((((/* implicit */unsigned int) arr_35 [i_13 + 2])), (1909950862U)))));
            /* LoopSeq 3 */
            for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 1; i_15 < 23; i_15 += 4) 
                {
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned short) arr_27 [i_16] [i_16]);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) 254031719)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)168)))))))))));
                            var_21 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (unsigned char)248)) << (((((/* implicit */int) arr_30 [i_13])) - (37390))))) & (((/* implicit */int) arr_24 [i_10] [i_13]))))));
                            arr_53 [i_10] [i_10] [i_13] [i_15 + 1] [i_16] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_43 [(unsigned char)3])) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61861))) | (11075229045661374737ULL)))));
                        }
                    } 
                } 
                arr_54 [i_13] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_13])) ? (arr_47 [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7563)))))), ((~(arr_37 [i_10 + 2])))));
            }
            for (short i_17 = 0; i_17 < 24; i_17 += 4) /* same iter space */
            {
                arr_57 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_13] [i_13])) ? (((/* implicit */int) arr_28 [(unsigned char)1] [i_10 + 2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((max((arr_38 [i_17] [i_17] [i_17] [15]), (((/* implicit */unsigned int) -1402535486)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))))))));
                var_22 *= ((/* implicit */unsigned long long int) 2097654U);
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3972967328U))));
            }
            for (short i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
            {
                arr_60 [i_13] [i_10] [i_13 + 1] [i_18] = ((/* implicit */unsigned short) arr_25 [i_18]);
                var_24 = ((/* implicit */int) 3641651974U);
                arr_61 [i_13] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (((_Bool)1) ? ((((-(1085200127162317907ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_39 [i_10] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_24 [i_10 + 1] [i_13]))))) ? (((((/* implicit */_Bool) (signed char)-72)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10 - 2] [i_13 - 1] [i_18]))))))));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -1377575089)) ? (arr_26 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_10] [i_10] [i_10]))))))) << (((((/* implicit */int) var_4)) - (207)))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    for (short i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_49 [9ULL] [i_13] [i_18] [i_13]))));
                            var_27 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_31 [i_18])))));
                        }
                    } 
                } 
            }
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_58 [i_10] [i_10 + 2] [i_10])))) ? ((~(((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (short)-519))))), (445057221473229029ULL))))));
        var_29 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)44202)) ? (((/* implicit */int) (short)21132)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)46013)) : (((/* implicit */int) (unsigned short)41962))))))) / (arr_37 [i_10 + 1])));
    }
}
