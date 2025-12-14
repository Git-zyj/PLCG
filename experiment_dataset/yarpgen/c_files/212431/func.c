/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212431
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1868743613U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_4 [i_0] [i_1] [i_0]) / (((/* implicit */int) arr_5 [i_0] [10U] [i_1] [8ULL]))))) * (((((/* implicit */_Bool) (unsigned short)31160)) ? (var_8) : (var_6)))))) : (arr_3 [i_0] [(unsigned short)7])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)241)))));
                                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) arr_10 [i_4] [0U])) - (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_4] [i_2] [(unsigned short)8] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */int) (unsigned short)5805)) : (((/* implicit */int) var_13))))))))));
                                var_16 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) arr_10 [i_4] [i_1]))) : (((/* implicit */int) ((unsigned short) (short)19727)))))), (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */unsigned long long int) 167453962)) : (7ULL)))));
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */unsigned char) arr_5 [i_2 + 2] [i_2 + 2] [i_0 - 1] [i_0 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_13 [i_0] [10] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0]))));
                        var_19 -= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8U])) ? (arr_13 [i_0] [10U] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80)))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_3)) + (((/* implicit */int) (short)-19727)))))));
                        var_20 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551612ULL))));
                        var_21 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31846))) & (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (short)-19727))))) : (max((arr_12 [i_0] [i_1] [(unsigned short)8] [i_5] [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 7; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) min((((arr_16 [i_0] [i_0 - 1] [i_2 - 1] [i_6 + 1] [i_6]) << (((((/* implicit */int) (short)19726)) - (19702))))), (((unsigned int) (signed char)79))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)15710)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)-90))))))) ? ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_12 [(_Bool)1] [0U] [i_0] [i_1] [5U]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)19717))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_16 [i_0] [i_0 - 1] [i_1] [9] [i_6]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) ^ (arr_16 [i_0] [i_2] [(unsigned char)1] [i_0] [i_0]))))))));
                    }
                    var_23 = var_0;
                }
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) 4080U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_22 [i_0] [(short)10] [i_0]))))))) | (var_12)));
                    arr_24 [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_1] [i_0]))) - (((/* implicit */int) (short)25402)))) + (2147483647))) >> (((((arr_21 [i_0] [i_0] [i_0]) | (arr_21 [i_0] [(unsigned char)7] [i_0]))) - (158768482U)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) ((unsigned short) arr_22 [i_0] [i_1] [i_0]))) - (((/* implicit */int) (short)25402)))) + (2147483647))) >> (((((((arr_21 [i_0] [i_0] [i_0]) | (arr_21 [i_0] [(unsigned char)7] [i_0]))) - (158768482U))) - (238876418U))))));
                    arr_25 [i_7] [i_0] [i_0] [i_0 + 1] = (i_0 % 2 == 0) ? (((/* implicit */short) (((-(((((/* implicit */_Bool) (signed char)80)) ? (arr_21 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))))) << (((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [3ULL])) : (((/* implicit */int) arr_1 [(short)8] [i_0])))), (arr_4 [i_0] [i_0] [i_0]))) - (197006793)))))) : (((/* implicit */short) (((-(((((/* implicit */_Bool) (signed char)80)) ? (arr_21 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))))))) << (((((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [3ULL])) : (((/* implicit */int) arr_1 [(short)8] [i_0])))), (arr_4 [i_0] [i_0] [i_0]))) - (197006793))) + (197034851))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        var_24 = ((unsigned int) var_3);
                        var_25 -= ((/* implicit */short) max((18446744073709551583ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) arr_18 [9ULL] [i_0] [i_1] [9ULL] [i_8])) >= (var_10)))))))));
                        var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1] [(unsigned char)7] [i_8 - 1] [8ULL])) ? (arr_16 [i_0 + 1] [i_1] [i_7] [i_8 - 1] [i_0]) : (arr_16 [i_8] [i_7] [i_7] [i_1] [i_0]))) << (((((/* implicit */int) arr_5 [(unsigned char)7] [i_7] [i_1] [i_0 + 1])) - (31706)))));
                        arr_29 [i_0] [i_0] [i_0] = var_12;
                        var_27 *= max((((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7]))) : (var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)19706))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)255)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)19726)), (var_2)))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            arr_36 [(_Bool)1] [(short)10] [4] [(short)10] [i_7] &= ((/* implicit */signed char) var_0);
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((arr_13 [i_0 + 1] [i_7] [i_0 + 1] [i_9] [i_9] [i_10] [i_10]) | (arr_13 [i_10] [i_7] [i_9] [i_0 + 1] [i_10] [i_10] [(unsigned char)6]))))));
                        }
                        var_29 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_1] [i_7])))))));
                        var_30 *= ((/* implicit */_Bool) min((var_11), ((short)31845)));
                        var_31 = ((((((/* implicit */long long int) ((4294967285U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [(short)0] [(short)0])))))) != (8506264954299137131LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (10008836508438222840ULL) : (var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_9]))) : (0ULL)))) ? ((~(arr_13 [i_9] [i_0] [i_7] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) 9223013937640535232LL);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_12 = 2; i_12 < 10; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) (unsigned short)127);
                            var_34 ^= ((/* implicit */unsigned short) (short)-31821);
                            var_35 *= ((/* implicit */unsigned int) (!(arr_26 [i_0 + 1] [i_1] [i_0 + 1] [i_11] [i_12] [(unsigned short)6])));
                        }
                        for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            arr_43 [i_0] [i_0] [1ULL] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_0 + 1] [i_0] [5ULL] [i_7] [5ULL] [5ULL] [i_13 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0 + 1] [i_1] [i_7] [i_0 + 1]))))))) - (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_0 + 1] [i_0 + 1] [4U] [6])) ? (((/* implicit */unsigned long long int) arr_32 [i_0 + 1] [i_0 + 1] [i_7] [i_11] [i_13])) : (arr_13 [i_0 + 1] [i_0] [i_7] [i_0] [4] [4] [i_13 - 1]))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_12 [i_0] [(signed char)6] [i_7] [0U] [i_13]))));
                            var_37 = ((/* implicit */short) max(((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) & (var_0))))), (((/* implicit */unsigned long long int) (~(((long long int) arr_41 [i_0] [i_11] [(unsigned short)10] [i_1] [i_0])))))));
                            arr_44 [i_7] [i_7] [10] [i_7] [i_13] [2] [i_13] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5108)) > (1349954079)));
                        }
                        var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [4U] [i_0]))));
                        var_39 = ((/* implicit */signed char) 487415479U);
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]) % (((/* implicit */long long int) arr_16 [i_0 - 1] [i_0] [i_1] [i_7] [i_14]))))) && (((/* implicit */_Bool) (~(((unsigned int) arr_40 [i_0] [7] [i_7] [i_14] [6])))))));
                        arr_49 [i_0] [i_0] [i_0] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_0 + 1] [i_1] [i_7] [i_7]))) % (3237251416U)))))) ? (((/* implicit */int) (!(arr_26 [2] [i_0] [i_1] [i_1] [i_7] [i_14])))) : (arr_41 [(unsigned char)2] [i_14] [i_14] [i_1] [i_0])));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)4] [3U] [i_7] [(unsigned char)2])) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) var_3))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_15 = 4; i_15 < 7; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) arr_14 [i_16] [i_0] [i_0] [i_1] [i_0])) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))))))));
                            var_43 = ((/* implicit */signed char) ((unsigned long long int) arr_42 [i_0]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_44 |= ((/* implicit */unsigned int) (~((-(var_10)))));
}
