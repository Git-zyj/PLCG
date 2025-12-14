/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207455
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
        var_20 = ((/* implicit */signed char) var_8);
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned long long int) min((max((((short) var_8)), (((/* implicit */short) (unsigned char)0)))), (((/* implicit */short) (signed char)-7))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [(short)12])) ? (arr_3 [15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
        var_21 ^= ((/* implicit */signed char) min(((unsigned short)61363), (((/* implicit */unsigned short) arr_4 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
        {
            var_22 |= ((/* implicit */_Bool) ((unsigned short) max((arr_0 [i_3 + 3] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_12 [i_3 + 2] [i_3 - 1])))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_11)) : (arr_8 [i_3 + 4]))))));
            arr_14 [(_Bool)1] = ((/* implicit */int) (unsigned short)61363);
        }
        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_24 = (unsigned char)255;
            var_25 += ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)255)), (max((((((/* implicit */_Bool) (short)768)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)2]))) : (arr_5 [i_2]))), (((/* implicit */long long int) ((unsigned short) (unsigned char)11)))))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)2993), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_1)) != (-5)))))) : (((((/* implicit */_Bool) (signed char)6)) ? (min((var_4), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)135))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                var_27 = ((/* implicit */_Bool) var_0);
                arr_21 [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 70368743915520ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)121))))) : (((/* implicit */int) (unsigned char)121))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)0))) ? (arr_5 [i_5]) : (((/* implicit */long long int) (((_Bool)0) ? (var_18) : (((/* implicit */int) var_7))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 2; i_8 < 18; i_8 += 3) 
                    {
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) max(((unsigned char)12), ((unsigned char)219)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) arr_25 [(unsigned char)14] [i_7] [i_6] [i_5])) ? (arr_18 [i_2] [i_8]) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_4 [i_2] [i_2])));
                        var_29 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)12))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_16 [i_6]))))) >= (((/* implicit */long long int) arr_24 [i_8] [i_8] [i_8 - 1] [i_8] [i_8 - 2] [i_8 - 2]))));
                    }
                    var_30 &= ((/* implicit */signed char) (+((+(((/* implicit */int) var_3))))));
                    arr_27 [(unsigned char)3] [i_5] [i_6] [i_7] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_7]))))) > (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65472))) : (70368743915520ULL)))))) >= (((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_9 [(unsigned short)12] [i_6])))) ? ((~(arr_18 [i_7] [i_6]))) : (((/* implicit */int) min(((signed char)-21), ((signed char)-2))))))));
                }
                for (int i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    var_31 = ((/* implicit */short) (-(((((((/* implicit */int) arr_2 [i_9])) >= (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(0ULL)))))));
                    arr_32 [i_2] [i_9] [i_6] [i_9] = max((((/* implicit */unsigned short) (signed char)-62)), (var_1));
                }
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (((~(arr_16 [i_5]))) > (((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_15)))))))));
            }
            for (signed char i_10 = 1; i_10 < 19; i_10 += 4) 
            {
                arr_35 [(short)1] [i_2] [i_5] [i_10 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_10 [i_2])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61088)) && (((/* implicit */_Bool) var_15)))))))) : (((((/* implicit */_Bool) arr_3 [i_10])) ? (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))));
                var_33 = ((/* implicit */unsigned short) (signed char)106);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned short)61089))));
                    var_35 |= ((/* implicit */unsigned short) var_11);
                    arr_38 [(_Bool)1] [(signed char)1] [i_10] = (_Bool)1;
                    var_36 = ((/* implicit */short) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((unsigned char) arr_24 [i_2] [i_2] [i_10] [i_5] [i_2] [i_2])))));
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        arr_41 [i_2] [(short)7] [i_10 + 1] [(unsigned short)12] [(unsigned short)14] [i_12] [i_12] = ((/* implicit */unsigned char) ((_Bool) ((arr_31 [i_2] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) arr_39 [i_12] [i_11] [i_10 - 1] [i_5] [10] [i_2]))));
                        arr_42 [7] [i_10] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_12]))));
                        arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)61061))));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_46 [i_11] [i_13] [i_13] [i_2] = ((/* implicit */unsigned short) arr_39 [i_2] [i_5] [i_10] [i_10 + 1] [i_2] [i_13]);
                        var_38 = (unsigned short)8;
                    }
                    for (unsigned short i_14 = 1; i_14 < 19; i_14 += 2) 
                    {
                        arr_51 [i_2] [i_5] [i_5] [i_10 - 1] [i_11] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_26 [i_2] [i_2] [i_2])) : (1909532554956942472ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)18)))))));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((long long int) arr_9 [i_2] [i_5])))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */int) arr_36 [i_10])) < (((/* implicit */int) arr_50 [i_11] [(short)7] [i_2]))))));
                    }
                }
            }
            arr_52 [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (signed char)-64))) ? (min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9)))) + (((/* implicit */int) arr_2 [i_2]))));
        }
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        arr_56 [i_15] |= ((/* implicit */int) ((unsigned char) ((unsigned short) var_10)));
        arr_57 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_15] [i_15] [i_15])) ? (var_17) : (((/* implicit */unsigned long long int) arr_26 [i_15] [i_15] [i_15]))));
        var_41 = ((/* implicit */unsigned long long int) var_7);
    }
    var_42 = ((/* implicit */unsigned char) var_15);
    var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_6))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_16)))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-9)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)38))))))) : (((((/* implicit */_Bool) (signed char)28)) ? (((((/* implicit */_Bool) (unsigned char)19)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_1))))))))));
    var_44 = ((/* implicit */int) var_7);
    var_45 = ((/* implicit */long long int) ((((_Bool) min((((/* implicit */unsigned long long int) -908642372)), (5751534818631923009ULL)))) ? (((/* implicit */unsigned long long int) var_18)) : ((-(min((0ULL), (((/* implicit */unsigned long long int) var_1))))))));
}
