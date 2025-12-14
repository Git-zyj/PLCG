/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52681
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
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) (+(((16716972694914353302ULL) << (((arr_0 [i_0]) - (2996756045742525066LL)))))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned char)167)) : (-1690245414))) : (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) 1690245426)))))))), (((7178185778341298088LL) % (((/* implicit */long long int) (~(var_1))))))));
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) arr_3 [(short)7] [i_0 + 1] [i_0 + 1])) : (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) (+(1690245433))))));
        }
        var_12 &= ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_3 [(short)21] [i_0] [i_0]))))) ? (((/* implicit */long long int) (+(arr_1 [i_0])))) : ((-9223372036854775807LL - 1LL))));
    }
    for (short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] [12LL] [i_4] = min((((/* implicit */int) (unsigned char)41)), (1092646246));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) 695035020U)) - (-8112902971708331919LL)))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (unsigned char)156))));
                                arr_23 [i_2] = ((/* implicit */long long int) ((short) ((arr_19 [i_2 - 1] [11ULL] [i_4 - 1] [11ULL] [24]) >> ((((~(((/* implicit */int) var_2)))) + (268))))));
                                arr_24 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_21 [i_6] [i_2] [i_2] [i_2] [i_2] [18LL]))))))), (((((arr_11 [i_4] [i_4] [i_4]) % (83393439382230024LL))) << (((((min((var_3), (((/* implicit */long long int) -1092646267)))) + (1092646283LL))) - (11LL)))))));
                                var_15 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (~(arr_2 [i_2 - 1])))), (((unsigned long long int) arr_10 [i_2 + 1] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    arr_31 [i_7] [i_7] [i_8] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_11 [i_8] [(unsigned char)0] [i_2 + 2]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(arr_3 [i_7] [i_7] [6]))))))) ? (max((min((1092646266), (1807636397))), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_9 [i_2 + 2] [i_8]))));
                    var_16 = ((/* implicit */unsigned char) (((+(arr_6 [i_2 + 2]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) >= (arr_21 [(_Bool)1] [i_7] [i_2] [i_2] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        for (int i_10 = 1; i_10 < 24; i_10 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((min((arr_2 [i_10]), (((/* implicit */unsigned int) (signed char)-21)))) << (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) arr_25 [i_7] [i_8]))))))))))));
                                var_18 = ((/* implicit */_Bool) arr_21 [i_2] [(unsigned short)5] [i_2 + 2] [i_2] [i_8] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_45 [i_13] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_34 [i_2 + 2] [i_2 + 2] [22LL] [i_13] [i_12] [i_13]))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (+((+(9223372036854775807LL))))))));
                            var_20 = ((/* implicit */_Bool) var_3);
                            var_21 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_38 [i_2] [(unsigned short)10] [i_2] [i_2] [i_2])), ((-9223372036854775807LL - 1LL))))) ? (arr_48 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) (!(((/* implicit */_Bool) 2711409201U))))))));
                        }
                        for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_1))));
                            var_23 = ((/* implicit */long long int) arr_42 [(_Bool)1] [i_12] [i_11] [i_15]);
                            var_24 = max((((/* implicit */int) ((_Bool) -1144257214))), (288381301));
                        }
                        /* vectorizable */
                        for (short i_16 = 3; i_16 < 22; i_16 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) var_5))) < (((long long int) (signed char)20))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_47 [i_2] [2LL] [i_2] [i_13] [i_11]) ^ (((/* implicit */int) (_Bool)0))))) ^ ((+(2983080194U)))));
                            var_27 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_11])) / (((/* implicit */int) var_2))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_17 [i_11])) + (arr_29 [i_2 - 1] [i_13] [i_16 - 1])));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_17 = 2; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            arr_56 [i_2] = ((short) min((((/* implicit */long long int) var_7)), (var_3)));
                            arr_57 [i_2] [15LL] [23LL] = ((/* implicit */int) max((((/* implicit */long long int) (+((~(arr_6 [i_2])))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3303541113U)))) + (min((-898120781312803400LL), (((/* implicit */long long int) arr_27 [i_2]))))))));
                        }
                        for (long long int i_18 = 2; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            arr_60 [i_2] [i_2] [i_12] [i_12] [i_18] [i_18] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_18 + 1])))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (arr_10 [i_18 + 2] [i_2 + 3])))) << (((((/* implicit */int) (unsigned char)185)) - (162)))));
                        }
                        for (short i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            arr_63 [i_2] [i_11] [i_2] [i_13] [i_19] [i_19] [21U] = ((/* implicit */short) min((((unsigned long long int) (-(var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_29 [i_2] [i_2] [i_2])))) ? ((((_Bool)0) ? (3039562269343415603LL) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
                            var_30 *= ((/* implicit */unsigned int) var_8);
                            arr_64 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_38 [15LL] [i_2 + 1] [15LL] [i_2 - 1] [i_2])) || (((/* implicit */_Bool) arr_22 [i_2 + 3] [i_2 + 3] [(_Bool)1] [i_2 + 1] [i_2 - 1]))))) << (((((((/* implicit */_Bool) arr_46 [(signed char)14] [i_2 + 2] [i_2] [i_2 - 1] [i_2] [(_Bool)1] [i_2 + 3])) ? (((/* implicit */int) arr_46 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [(unsigned short)12] [i_2 + 3])) : (-1092646251))) - (105)))));
                            arr_65 [i_2] [i_11] [i_11] &= ((/* implicit */_Bool) ((int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [12LL])) : (arr_28 [i_13] [i_11] [i_11] [i_2]))))));
                        }
                        var_31 *= ((/* implicit */unsigned long long int) max((((int) arr_13 [i_2] [i_2] [i_2 - 1])), (((/* implicit */int) ((_Bool) (_Bool)0)))));
                        arr_66 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) && (((/* implicit */_Bool) 1092646261))))) << ((((+(((((/* implicit */_Bool) arr_10 [i_12] [21LL])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40255))))))) - (2819724496U)))));
                    }
                } 
            } 
        } 
        var_32 *= ((/* implicit */_Bool) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]))))))), (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [14] [i_2] [i_2 - 1]))));
    }
    for (short i_20 = 1; i_20 < 22; i_20 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) ((short) 2047292551648171710LL));
        arr_71 [20] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) (-(-819692403)))) > (max((-5173997850360399269LL), (((/* implicit */long long int) var_9))))))), ((~(arr_28 [(signed char)12] [i_20 + 1] [12] [i_20 + 2])))));
        var_34 ^= ((/* implicit */signed char) ((((long long int) 2851236321U)) ^ (var_0)));
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) min(((-(arr_51 [i_20] [i_20 + 1] [i_20] [(unsigned short)2] [(short)22] [(short)22]))), (((/* implicit */unsigned int) ((int) var_0))))))));
    }
    var_36 = ((_Bool) (+(-2047292551648171711LL)));
}
