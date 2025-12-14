/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224455
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_2] = ((/* implicit */long long int) ((arr_6 [i_2] [i_2] [i_2 + 1]) > (arr_6 [i_1] [i_1] [i_2 + 1])));
                                arr_14 [i_0 + 2] [11LL] [i_0 - 1] [i_2] [i_0 + 2] = ((/* implicit */_Bool) -1239939511);
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) (short)10175)) >> (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */int) arr_12 [i_2] [i_0 - 1])) : (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */_Bool) (-(arr_15 [i_0] [i_1] [i_2] [i_6 - 3] [i_6])));
                                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-112))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 1; i_7 < 11; i_7 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) min((((/* implicit */long long int) 524287)), (18014398509481983LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)65))) : (max((((/* implicit */long long int) 4294967295U)), (-2175775174313968316LL)))))));
                    var_25 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
                    var_26 = ((/* implicit */unsigned char) arr_21 [i_0 + 3] [i_1] [i_7 + 1]);
                    arr_22 [i_0] [i_1] |= ((/* implicit */signed char) max((((/* implicit */int) arr_10 [i_7] [i_1] [i_0])), (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8)))) ^ (max((-1), (((/* implicit */int) (signed char)88))))))));
                    arr_23 [i_1] [i_1] [i_7] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)157)) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)6] [i_7]))))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (1066684405U)))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1]))) - (var_19)));
                    arr_27 [i_0] [i_1] [i_8 + 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [(unsigned char)7])) ^ (var_3)));
                    arr_28 [i_0] [i_1] [i_8] = ((/* implicit */signed char) ((unsigned short) arr_24 [i_8 - 1] [i_1] [i_8 + 2] [4LL]));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_8 + 1] [i_1] [i_0] [i_0])) * (((/* implicit */int) (short)15))));
                }
                for (int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-15285)), (2435696828U)));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0 + 2])) ? (arr_16 [i_0] [i_0 + 1]) : (arr_16 [i_9] [i_0 - 1])))) != (((arr_19 [(short)2] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_20 [i_1])) / (arr_4 [i_0])))))) ? (((int) ((((/* implicit */int) arr_3 [i_9 - 1])) / (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) min((((short) (unsigned short)40775)), (((/* implicit */short) (signed char)-22)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) -648406568))));
                                var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((arr_29 [i_0 + 3] [i_9 + 2] [i_10 + 1]), (((/* implicit */unsigned int) var_17))))) * (max((((/* implicit */unsigned long long int) -1929030875)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-39)))) : ((+(var_3)))));
                            }
                        } 
                    } 
                }
                arr_37 [i_0] [8U] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_24 [i_0 + 2] [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3920870734032704102LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_0 - 1] [i_1] [i_1] [i_0] [3LL])), (-1LL)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 2; i_12 < 12; i_12 += 2) 
    {
        for (signed char i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            {
                arr_44 [i_12] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (signed char)-101)))), ((((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((2097151) - (((/* implicit */int) var_8))))))));
                var_34 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (11141158470464513511ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)127))))))) - (18446744073709551615ULL)));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 12; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            {
                                arr_51 [i_15] [i_15] [i_14 + 1] [i_13] [i_13 - 1] [i_15] |= ((/* implicit */int) (_Bool)1);
                                var_35 = var_13;
                                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22506)) ? (-6570338576924364917LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) 762409820U))) ? (var_10) : (((/* implicit */long long int) 278157664U)))) != (arr_19 [i_13] [i_12] [i_12 + 1])));
            }
        } 
    } 
}
