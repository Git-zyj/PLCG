/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246989
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_17), (((/* implicit */short) arr_1 [i_0]))))), (min((((/* implicit */long long int) 2808465663U)), (-1LL)))))) ? (min((((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)23)))), (arr_0 [i_0]))) : ((~(((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_1 [i_0])))))))));
        var_21 = ((/* implicit */unsigned short) var_10);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
            var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (2993485360U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))))));
            /* LoopSeq 3 */
            for (short i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                var_23 |= ((((4294967286U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [(short)0] [i_2 + 2]))))) ? (((((/* implicit */_Bool) arr_3 [(unsigned short)10] [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) (unsigned char)223)))))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)12])) ? (((var_15) ? (arr_0 [i_2 - 1]) : (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [i_0])))) : (((/* implicit */int) arr_1 [8U])))));
                arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max(((+(((7258245960950605664ULL) / (((/* implicit */unsigned long long int) -1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-180390296694774500LL))))))));
                arr_10 [i_1] [i_1] [i_0] = ((/* implicit */int) (((-(arr_4 [i_2 + 3]))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_2 - 2]))) : (var_4)))));
            }
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_1] [i_1] [i_3] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) 25ULL)))))))) | (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) - (9264657605902737214ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_1]))) : (arr_13 [i_1] [i_1] [i_1] [i_1]))))))));
                    var_24 ^= ((/* implicit */_Bool) ((min((arr_7 [i_0] [2ULL] [6LL]), (arr_7 [i_0] [i_0] [(_Bool)1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [(signed char)4] [(signed char)4] [i_3] [i_4 + 1])) >= (var_10)))))));
                }
                arr_16 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1] [i_3]);
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_23 [i_1] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_1]);
                            arr_24 [(_Bool)1] [i_1] [(_Bool)1] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_1 [i_5]))))) & (arr_0 [i_0])));
                            var_25 = ((/* implicit */unsigned short) arr_20 [8] [i_1] [i_1] [i_5] [i_6] [i_1]);
                            arr_25 [i_0] [i_1] [i_3] [i_5] [i_6] = ((/* implicit */signed char) max((arr_19 [i_0] [i_3] [i_1] [i_6]), (max((arr_19 [i_6] [i_1] [i_1] [i_0]), (((/* implicit */short) arr_8 [i_0] [i_0] [i_1] [i_5]))))));
                        }
                    } 
                } 
            }
            for (signed char i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
            {
                var_26 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
                arr_28 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_1])))));
            }
            var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_20 [9U] [i_1] [i_0] [i_1] [i_1] [i_1])))), (((/* implicit */int) min((arr_11 [10U] [i_1] [i_1]), (arr_11 [i_0] [i_0] [i_1]))))));
        }
        arr_29 [i_0] [(short)0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1356221320)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) (signed char)124))))))) >= (((long long int) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_2 [(signed char)14] [i_0])))))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) ((signed char) ((arr_26 [i_8] [i_8]) || (arr_26 [i_8] [i_8]))));
        arr_33 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_8])) ? (((((/* implicit */_Bool) (short)6857)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8])))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) arr_5 [i_8] [i_8])) : (((/* implicit */int) var_19))))) ? (var_13) : (((/* implicit */int) ((signed char) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        arr_34 [i_8] = ((((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_32 [i_8]))) > (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)38546), (arr_14 [9ULL] [i_8]))))));
        var_29 = ((/* implicit */_Bool) arr_32 [i_8]);
    }
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_10 = 2; i_10 < 22; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    {
                        arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_37 [i_12] [i_10 - 2]);
                        arr_47 [1] [(short)14] [i_10 + 2] [(signed char)14] [i_12] = ((/* implicit */unsigned char) min(((+(((var_4) & (((/* implicit */long long int) arr_43 [i_9] [i_10] [i_11] [i_12])))))), (((((((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [i_10] [i_9]))) + (arr_35 [(_Bool)0] [i_12]))) + (9223372036854775807LL))) << ((((+(((/* implicit */int) arr_36 [i_9])))) - (5758)))))));
                        arr_48 [i_9] [i_9] [i_9] [7LL] [7LL] [i_9] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_9] [i_11] [i_12]))))), (((((/* implicit */_Bool) max((arr_37 [i_12] [i_9]), (((/* implicit */int) (signed char)-98))))) ? (((long long int) var_4)) : (((/* implicit */long long int) arr_37 [i_9] [i_10 + 2]))))));
                        arr_49 [i_12] [i_11] [i_10] [i_10] [i_9] = ((/* implicit */long long int) 4376475721587823004ULL);
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((2410008989U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))))));
    }
    for (unsigned char i_13 = 2; i_13 < 24; i_13 += 4) 
    {
        arr_52 [i_13] = ((/* implicit */signed char) ((min((arr_51 [(unsigned char)8]), (max((arr_51 [i_13]), (((/* implicit */long long int) (short)-27238)))))) < (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_50 [i_13])) ? (arr_51 [i_13]) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))));
        arr_53 [i_13] = ((/* implicit */long long int) ((unsigned long long int) var_6));
        arr_54 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_51 [i_13])));
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_18)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (((long long int) (~(var_12))))));
    var_32 = ((/* implicit */int) var_10);
}
