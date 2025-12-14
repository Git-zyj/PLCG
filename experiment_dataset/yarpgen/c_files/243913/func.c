/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243913
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
    var_14 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))), ((-(((/* implicit */int) (unsigned char)0))))))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(signed char)1])) || (((/* implicit */_Bool) 0)))) ? (-11) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-122)) || (((/* implicit */_Bool) 0))))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_2))))) | (((/* implicit */int) arr_4 [i_1]))));
            arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) arr_6 [i_1] [i_2 + 2]))));
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((522240LL) - (((/* implicit */long long int) 199337014))));
            arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned short)18384))))) || (((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 2086686027))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) & (-7439280076750675231LL)));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 3; i_4 < 19; i_4 += 4) /* same iter space */
            {
                var_18 = ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)178))) || (((/* implicit */_Bool) arr_1 [i_1]))))) / (((/* implicit */int) arr_7 [i_4] [i_1] [i_1])));
                arr_16 [i_1] |= ((/* implicit */unsigned char) arr_10 [i_1] [i_1]);
                var_19 = (~(((/* implicit */int) ((signed char) arr_1 [i_1]))));
            }
            for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */int) -8044378695124946073LL);
                var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)255)) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)224)))))) & (((/* implicit */int) (unsigned char)29))));
                arr_19 [(unsigned short)19] [i_5] [i_3] [(unsigned short)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((199337014) / (((/* implicit */int) min(((unsigned short)16), (((/* implicit */unsigned short) (unsigned char)252)))))))) ? (((((/* implicit */_Bool) arr_1 [i_5 - 3])) ? (((/* implicit */int) arr_0 [i_5 + 1])) : (((/* implicit */int) (unsigned short)16658)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29)))))));
            }
            /* vectorizable */
            for (short i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
                var_22 = ((/* implicit */int) (signed char)89);
                var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_6] [i_6 + 1] [i_6 - 1]))));
                var_24 = ((/* implicit */unsigned char) (+(arr_11 [i_6] [i_6 - 1] [i_6 - 3])));
            }
        }
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_25 = ((/* implicit */long long int) (+(var_0)));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-126)), ((short)29186)));
                        var_27 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((var_9) + (((/* implicit */int) (signed char)127))))) ? ((+(((/* implicit */int) arr_4 [i_7])))) : (((/* implicit */int) arr_0 [i_9 + 1])))), ((~(((((/* implicit */_Bool) 459004205365290213LL)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_7 [i_1] [(unsigned short)11] [i_8]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            var_28 += ((/* implicit */unsigned char) min((((((/* implicit */int) var_3)) & (((((/* implicit */int) (unsigned char)255)) % (2061104657))))), ((~((~(((/* implicit */int) var_2))))))));
                            var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [16U] [16U] [16U]))));
                            arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) & (((/* implicit */int) arr_6 [i_1] [i_1]))));
                            var_30 = arr_23 [i_7] [i_7];
                            arr_36 [i_1] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (-1) : (((/* implicit */int) (unsigned short)4))))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_7]))) : (-522241LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48897)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_30 [i_1] [i_9] [i_9] [i_9] [i_10 - 2])), ((unsigned short)65520)))) : (((/* implicit */int) (unsigned short)48897))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967295U)))) ? (((/* implicit */int) arr_5 [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_1] [i_7])))))))) + (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [(unsigned char)11] [i_8])), (3856849377069377269LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_1] [i_7] [i_8 - 1] [i_9] [i_7]))) : (((long long int) (unsigned char)135))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_38 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_9 + 1] [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 + 2]))) : (arr_29 [i_11] [i_9 + 1] [i_11] [i_9 - 1] [i_9 - 1]))), (((/* implicit */long long int) arr_37 [i_7] [i_7] [i_7] [4LL])))))));
                        }
                        arr_39 [i_1] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-12)) ? ((~(((/* implicit */int) (unsigned short)24)))) : (((/* implicit */int) arr_37 [i_9] [i_9 - 2] [i_8 - 1] [i_8]))));
                    }
                } 
            } 
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (((long long int) ((((/* implicit */_Bool) (unsigned short)51194)) && (((/* implicit */_Bool) (unsigned short)65535)))))));
        }
        var_34 = ((/* implicit */signed char) ((unsigned char) (unsigned char)255));
        var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_1]) : (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1]))))) || (((((/* implicit */_Bool) 3633045009U)) || (((/* implicit */_Bool) (unsigned short)33227)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (min((((((/* implicit */_Bool) var_8)) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)13] [(signed char)13] [(signed char)13]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
    }
}
