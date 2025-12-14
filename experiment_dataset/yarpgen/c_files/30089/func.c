/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30089
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */int) max((((/* implicit */long long int) ((signed char) ((int) var_3)))), (min((((/* implicit */long long int) arr_5 [4LL] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_5)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */short) min((((/* implicit */int) ((signed char) (unsigned char)35))), (min((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) min(((unsigned char)50), ((unsigned char)50))))))));
                        var_15 = ((/* implicit */int) var_2);
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((_Bool)1) ? (min((((/* implicit */int) (short)-12651)), (min((((/* implicit */int) (unsigned char)205)), (725827981))))) : (((((/* implicit */int) (unsigned char)99)) + (((/* implicit */int) min((arr_10 [i_2] [i_2] [(short)4]), (((/* implicit */short) (_Bool)1))))))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_15 [i_1 + 1] [i_2] [11ULL] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7177292150834350417ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)5))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (var_5))))), (((/* implicit */long long int) (unsigned char)179))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_8))));
                        var_18 *= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)62955)), (6171859790177363153LL)));
                    }
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) /* same iter space */
                    {
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */short) (unsigned char)50))))), (((((/* implicit */_Bool) -228078338)) ? (17736841091053586195ULL) : (((/* implicit */unsigned long long int) 1228358317))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29732))) & (696671848647987215ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (1228358317) : (((/* implicit */int) (short)-29733)))))));
                        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 3] [i_5 - 1] [i_2] [i_1 - 1] [2] [i_0])) ? ((~(((/* implicit */int) arr_7 [i_2] [9] [i_2] [i_2])))) : (arr_13 [i_5] [0U] [i_0])))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_16 [(short)14]))))), (((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_5 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1))))) : (max((((/* implicit */long long int) arr_7 [i_0] [i_1 - 1] [i_2] [(_Bool)1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) arr_2 [i_2]))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)206)) | (((/* implicit */int) (short)29732))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_14 [9] [9])) + (((/* implicit */int) arr_5 [i_0] [i_0] [1ULL]))))))) : (min((18446744073709551597ULL), (((/* implicit */unsigned long long int) (unsigned char)11)))))))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
                    {
                        arr_21 [i_0] [(unsigned short)6] [(_Bool)1] [i_0] [(unsigned char)2] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_6] [i_2] [i_1]))))))) / (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_6 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))));
                        var_22 -= ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))) | (arr_8 [i_0] [i_2] [0LL] [i_7]))) : (min((((/* implicit */long long int) arr_20 [i_7] [i_2] [i_0] [i_0])), (var_1)))))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 1] [i_2])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_2])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_2] [i_1 - 1] [i_2])) ? (((/* implicit */long long int) arr_20 [(unsigned short)21] [i_2] [7U] [(signed char)12])) : (arr_8 [i_2] [i_2] [i_2] [i_2])))))));
                        arr_25 [(unsigned short)17] [(unsigned short)17] [i_7] = var_0;
                    }
                    arr_26 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) (unsigned char)242))))) ? (((long long int) (unsigned short)1920)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)28))) : (511LL)))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_11)))) : (((((/* implicit */int) (unsigned short)7)) ^ (-1228358318))))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [(signed char)4] [i_0] [i_0] [i_0] [10LL]))));
    }
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)4)), ((short)-1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_8] [(unsigned char)7] [i_8] [i_8] [6])), (arr_27 [i_8])))) ? (((/* implicit */int) min(((unsigned short)20991), (((/* implicit */unsigned short) (unsigned char)172))))) : ((~(arr_20 [i_9] [i_9] [i_8] [i_8])))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16361747694336567682ULL)) || (((/* implicit */_Bool) -492LL)))))) : (((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_9])) ? (arr_6 [i_8] [i_9] [9LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_8] [7LL] [i_8] [16LL])))))))));
            arr_31 [i_9] &= ((/* implicit */short) min(((~(((/* implicit */int) (signed char)-29)))), (((/* implicit */int) max(((signed char)24), (((/* implicit */signed char) (_Bool)0)))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_5)), (var_9))), (((/* implicit */unsigned long long int) (~(arr_6 [7LL] [(unsigned char)6] [(unsigned char)6]))))))) ? (((/* implicit */unsigned long long int) ((((arr_6 [i_8] [i_9] [i_9]) >= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (max((arr_30 [i_9] [i_9] [i_9]), (arr_27 [16]))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_8] [22]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [i_9])) : (arr_17 [i_8] [i_8] [i_8] [i_8] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8147362001787158373LL)))))))))));
        }
        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
        {
            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_1 [i_10] [i_8]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-48))))))) ? (max((((/* implicit */long long int) var_7)), ((+(arr_30 [i_10] [i_10] [i_10]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-48)))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_8]))) : (arr_17 [i_8] [i_8] [i_10] [i_10] [i_10] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3873750601U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (421216689U)))))))));
            var_28 -= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_11 [10ULL] [(unsigned char)8] [i_10])), (min((arr_23 [i_8] [i_8] [i_8] [i_10] [i_8]), (((/* implicit */unsigned int) arr_10 [i_10] [i_8] [i_10])))))) | (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-62), ((signed char)-62)))))));
        }
        for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
        {
            arr_37 [(short)8] [i_11] &= ((/* implicit */signed char) (!(((((((/* implicit */_Bool) arr_14 [i_8] [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_11] [i_8] [i_8] [i_8] [i_11]))) : (var_1))) > (((((/* implicit */_Bool) 683731088U)) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12)))))))));
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((min((arr_17 [i_8] [(signed char)18] [i_8] [(signed char)18] [i_8] [14LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_11] [i_8] [i_11])) ? (((/* implicit */int) arr_0 [i_11])) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (-522LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)181)))))))))));
        }
        for (signed char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(1743836908))))));
            arr_40 [i_12] |= ((/* implicit */unsigned char) var_5);
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (~(min((1987961240898514467ULL), (((/* implicit */unsigned long long int) (signed char)70)))))))));
        }
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (((/* implicit */long long int) ((arr_1 [i_8] [i_8]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_8] [i_8] [(_Bool)1]))))) : (((((/* implicit */_Bool) 3873750610U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-512LL)))))));
    }
    var_33 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (min((var_8), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-503LL)))), (min((var_9), (((/* implicit */unsigned long long int) var_3)))))) : (var_9)));
    var_34 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38732)) ? (((/* implicit */long long int) ((((/* implicit */int) min(((short)6144), (((/* implicit */short) (_Bool)1))))) >> (((max((72057589742960640LL), (515LL))) - (72057589742960636LL)))))) : (((((/* implicit */_Bool) 9223372036837998592ULL)) ? (min((((/* implicit */long long int) (short)-25530)), (-503LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)5)))))))));
}
