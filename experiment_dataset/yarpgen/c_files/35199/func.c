/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35199
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)4517)), (var_15)))) ? ((-(0U))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (-448771252)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1])), (var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3799790429U)) ? (((/* implicit */long long int) 3799790425U)) : (418326000562529484LL)))));
                            var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3799790429U)))))) : (2874944478U));
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_5] = ((((/* implicit */_Bool) 16040234026613774143ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (3226691921U));
                            var_20 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 1]);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_6] [i_6] [i_6] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 2])) ? (arr_9 [i_1 + 1]) : (arr_7 [i_2 - 1])));
                            var_21 = ((/* implicit */unsigned int) (signed char)48);
                            arr_25 [i_0 - 1] [i_0 - 1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)250))));
                            var_22 = ((/* implicit */unsigned int) (~(arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_2 - 3])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-5535)) : (((/* implicit */int) arr_19 [i_2] [i_7] [i_2 - 3] [i_3] [i_7]))))) : (arr_12 [i_2 + 2] [i_1 - 1] [i_2] [i_0 - 1] [i_7])))) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_2])) : ((+(((/* implicit */int) (unsigned short)15872))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((signed char) 5877241036149608576ULL)))));
                        }
                    }
                } 
            } 
            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(2519453808U))) >> (((max((var_15), (((/* implicit */unsigned int) var_2)))) - (3905861141U)))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)89))) ^ (arr_6 [i_0 - 2] [i_1]))), (((/* implicit */long long int) (unsigned short)65519)))) : (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) | (((/* implicit */int) arr_22 [i_0 + 1] [i_1] [i_1] [i_0] [i_1])))))));
            var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_2)), (min((var_4), (((/* implicit */long long int) arr_17 [(unsigned char)6] [i_0] [i_0] [i_1 - 1] [i_1 + 1] [(unsigned char)6])))))) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0 - 1] [i_0 - 1] [i_1 + 1])))));
            var_27 = ((/* implicit */unsigned char) arr_5 [i_1] [i_0] [i_0]);
        }
        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 1) 
        {
            var_28 = ((/* implicit */signed char) (+(0U)));
            arr_30 [i_8] [i_8] = ((/* implicit */long long int) arr_28 [i_8] [i_8 + 2] [i_8]);
            arr_31 [i_8] = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) 833918337636459380ULL))))), (min((arr_26 [i_0 + 1] [i_0] [i_8]), (((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_8 - 1] [i_8])))))))) / (var_16));
            arr_32 [i_0 + 1] [i_8] [i_8 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)15872), (((/* implicit */unsigned short) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_8]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2]))) | (min((((/* implicit */unsigned long long int) (unsigned char)0)), (8423079757165509040ULL)))))));
        }
        for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 4) 
        {
            var_29 = ((/* implicit */unsigned char) arr_27 [i_0 - 2] [i_9 + 1] [i_9 + 3] [i_9 + 1] [i_9]);
            arr_36 [i_0] [i_9] = ((/* implicit */unsigned int) (~(max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15114)) || (((/* implicit */_Bool) (unsigned short)49664))))), (((((/* implicit */int) var_7)) << (((var_4) + (2072828574618417228LL)))))))));
            var_30 = ((/* implicit */unsigned short) arr_13 [i_0 - 2] [i_9] [i_9] [i_9] [i_9]);
            var_31 = ((/* implicit */long long int) arr_23 [i_0 + 1] [i_0] [i_0] [i_9] [(signed char)0]);
        }
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            arr_40 [i_10] = ((/* implicit */long long int) ((unsigned char) 8423079757165509040ULL));
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 - 2] [i_0] [i_0] [i_0] [i_0]))) : (13034133544399214896ULL)));
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_28 [6U] [i_0 - 2] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_28 [0LL] [i_0 - 2] [i_0 - 2])) : (2132138482)))));
        arr_41 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2]))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_44 [(_Bool)1] |= ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((arr_43 [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)7390))))) : (arr_43 [i_11]));
        var_34 = ((/* implicit */unsigned short) (signed char)-1);
    }
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) arr_46 [i_12] [i_12]);
        arr_48 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_45 [i_12] [i_12]), (arr_47 [i_12])))))) ? (arr_46 [i_12] [i_12]) : ((-(((/* implicit */int) var_2))))));
    }
    var_36 = ((/* implicit */_Bool) var_8);
}
