/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216397
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [(signed char)10] [i_3] [(signed char)10] [13LL] [i_3] [i_1] = ((/* implicit */unsigned short) (+(var_8)));
                                arr_15 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (signed char)18))))), (arr_7 [i_1])))));
                                arr_16 [i_4] [i_3] [16U] [16U] [i_1] [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) ((signed char) ((unsigned int) 3959261742456982699LL)))), (((((((/* implicit */int) arr_12 [13LL] [i_0] [13LL] [i_2] [i_3] [i_4] [i_4])) >= (((/* implicit */int) var_13)))) ? (((((/* implicit */int) (signed char)18)) << (((((/* implicit */int) var_15)) - (74))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))));
                                arr_17 [i_0] [(_Bool)1] [i_0] [i_1] [(unsigned short)15] [i_0] [i_0] = (((-(((long long int) (unsigned short)10191)))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)2)) <= (((/* implicit */int) arr_11 [i_1]))))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((min((max(((unsigned short)10206), (((/* implicit */unsigned short) (unsigned char)192)))), (((/* implicit */unsigned short) arr_9 [i_2 + 1] [i_2] [(signed char)0] [i_3 - 1])))), (((/* implicit */unsigned short) (!(var_6)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_6] [i_0] [i_6] [i_1] [i_5] [i_2] = ((/* implicit */unsigned char) arr_21 [(unsigned short)12] [i_6] [i_2 + 1] [i_6] [i_1] [i_2 + 1]);
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0] [i_6] [i_2] [(_Bool)1] [i_5]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_18 += min((min((((/* implicit */unsigned short) (!((_Bool)1)))), (arr_4 [i_7] [i_1]))), (((/* implicit */unsigned short) (!((_Bool)1)))));
                        arr_26 [i_1] [(signed char)16] [i_7] = ((/* implicit */unsigned int) (unsigned char)64);
                        var_19 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) (unsigned short)65524)), (arr_1 [(signed char)16]))), (((/* implicit */unsigned int) var_10))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-79)), (6059149445205033877LL)))) ? ((+(6414448648218733733LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)90)))))))));
                        var_20 *= ((/* implicit */unsigned char) 22ULL);
                    }
                    var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [(unsigned char)12] [(signed char)16] [i_0] [4LL]))))) - (min((var_7), (((/* implicit */unsigned int) arr_24 [i_2 + 1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_9]))) > (var_3))))))));
                arr_31 [i_8] [6ULL] [i_8] = ((/* implicit */unsigned char) var_5);
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_37 [i_11] [i_11] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) min((max((max((((/* implicit */long long int) arr_9 [i_8] [i_8] [i_9] [i_8])), (-6414448648218733731LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50708))) >= (var_12)))))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)14828)) < (((/* implicit */int) var_10))))))))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 1; i_12 < 17; i_12 += 2) 
                        {
                            arr_40 [i_8] [(signed char)9] [(signed char)9] [(signed char)9] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_15), (arr_25 [i_12] [i_12] [12LL] [i_12 + 1] [i_12]))))));
                            arr_41 [i_9] [9ULL] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((9325141997994193889ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))))))))) / (((long long int) var_10))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned char)108))));
                        }
                        arr_42 [i_8] [i_9] [i_9] [i_10] [(unsigned char)11] = ((/* implicit */signed char) 3424566893470294118ULL);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned long long int) (signed char)18);
                                arr_50 [i_13] [i_10] = ((/* implicit */signed char) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)79))));
                                arr_51 [i_13] [i_13] [i_10] [i_9] [(unsigned char)4] [i_13] = ((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)83)), (((((/* implicit */int) (unsigned short)24)) * (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) var_15))));
                                arr_52 [i_10] [(unsigned short)3] [i_13] [15LL] [i_14] = -6414448648218733731LL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_15 = 1; i_15 < 17; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_10])), (arr_22 [i_8] [i_9] [i_10] [(_Bool)1] [i_8]))))) | (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_57 [i_8] [i_10] [i_10] [i_15] [i_16] [10U] [(unsigned char)8]))))) : (max((4799266171960423638LL), (((/* implicit */long long int) arr_3 [i_15 - 1]))))));
                                arr_58 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = max((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned char)58)), (6249754135992479593LL))), (var_3)))), (var_5));
                                var_26 -= ((/* implicit */_Bool) arr_45 [i_16] [(signed char)12] [i_16]);
                                arr_59 [i_8] [i_16] [i_10] = ((/* implicit */unsigned char) max((max((arr_54 [i_8]), (((/* implicit */unsigned long long int) -4799266171960423642LL)))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (unsigned short)30996)), (6414448648218733730LL))), (((((/* implicit */_Bool) arr_47 [i_8] [i_9] [(unsigned short)12] [i_15] [i_10])) ? (-8227552949813228396LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                                arr_60 [i_8] [i_9] [i_15] [i_15] [i_16] = ((/* implicit */long long int) max((((unsigned int) min((((/* implicit */unsigned int) (signed char)127)), (679662742U)))), (((/* implicit */unsigned int) var_15))));
                            }
                        } 
                    } 
                    arr_61 [i_10] [i_9] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)108)) ? (((((/* implicit */_Bool) var_7)) ? (8227552949813228415LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_10] [i_9] [i_10] [i_9]), (((/* implicit */unsigned char) var_15))))))))));
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (unsigned char)12))));
                    var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)31))) && (((/* implicit */_Bool) 18446744073709551600ULL))));
                }
                for (long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                {
                    arr_67 [17U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_9]))));
                    var_29 -= ((/* implicit */signed char) (~(max((((long long int) arr_36 [i_8] [i_9] [i_18])), (((/* implicit */long long int) (unsigned char)68))))));
                }
            }
        } 
    } 
}
