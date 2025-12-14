/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231350
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
    var_19 |= ((/* implicit */short) (+((-(((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                                arr_14 [i_2] [i_1 - 3] [11ULL] [i_3] [i_4] |= min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (min((((/* implicit */long long int) -1)), (arr_9 [i_0] [i_1] [i_2] [i_4 - 2]))));
                                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (543185541U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_3])))))))) * (((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */long long int) var_7)) : ((+(arr_9 [i_1 - 4] [i_3] [i_2] [i_1 - 4])))))));
                                var_21 -= ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                    var_22 ^= ((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5]);
                }
                for (short i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (unsigned short)4032))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_24 += ((/* implicit */signed char) var_8);
                            arr_27 [i_0] [i_0] [i_1 + 2] [i_6] [i_7] [i_8 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */int) (short)-27159)) != (((/* implicit */int) (unsigned char)152))));
                        }
                        var_26 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_6 - 2] [i_1 - 1] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 3; i_9 < 19; i_9 += 2) 
                    {
                        var_27 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 16381695218997505752ULL))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) <= (((long long int) var_15))));
                        var_29 = ((/* implicit */unsigned long long int) -2147483635);
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        arr_32 [18LL] [i_0] [i_6 - 1] [i_10] = ((/* implicit */short) ((((long long int) arr_30 [i_0] [i_1] [i_1 + 3] [i_6] [i_6 - 2] [i_6])) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_30 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 3])) : (((/* implicit */int) (unsigned char)69)))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((1036386557U), (4294967295U))))));
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_13)))))) != (((((arr_9 [i_0] [i_1] [i_6 - 2] [i_10]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)103)) - (103))))))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (signed char)-24))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_12 = 1; i_12 < 19; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */int) ((arr_16 [i_6 - 1] [i_11 - 2] [i_12 - 1]) == (((/* implicit */int) var_12))));
                            var_34 = ((((/* implicit */_Bool) arr_2 [i_0] [i_11])) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) var_4))));
                            arr_40 [i_6] [i_0] [i_1 + 1] [i_6 + 1] [i_11] [i_11 - 2] [i_12 + 1] &= ((/* implicit */unsigned int) ((int) (unsigned char)152));
                        }
                        for (int i_13 = 1; i_13 < 17; i_13 += 1) 
                        {
                            arr_43 [i_0] [i_1 + 1] [i_11] [i_1 + 1] [5LL] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), ((unsigned char)253))))) : ((-(arr_22 [i_0] [i_1] [i_6] [i_11]))))));
                            arr_44 [i_0] [i_0] [i_0] [i_6] [i_6 + 1] [i_11] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (var_6) : (((/* implicit */int) (signed char)19))))) || (((/* implicit */_Bool) max((1157527377), (var_13)))))))) : (var_9)));
                            var_35 ^= ((/* implicit */unsigned char) (+(((((var_0) != (var_16))) ? (arr_2 [i_1 - 1] [i_11]) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4376154920614260212LL)))))));
                        }
                        var_36 = ((/* implicit */long long int) min((((/* implicit */int) arr_39 [i_0] [i_1] [i_6] [i_11])), (((int) 1005154117U))));
                    }
                    arr_45 [i_6] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (2297275027U)))), (max((max((((/* implicit */long long int) (unsigned char)132)), (arr_8 [i_1] [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (1921538051U) : (4294967280U))))))));
                }
                /* vectorizable */
                for (short i_14 = 2; i_14 < 19; i_14 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */signed char) (short)16043);
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */long long int) 3289813163U)) : (arr_2 [i_0] [(signed char)8]))))))));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */signed char) max((((int) var_12)), (var_7)));
    var_40 = ((/* implicit */unsigned char) max((var_40), (((unsigned char) 9223372036854775789LL))));
    var_41 ^= ((/* implicit */short) var_2);
}
