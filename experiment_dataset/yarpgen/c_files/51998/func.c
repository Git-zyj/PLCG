/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51998
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) / (max((var_5), (((/* implicit */int) var_10))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_8), (((/* implicit */short) max((var_6), ((unsigned char)3)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_12 *= ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                            var_14 &= ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_1] [i_4] [i_3]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (0ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_1] [i_4] &= (~(((((/* implicit */int) (!(((/* implicit */_Bool) 5ULL))))) & ((+(((/* implicit */int) (unsigned char)249)))))));
                            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_0), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_4])))), (((/* implicit */unsigned long long int) max((264919663U), (((/* implicit */unsigned int) var_10)))))))) || (((/* implicit */_Bool) var_2))));
                            arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_5))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)50)))))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (signed char)64))))) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)60)) : (var_7))))), (((/* implicit */int) ((_Bool) arr_7 [i_5 - 1] [i_1 - 3] [i_0])))));
                            var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_2] [i_3]))) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) ((unsigned char) var_1)))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13804)) ? (max((((/* implicit */int) (signed char)115)), (var_7))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)81)) || (((/* implicit */_Bool) (signed char)-58)))))));
                        }
                        var_19 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_21 [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 3])))))));
                        var_20 *= (((-((-(((/* implicit */int) (unsigned char)0)))))) << (((((var_7) * ((+(((/* implicit */int) arr_8 [i_1] [i_2])))))) + (218893475))));
                    }
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-61))))), (31U)));
                        arr_24 [i_1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((arr_10 [i_6] [i_0] [i_2] [i_1]) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (var_5)))) ? (((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)174)))) : (((((/* implicit */int) (short)-27)) / (var_7))))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 3 */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */short) var_6);
                        var_25 = ((/* implicit */short) arr_16 [i_0] [i_7 + 2]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (-1833774796) : ((~(((((/* implicit */_Bool) 4026531840U)) ? (((/* implicit */int) var_6)) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] [i_2])))))));
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(7991381893344287506LL))))));
                            var_28 = ((/* implicit */int) (unsigned char)0);
                        }
                        var_29 = ((/* implicit */short) var_1);
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_0] [i_1 - 1]))) ? (max((arr_16 [i_0] [i_1 - 3]), (arr_16 [i_0] [i_1 - 2]))) : (var_0)));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967249U)) ? (1153695624U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-9223372036854775807LL - 1LL)))))))) : (((((((/* implicit */_Bool) (unsigned short)51739)) || (((/* implicit */_Bool) (unsigned short)41490)))) ? (((/* implicit */int) min((arr_13 [i_2]), (((/* implicit */short) (unsigned char)0))))) : ((-(((/* implicit */int) var_3)))))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        var_31 = arr_8 [i_0] [i_0];
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            var_32 = ((/* implicit */int) max((var_32), ((~((~(((/* implicit */int) var_10))))))));
                            arr_41 [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_22 [i_0] [i_0] [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)39050)) ? (((1043356533) | (-1043356540))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [i_10] [i_10]))))))) | ((~((+(((/* implicit */int) (unsigned char)238))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (var_5)))) ? (((((/* implicit */_Bool) 16410374216740718764ULL)) ? (((/* implicit */unsigned long long int) arr_33 [i_0] [i_1] [i_10] [i_12])) : (arr_43 [i_0] [i_1] [i_2] [i_0] [i_12]))) : (((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_0] [i_1 - 4] [i_1 - 4] [i_12]))))));
                            var_35 = ((/* implicit */_Bool) (signed char)-1);
                        }
                    }
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */int) min((var_9), (arr_8 [i_1 - 1] [i_2])))) | (((arr_8 [i_1 - 1] [i_2]) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_2])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2])))))))));
                }
            } 
        } 
    } 
}
