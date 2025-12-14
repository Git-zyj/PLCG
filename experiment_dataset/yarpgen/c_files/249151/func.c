/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249151
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), ((~(((unsigned long long int) ((unsigned int) (unsigned short)59310)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */short) max(((~(((/* implicit */int) ((unsigned short) -1121408105))))), (((/* implicit */int) ((((/* implicit */int) ((39628430) >= (((/* implicit */int) (unsigned short)65532))))) >= (((((/* implicit */int) (short)32765)) % (-39628430))))))));
                                var_19 = ((/* implicit */unsigned short) -39628431);
                                arr_16 [i_0 + 2] [i_1] [i_1 + 2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */int) ((18046173784155267250ULL) << (((((((1749492522) % (((/* implicit */int) arr_6 [i_2])))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65522)) || (((/* implicit */_Bool) 494242114U))))))) - (3038)))));
                                arr_17 [i_0] [i_1 - 2] [i_2] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */signed char) ((short) max((((arr_14 [i_0 - 2] [i_4] [i_2] [i_3] [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)10372))))), (((((/* implicit */int) (_Bool)1)) <= (39628424))))));
                                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) 2147483633)) : (1318054210U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 3504035440U))));
                                arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) <= (min((((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)127)))), (2147483617)))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)111)) != (((/* implicit */int) (short)-21100))))) - (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-10392))))))) / (((((((/* implicit */int) (short)-27812)) <= (((/* implicit */int) (short)26600)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-26601))))) : (max((4294967295U), (((/* implicit */unsigned int) (short)-1)))))))))));
                                var_23 = ((/* implicit */unsigned short) min((arr_21 [i_0] [i_0] [i_2] [i_5] [i_0]), (((/* implicit */unsigned int) arr_3 [i_1]))));
                            }
                        } 
                    } 
                    arr_23 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_18 [i_0] [i_0] [8ULL] [i_0] [i_0]))))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) (short)-26602)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 3] [i_0] [i_1] [i_2])) ? (8693246114234862643ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26578)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)26600)) >> (((/* implicit */int) arr_12 [i_0 - 2]))))) : (arr_14 [i_0 - 1] [i_0] [i_1] [(signed char)2] [i_2])))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    arr_28 [i_0] [i_1] [(unsigned char)8] = ((/* implicit */int) (unsigned char)255);
                    var_24 = ((/* implicit */int) ((signed char) arr_27 [i_7] [i_7 + 1] [i_7 + 1] [i_7]));
                    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) (short)-27812)))) + (((((/* implicit */int) (short)18943)) >> (((((/* implicit */int) (signed char)-106)) + (115)))))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (short)12836))));
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 7; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) (short)18943)) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27796))) * (0ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 3967486459U)) > (18446744073709551612ULL)))) : ((-(((/* implicit */int) (unsigned short)41522)))))))))));
                                arr_37 [i_0] [i_1 + 1] [i_8] [(short)8] [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_10])) ? (min((((/* implicit */unsigned long long int) (unsigned char)250)), (0ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_35 [i_9 - 1] [i_10]))))), (max((min((((/* implicit */unsigned long long int) (short)27795)), (arr_7 [i_0] [i_1] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -39628441)) || (((/* implicit */_Bool) (short)12809)))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 9; i_11 += 1) 
                {
                    var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2ULL), (((/* implicit */unsigned long long int) arr_9 [i_0 - 1]))))) ? ((((_Bool)0) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49573))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_11 - 1] [i_1])) >> (((((/* implicit */int) (short)-10905)) + (10925))))))))) ? (((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ^ (((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_11 - 1])) ? (((/* implicit */int) (short)-12831)) : (arr_40 [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */int) arr_35 [i_0] [i_1])));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12810))) & (10ULL)));
                }
                arr_41 [i_0] = ((/* implicit */unsigned short) ((arr_2 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551613ULL)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) ((18446744073709551598ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-51)) == (((/* implicit */int) (_Bool)1))))) < ((-(((/* implicit */int) var_0))))))))));
    var_31 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) var_10)))));
    /* LoopSeq 3 */
    for (short i_12 = 1; i_12 < 11; i_12 += 1) 
    {
        var_32 = ((/* implicit */int) ((((0ULL) >= (((((/* implicit */_Bool) (unsigned short)57406)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))) : (12032768549282578880ULL))))) ? (((unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)12820)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21701)))));
        /* LoopNest 2 */
        for (short i_13 = 0; i_13 < 13; i_13 += 2) 
        {
            for (signed char i_14 = 4; i_14 < 12; i_14 += 4) 
            {
                {
                    arr_52 [i_12] [i_13] = ((/* implicit */_Bool) 11ULL);
                    arr_53 [i_12] [i_13] [i_12] = (unsigned char)250;
                    arr_54 [9U] [4] [i_14] [i_14 - 2] = ((/* implicit */short) 18446744073709551606ULL);
                    arr_55 [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5814701523489839839ULL)) ? (((/* implicit */int) arr_48 [i_12] [i_13] [i_14])) : (((/* implicit */int) (short)11808))))))) && (((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        var_33 &= ((/* implicit */unsigned int) ((((-1883382764) < (1883382758))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)-12837)) < (((/* implicit */int) (short)-12858))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_12])) || (((/* implicit */_Bool) -1883382764)))))))) : (((((/* implicit */_Bool) (+(arr_47 [i_12] [i_12 - 1] [i_12 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_12]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 315085560U)) || (((/* implicit */_Bool) (unsigned short)20546)))))))));
    }
    for (short i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_34 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((arr_56 [i_15]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)19273))))) < (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((-260060900) + (260060924)))))))))) <= (((arr_57 [(short)12]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)4501)), ((unsigned short)36251)))))))));
        arr_58 [i_15] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_15])) ? (arr_57 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159)))))) ? (((-1666620495) % (1666620469))) : (((/* implicit */int) (short)31355)))));
        arr_59 [i_15] = ((unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            arr_63 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) ((signed char) 1666620469))) ^ (((((/* implicit */_Bool) -1666620495)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (unsigned short)734))))));
            arr_64 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)19487)) * (((/* implicit */int) (_Bool)0))))) ? (arr_57 [i_15]) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)1536)), (-1666620495))))));
            arr_65 [i_15] [(_Bool)1] [i_15] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned char)191))))) - (arr_56 [i_15]))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_15])) ? (2701144490U) : (arr_56 [i_15])))) ? (((/* implicit */unsigned int) ((((-1) + (2147483647))) << (((18014398509481983ULL) - (18014398509481983ULL)))))) : (arr_57 [i_15])))));
        }
        for (unsigned int i_17 = 4; i_17 < 18; i_17 += 1) 
        {
            arr_68 [i_15] = ((/* implicit */int) ((min((arr_56 [i_17 + 1]), (max((3028562151U), (((/* implicit */unsigned int) -1666620470)))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)87)))))));
            var_35 = ((/* implicit */unsigned short) arr_60 [i_15]);
        }
        var_36 += ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) min(((short)0), ((short)-29057)))) > (((/* implicit */int) ((((/* implicit */int) arr_60 [i_15])) < (-1521112851)))))))));
    }
    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
    {
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (((((+(((/* implicit */int) (short)-12858)))) + (2147483647))) << (((((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))) : (12U))) - (12U))))))));
        arr_72 [i_18] = ((/* implicit */unsigned int) min((min((18302628885633695744ULL), (((/* implicit */unsigned long long int) arr_71 [i_18])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-266625129)))))))));
    }
}
