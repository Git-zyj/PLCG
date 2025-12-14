/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208315
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)36092)) / (((/* implicit */int) (signed char)44))))) % (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    var_17 = ((/* implicit */int) ((max((var_9), (((/* implicit */unsigned int) (~(var_4)))))) >= (var_9)));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((((((/* implicit */_Bool) (signed char)58)) ? (-856480157) : (((/* implicit */int) arr_3 [i_1])))) + (2147483647))) << (((var_9) - (2260249339U)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((arr_1 [i_1 + 1] [i_2 + 1]) != (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) arr_5 [i_0])) : (arr_1 [i_1 - 1] [i_2 + 3])))));
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] |= ((/* implicit */short) (unsigned short)4413);
                                var_18 = ((/* implicit */int) ((unsigned char) ((unsigned int) arr_5 [i_0])));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */short) ((var_7) | (((/* implicit */long long int) ((((/* implicit */unsigned int) var_13)) & (var_9))))));
                                arr_23 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7] [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) -856480174))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((/* implicit */int) (unsigned short)61137)) : (((/* implicit */int) arr_17 [i_1 - 2] [i_5 + 1]))));
                }
                for (int i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25178))) : ((-9223372036854775807LL - 1LL))));
                    var_20 = ((/* implicit */unsigned char) 2097151U);
                    var_21 ^= ((/* implicit */unsigned long long int) (unsigned short)4417);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_10] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_1 + 1] [i_8 - 1])) != (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (short)26083)))))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_30 [i_8] [i_1 - 1] [i_9] [i_0] [(short)4])) - (arr_5 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) < (arr_5 [i_0])))) : (((((/* implicit */int) arr_8 [i_0])) / (-856480146)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            {
                                arr_41 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1])))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((short) (signed char)85)))));
                                arr_42 [i_0] [i_0] [i_0] [i_1] [i_11 - 1] [i_12] [(signed char)2] = ((/* implicit */int) (!(((/* implicit */_Bool) 1156302025))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)4407)) : (1156302043)));
                                arr_49 [i_0] [i_1] [i_11] [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) ((short) arr_8 [i_11 + 1]));
                            }
                        } 
                    } 
                    arr_50 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((~(-1479247312))) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    arr_51 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((8206485089528521955LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) <= ((~(((/* implicit */int) (signed char)-88))))));
                    arr_52 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) 828350347)) : (arr_35 [i_0] [i_0] [i_1 + 2] [i_11 - 1])));
                }
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    for (signed char i_17 = 3; i_17 < 9; i_17 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_43 [i_0] [5LL] [i_1] [i_16] [i_17] [i_17])) : (var_6)))), (arr_35 [i_17] [i_1] [i_16] [i_17]))), (((/* implicit */long long int) ((var_10) >= (856480147))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */int) min((arr_57 [i_0] [i_16] [i_1 - 2] [i_17 - 3]), (arr_57 [i_0] [i_1] [i_1 + 2] [i_17 - 2])))) == (((/* implicit */int) max((((/* implicit */unsigned char) arr_57 [i_0] [i_1] [i_1 - 1] [i_17 + 1])), (var_0))))));
                        }
                    } 
                } 
                arr_58 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1156302030)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_1 + 2])) ? (828350352) : (var_15)))) ? (((/* implicit */long long int) arr_20 [i_0] [i_0])) : ((~(1426673370224585025LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1])) << ((((+(8773698134852992373LL))) - (8773698134852992371LL))))))));
                var_27 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_0] [i_1 + 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_1 + 2]))))) << (((((((/* implicit */_Bool) var_14)) ? (arr_48 [i_0] [i_1] [i_1] [i_0] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)25206)) : (((/* implicit */int) (signed char)-91))))))) - (18188791671400470527ULL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_0] [i_1 + 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_1 + 2]))))) << (((((((((/* implicit */_Bool) var_14)) ? (arr_48 [i_0] [i_1] [i_1] [i_0] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)25206)) : (((/* implicit */int) (signed char)-91))))))) - (18188791671400470527ULL))) - (3742101702728435278ULL))))));
            }
        } 
    } 
}
