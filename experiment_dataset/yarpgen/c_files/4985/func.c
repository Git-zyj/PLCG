/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4985
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = max((((int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) == (((/* implicit */int) (unsigned short)4095))))), (max((((/* implicit */int) max(((unsigned short)4110), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))), (max((-1), (((/* implicit */int) var_6)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_14 += ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((short) -1535217794))), (((long long int) 1073741823LL)))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((long long int) (unsigned short)4110)), (((long long int) var_1))))), (max((((14922598024825182565ULL) << (((var_5) - (4549504111702666313LL))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_9)))))))));
                                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((short) arr_13 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0]))) << (((((((-1) + (2147483647))) << (((((((/* implicit */int) (short)-27065)) + (27071))) - (6))))) - (2147483642)))))) <= (((long long int) ((int) 1535217799)))));
                                var_17 = ((max((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)7] [i_0] [i_0] [i_0])) <= (1835008)))), (min((var_4), (var_4))))) >> (((/* implicit */int) ((_Bool) ((long long int) 7)))));
                                var_18 = ((/* implicit */signed char) ((short) ((int) ((((/* implicit */int) (unsigned short)4095)) >> (((((/* implicit */int) (unsigned short)61445)) - (61436)))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) -2303917655669463560LL)) != (10936316710150935864ULL))))), (((int) max((1535217794), (((/* implicit */int) (unsigned short)61414)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (unsigned short)61434))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0] [i_0])), (arr_7 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((signed char) ((signed char) var_1))))));
                                arr_22 [i_7] [i_1] [i_1] [i_6] [(short)8] [(short)16] [(signed char)4] &= ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) max((0), (((/* implicit */int) arr_16 [i_1] [i_5]))))), (((var_8) + (arr_1 [i_5]))))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1)), (var_8)))) + (((unsigned long long int) 3444900089562305406LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((-1) % (((/* implicit */int) arr_3 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]))))) == (min((arr_17 [i_0] [i_1] [i_7] [i_6]), (((/* implicit */long long int) var_9))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_21 = ((/* implicit */long long int) ((short) min((min((var_2), (arr_16 [i_0] [i_0]))), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)4095))))));
                    arr_26 [i_0] [2LL] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((max((var_1), (((/* implicit */int) arr_13 [(unsigned char)4] [3LL] [i_8] [3LL] [(unsigned char)4] [(unsigned char)4])))) >= (((int) -1535217794))))) > (((/* implicit */int) ((_Bool) max((0), (((/* implicit */int) (unsigned char)78))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max(((((-9223372036854775807LL - 1LL)) + (3444900089562305399LL))), (max((-1LL), (((/* implicit */long long int) -4)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_1] [i_0] = ((long long int) min((((/* implicit */long long int) ((short) arr_0 [i_0]))), (((long long int) -28LL))));
                        /* LoopSeq 4 */
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((max((((/* implicit */long long int) ((22918347) < (3704953)))), (max((((/* implicit */long long int) var_7)), (-3444900089562305406LL))))) & (min((((/* implicit */long long int) min((arr_7 [i_8] [(short)6]), (((/* implicit */int) (short)-16571))))), (max((arr_15 [i_1] [i_8] [i_1]), (((/* implicit */long long int) (unsigned char)78)))))))))));
                            var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned char) var_0)), (arr_11 [i_10] [i_1] [i_9] [i_9] [i_10] [6LL]))))), (min((min((((/* implicit */long long int) 0)), (-1LL))), (((/* implicit */long long int) ((int) var_9)))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)78)) / (1944485210))) > (((/* implicit */int) ((signed char) (unsigned short)4110)))));
                            arr_37 [i_0] [i_0] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_10) < (((/* implicit */int) var_12))))) != (((((/* implicit */int) var_6)) / (var_10)))));
                            var_25 = ((/* implicit */int) ((((((/* implicit */int) var_2)) >> (((9223372036854775807LL) - (9223372036854775804LL))))) > (((/* implicit */int) ((short) var_9)))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_5)))) || (((/* implicit */_Bool) ((unsigned long long int) var_8)))));
                            arr_38 [i_0] = ((long long int) ((((/* implicit */int) (_Bool)1)) + (-10)));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
                        {
                            var_27 = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [4ULL] [i_0]))) <= (arr_0 [i_0])))) >> (((((-1551996343) / (((/* implicit */int) arr_23 [i_0] [i_1] [i_12])))) + (36816))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_8 [i_0]))) + (((((/* implicit */int) var_11)) | (((/* implicit */int) var_12))))));
                            var_29 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_30 [i_0] [i_0] [i_12] [i_0])) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) >= (((((/* implicit */int) (_Bool)1)) >> (((-3444900089562305406LL) + (3444900089562305417LL)))))));
                        }
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((min((3444900089562305403LL), (((/* implicit */long long int) ((int) -8920569850978092944LL))))), (((/* implicit */long long int) ((signed char) max((0), (-13))))))))));
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [9LL] = ((/* implicit */short) min((((/* implicit */int) min((max((arr_43 [i_0] [i_1] [i_0] [i_9] [i_13]), (arr_8 [i_0]))), (((((/* implicit */_Bool) -3)) && (((/* implicit */_Bool) -1))))))), (((int) ((_Bool) (_Bool)1)))));
                            arr_45 [i_0] = ((/* implicit */signed char) ((int) ((unsigned char) ((var_8) > (0LL)))));
                        }
                        var_31 = ((((((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) | (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_11)))))) << (((((((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_1] [i_0]))) / (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_0))))))) - (7019))));
                        arr_46 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), (arr_34 [i_0] [i_0] [i_1] [i_8] [i_9])))), (((arr_25 [i_0] [13LL] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((short) arr_1 [i_1])))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
    {
        arr_49 [i_14] = max((((int) (signed char)2)), (((/* implicit */int) ((((arr_27 [i_14] [i_14] [i_14] [i_14]) >> (((((/* implicit */int) var_2)) - (57582))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_14] [(unsigned short)13] [2] [i_14] [(unsigned char)6])) || (((/* implicit */_Bool) (short)-19670)))))))));
        arr_50 [i_14] = ((/* implicit */long long int) min(((unsigned short)61425), (((/* implicit */unsigned short) ((unsigned char) ((3444900089562305406LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
        var_32 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-834)), (18446744073709551595ULL)));
    }
    var_33 *= ((/* implicit */signed char) min((max((((/* implicit */long long int) ((unsigned char) var_0))), (((long long int) (unsigned char)247)))), (((/* implicit */long long int) ((((unsigned int) 9223372036854775807LL)) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))))))));
    var_34 += ((_Bool) max(((signed char)80), (((/* implicit */signed char) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (short)14397)))))));
}
