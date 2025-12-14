/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32456
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
    var_15 = var_9;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min(((~(max((((/* implicit */long long int) var_1)), (var_11))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_17 = max((max((var_6), ((_Bool)1))), (var_8));
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 - 2])) >= (((/* implicit */int) arr_0 [i_1 - 2]))))) * ((~(((/* implicit */int) arr_0 [i_1 - 2]))))));
        }
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) arr_7 [5U]);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((arr_10 [i_2 - 1] [i_5 + 1]), (arr_10 [i_2 - 1] [i_5 + 1])));
                        arr_19 [i_6] [i_2 - 1] [(signed char)16] [i_2 - 1] = ((/* implicit */signed char) min((-101603873), (((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((int) min(((unsigned short)10600), (((/* implicit */unsigned short) (unsigned char)133)))))));
                        arr_23 [(signed char)13] [i_5 - 1] [(unsigned char)3] [(unsigned char)3] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])), (var_3)))) ? (min((((/* implicit */int) arr_10 [i_4] [i_5 + 1])), (var_0))) : (((/* implicit */int) arr_20 [i_7 + 1] [i_7] [(unsigned char)15] [2ULL] [i_7 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036317904896LL)))))));
                        var_21 = ((/* implicit */_Bool) min((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-66)))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_5 - 1] [i_7 + 2] [i_2])) > (((/* implicit */int) arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_5 + 2] [i_7 - 1] [i_7])))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_11 [i_2] [i_3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))), ((~(arr_3 [i_2] [i_3])))))) ? ((+(((/* implicit */int) ((unsigned short) (signed char)-66))))) : (max((((var_6) ? (((/* implicit */int) arr_20 [i_2] [i_3] [i_2] [i_5 + 2] [i_8])) : (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) arr_22 [i_2 - 1] [i_2 - 1] [i_2]))))))));
                        arr_28 [i_2 - 1] [i_3] [i_4] [i_5 + 3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-3230847224849479394LL)));
                    }
                    for (long long int i_9 = 4; i_9 < 16; i_9 += 3) 
                    {
                        arr_31 [i_2] [12LL] [i_2] [(_Bool)1] [i_5] [(_Bool)1] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2 - 1] [i_5 + 2])) >> (((/* implicit */int) arr_6 [i_2 - 1] [i_5 + 1]))))) ? (min((var_2), (var_0))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_5 + 3])) > (((/* implicit */int) arr_6 [i_2 - 1] [i_5 + 1]))))));
                        arr_32 [i_4] [(_Bool)1] = ((/* implicit */signed char) arr_6 [i_2] [i_3]);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) var_7);
                        var_24 = ((/* implicit */_Bool) max((((int) arr_21 [i_5 - 1] [i_3] [i_5 - 1] [i_5 + 2] [i_2 - 1] [i_10] [i_3])), ((+(max((2013347616), (((/* implicit */int) var_13))))))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_12 = 4; i_12 < 17; i_12 += 1) 
                    {
                        arr_42 [(_Bool)1] [7LL] [(unsigned short)9] [i_2] [i_2 - 1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_9) : (arr_30 [i_2] [i_2] [i_2] [i_11 + 1] [i_12 - 2]))));
                        var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_12] [(unsigned char)6] [(_Bool)1] [i_3] [i_2 - 1])) ? (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (unsigned char)145)) : (var_3))) : (((/* implicit */int) arr_10 [i_2 - 1] [i_11 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        arr_45 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_2] [i_3] [i_11 + 1]))) > (arr_39 [i_2] [i_2] [0ULL] [i_4] [i_11 + 1] [i_13] [i_13]))) ? (max((arr_39 [i_2] [i_3] [i_3] [i_4] [i_11 + 1] [i_3] [i_13]), (((/* implicit */long long int) var_10)))) : (max((arr_15 [i_2] [i_2 - 1]), (((/* implicit */long long int) arr_40 [i_2 - 1] [i_2 - 1] [14] [14U] [i_13]))))));
                        arr_46 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_2] [i_2 - 1])) ? (min((((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5879493839632129792LL))), (((/* implicit */long long int) arr_35 [i_4] [i_11 + 1] [i_13])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)136)) ? (-1988079177) : (((/* implicit */int) (_Bool)0)))) | ((~(((/* implicit */int) (unsigned char)201)))))))));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
                    {
                        arr_49 [i_14] [(_Bool)1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_33 [i_2 - 1] [i_11 + 1])) && (((/* implicit */_Bool) arr_39 [i_2 - 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11] [(signed char)7] [i_11 + 1])))));
                        var_26 -= ((/* implicit */long long int) min((6626390141282937265ULL), (((/* implicit */unsigned long long int) (unsigned char)154))));
                        var_27 = ((/* implicit */int) var_8);
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-110), ((signed char)53)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((522240) == (((/* implicit */int) (_Bool)0))))), (arr_18 [1] [i_11 + 1] [i_4] [1] [i_14] [(_Bool)1] [i_4])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [15U] [i_3] [i_4])) - (((/* implicit */int) var_10))))) * ((+(arr_24 [i_14] [i_11 + 1] [(short)6] [i_4] [i_3] [(short)5])))))));
                        var_29 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) arr_0 [i_2 - 1]))))), ((~(arr_3 [i_2] [i_3]))))))));
                    }
                    var_30 -= ((/* implicit */long long int) max((((unsigned int) (unsigned char)164)), (((/* implicit */unsigned int) ((_Bool) (unsigned char)133)))));
                }
                var_31 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) + (0U)))))) ? ((+(arr_44 [i_2 - 1] [i_2 - 1]))) : (1226326582));
            }
            var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2 - 1]))) > (((((-3230847224849479394LL) >= (((/* implicit */long long int) 1762244063U)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7270220538201237385LL)))));
        }
        for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            arr_54 [(unsigned char)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & ((~(((var_2) | (((/* implicit */int) (_Bool)0))))))));
            var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 1] [i_15] [i_2] [i_2]))) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) >= (4294967282U)))) : ((((_Bool)1) ? (1424453920) : (((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) max((arr_47 [i_2 - 1] [i_2] [i_15] [i_15]), (arr_47 [i_15] [i_15] [i_15] [i_15]))))));
            arr_55 [(_Bool)1] [i_15] [i_2] = ((/* implicit */int) (unsigned char)74);
        }
        arr_56 [i_2] [i_2] = ((/* implicit */short) (unsigned char)186);
        var_34 = ((/* implicit */long long int) (unsigned char)101);
    }
    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6))))) + (((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) var_13)))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
}
