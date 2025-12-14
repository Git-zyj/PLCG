/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37200
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
    var_13 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1833777158U)) : (8298213285206566212ULL)))) ? (8298213285206566212ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 8298213285206566217ULL))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (min((((/* implicit */long long int) (unsigned char)8)), (arr_0 [i_0]))))), (((/* implicit */long long int) var_7))));
        var_16 = ((/* implicit */unsigned int) var_3);
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (((((((/* implicit */_Bool) var_3)) ? (var_5) : (var_5))) << (((((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44637))))) - (530ULL)))))));
            arr_6 [(unsigned char)8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_18 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (short)13211))))), (((8298213285206566212ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_4] [(unsigned short)2] [i_2] [i_2] [i_1])), (min((((/* implicit */int) var_11)), (arr_1 [i_2]))))))));
                    arr_14 [i_1] [i_3] [i_1] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) (unsigned char)8)), (arr_9 [i_1] [i_1] [i_1]))));
                    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned char)247))))), (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)14)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? ((~(arr_0 [i_1]))) : (((/* implicit */long long int) var_10)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_18 [3ULL] [8U] [i_3] [3ULL] [3ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)9))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_20 ^= ((/* implicit */short) var_6);
                        arr_21 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_3] [i_1])))) < (((((/* implicit */_Bool) (signed char)-34)) ? (var_1) : (((/* implicit */int) arr_19 [i_1]))))));
                        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))), (((((/* implicit */_Bool) 8298213285206566212ULL)) ? (max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_16 [i_1] [(unsigned short)13] [(unsigned short)13] [i_5]) < (((/* implicit */int) (signed char)-110))))))))));
                    }
                    var_22 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)8))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1] [i_2] [1] [i_7] [i_8])) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) < (min((arr_20 [i_3] [i_7] [i_3] [i_8] [i_8] [i_7]), (((/* implicit */long long int) var_4)))))))));
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_12)))), (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_1] [i_3]))))) <= (((((/* implicit */_Bool) min(((unsigned char)8), ((unsigned char)67)))) ? (((2893133101107408049LL) | (((/* implicit */long long int) ((/* implicit */int) (short)19430))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3] [i_8])))))));
                            arr_27 [12LL] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_2)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)12942)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))))))));
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 2893133101107408049LL)) ? (arr_16 [i_1] [(unsigned char)7] [(unsigned char)7] [i_3]) : (((/* implicit */int) (unsigned char)249)))) < (((/* implicit */int) var_9))))) >= (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_12)))))));
                var_26 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_25 [i_1] [i_1] [i_2] [7LL] [i_1] [i_3]) % (arr_25 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-19)), (-2904557817502430516LL)))) : (max((((/* implicit */unsigned long long int) arr_25 [(unsigned short)5] [(unsigned char)14] [i_3] [i_3] [i_3] [6U])), (10148530788502985393ULL)))));
            }
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0LL))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            arr_38 [i_9] [(short)1] [i_9] [i_9] [(short)1] [i_2] = ((/* implicit */unsigned int) ((max((6870163417381546788ULL), (((/* implicit */unsigned long long int) ((8298213285206566212ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_11] [i_10] [i_9] [10LL] [10LL])))))))) < (var_8)));
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) (unsigned char)249))))), (min((((/* implicit */unsigned long long int) (unsigned char)8)), (8298213285206566212ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)19419)), (-4113492459193418274LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (max((((/* implicit */long long int) (short)-19431)), (1304742304888833105LL))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) arr_22 [13ULL] [i_9] [i_2] [i_2] [13ULL]);
                arr_40 [i_9] = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */int) var_0)) << (((var_8) - (10416188878139385513ULL))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)19416)) : (((/* implicit */int) (unsigned short)52594)))))));
            }
        }
        for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            var_29 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1320865518877764986LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))))))) % (min((10148530788502985405ULL), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_12] [i_12])))))))));
            /* LoopSeq 4 */
            for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                arr_45 [i_1] [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (15571305480909672225ULL));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_23 [i_1]))));
                var_31 = ((/* implicit */short) var_2);
            }
            for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)45)), (arr_8 [i_1] [i_1] [i_14])))) ? (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) arr_19 [i_12])) ? (arr_8 [i_14] [i_12] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1]))))))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
                var_33 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) arr_31 [i_1] [(short)4])), (var_5))) == (((/* implicit */unsigned long long int) ((arr_28 [i_1] [i_1] [i_12] [i_1]) + (arr_26 [i_14] [2ULL] [i_14] [i_14] [i_12] [i_12] [i_1])))))) ? (arr_43 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))));
                var_34 = ((unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned char)69)))), (((/* implicit */int) (unsigned char)62))));
            }
            for (signed char i_15 = 1; i_15 < 13; i_15 += 4) 
            {
                var_35 = ((/* implicit */long long int) (+(((var_8) << (((arr_25 [i_1] [i_12] [i_15] [(unsigned char)9] [i_15 + 1] [i_1]) - (3570622605407528910LL)))))));
                var_36 = min((((/* implicit */short) (unsigned char)202)), ((short)31150));
            }
            for (unsigned int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                arr_53 [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_32 [i_16] [i_16] [(unsigned short)5] [i_1]), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32758), ((short)3895))))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) (unsigned char)202))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((-4113492459193418293LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) + (141))))))))));
                var_37 = ((/* implicit */unsigned long long int) max((((short) arr_41 [(signed char)13])), (((/* implicit */short) arr_22 [i_1] [i_12] [i_16] [11LL] [i_1]))));
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) == (((arr_48 [i_1] [2U] [(unsigned char)5] [2U]) ^ (((/* implicit */long long int) var_10)))))))));
            }
            arr_54 [i_12] [i_1] = ((/* implicit */short) var_8);
            arr_55 [i_1] [i_12] [(unsigned short)6] &= ((/* implicit */unsigned char) var_12);
        }
        arr_56 [i_1] = min((((/* implicit */long long int) arr_24 [i_1] [i_1] [i_1] [i_1])), (max((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */int) (short)-3905)) > (((/* implicit */int) var_0))))))));
        var_39 = min((((/* implicit */long long int) (~(max((arr_30 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */int) (signed char)-106))))))), (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_0 [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) var_7))))));
    }
}
