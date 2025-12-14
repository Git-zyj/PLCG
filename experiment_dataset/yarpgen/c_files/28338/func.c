/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28338
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
    var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) var_13))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((876184890) ^ (876184895)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])), (arr_6 [9ULL] [(signed char)1])))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [6ULL] [5])) : (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)63980)))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((-876184891) > (((/* implicit */int) var_9)))) ? (((-876184895) / (-876184891))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)63))))) != (((/* implicit */int) (short)3918))))))))));
                    var_18 = ((/* implicit */short) arr_1 [i_0]);
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
        var_19 |= ((/* implicit */int) ((((unsigned long long int) (+(var_0)))) * (((/* implicit */unsigned long long int) ((long long int) (unsigned char)18)))));
        var_20 &= ((/* implicit */unsigned short) ((arr_0 [i_0]) ? ((+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)21668))));
        var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) ^ (var_0))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)1)) << (((9045624923252789444ULL) - (9045624923252789435ULL))))))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_11 [8LL] |= ((/* implicit */long long int) var_3);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            arr_14 [(signed char)14] |= ((/* implicit */unsigned long long int) var_14);
            var_22 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [i_4 - 2] [i_4 - 2] [i_4 + 1])) << (((arr_9 [i_4 - 3]) - (582359938U))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_4 - 1] [i_4 - 2] [i_4 - 2])), (var_6))))));
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                arr_18 [i_3] [i_4] [i_3] = ((/* implicit */signed char) var_0);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    arr_22 [i_4] [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-1))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_9))));
                    arr_23 [(_Bool)1] [i_4] [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((int) (+(((/* implicit */int) var_12)))))));
                }
                arr_24 [i_3] [i_4 - 3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_3] [i_4 + 2] [i_3]), (((/* implicit */unsigned char) (signed char)1)))))) == ((~(var_10)))));
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_12)) << (((arr_19 [i_3] [i_5] [i_5] [i_3]) - (16767573103455839617ULL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4 + 2])) || (((/* implicit */_Bool) 375841637))))) : (arr_21 [(signed char)21] [i_5] [i_4] [i_3] [i_3] [i_3])));
                    var_24 = ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_13 [i_4 - 3] [i_4] [i_7 - 1])))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) (-(var_4)))) && (((/* implicit */_Bool) (+(var_4)))))))));
                    var_26 = ((/* implicit */short) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) == (arr_13 [i_7] [i_5] [i_4]))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)14))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 4; i_8 < 23; i_8 += 1) 
                    {
                        arr_31 [i_3] [i_3] [(unsigned short)0] [i_5 + 2] [(unsigned char)24] [i_7 - 2] [i_8] |= ((_Bool) 9401119150456762171ULL);
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) 2392504673786362243ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_5 - 1] [i_7 + 1] [i_8 + 1])) ? (arr_19 [i_4 - 2] [i_5 + 2] [i_7 - 2] [i_8 + 1]) : (arr_19 [i_4 - 2] [i_5 - 2] [i_7 + 2] [i_8 - 1]))))))));
                        arr_32 [i_3] [i_3] [i_3] [(_Bool)1] [i_3] |= ((/* implicit */short) (((+(((/* implicit */int) arr_17 [i_8] [i_7 + 2] [i_3] [i_3])))) + (((/* implicit */int) (unsigned char)244))));
                        var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max(((unsigned char)63), (((/* implicit */unsigned char) (_Bool)0))))) ? (((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4 - 1] [i_5] [i_7] [i_8 + 1])))))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_5] [i_3])) : (((/* implicit */int) var_2)))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_35 [i_4] [i_4 + 2] [i_4 - 2] [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned char)244);
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                        arr_36 [16U] [i_4] [i_4] [i_5] [24U] [i_9] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)13579)) ^ (((/* implicit */int) (unsigned char)75))))) ^ (0LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_4 - 3] [i_4 + 2] [i_4] [i_4]))))) : (((unsigned long long int) ((((/* implicit */_Bool) 9045624923252789463ULL)) ? (((/* implicit */int) (_Bool)1)) : (876184890))))));
                    }
                }
                /* vectorizable */
                for (signed char i_10 = 3; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                    var_31 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) * (18446744073709551608ULL))) >= (arr_19 [i_4] [i_4] [i_10 + 1] [i_10 - 1])));
                }
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    arr_43 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), ((+(((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) (_Bool)1))))))));
                    var_32 = ((/* implicit */long long int) (unsigned char)254);
                    arr_44 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((arr_30 [i_3] [(signed char)23] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (20LL))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) 18446744073709551603ULL))))) != (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))));
                    arr_45 [i_4] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_15 [i_5 + 1] [i_11] [i_11] [i_11]), (arr_15 [i_5 + 2] [(unsigned short)22] [i_11] [i_11])))) ? (((((/* implicit */int) (signed char)-19)) / (((/* implicit */int) arr_15 [i_5 - 1] [i_11] [i_11] [i_11])))) : (arr_38 [i_5 - 2] [i_5] [i_5] [i_11])));
                }
                arr_46 [i_3] [i_4] [i_4] [(unsigned short)2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (9223372036854775797LL))) ? (((((/* implicit */_Bool) 394833586)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31431)))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-1LL)))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)6)))), (((/* implicit */int) (unsigned short)12484)))))));
            }
            for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                var_34 = ((/* implicit */int) ((0LL) >= (((/* implicit */long long int) -471313611))));
                arr_50 [i_4] [12ULL] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) 721894517)) : (((long long int) arr_25 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55966)))))) * (((unsigned long long int) (_Bool)0)))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
                var_36 = ((/* implicit */unsigned long long int) arr_37 [i_3] [i_3] [i_3] [(_Bool)1] [i_12]);
            }
            var_37 |= ((/* implicit */unsigned long long int) (_Bool)0);
        }
        arr_51 [i_3] |= ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) (unsigned short)32135)))), (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
        var_38 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1494755779U), (((/* implicit */unsigned int) var_4))))) ? (-9223372036854775797LL) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (470061512)))))))));
    }
    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_5)))), (max(((!(((/* implicit */_Bool) var_14)))), (((((/* implicit */int) var_6)) != (((/* implicit */int) var_9)))))))))));
    var_40 = ((/* implicit */_Bool) ((unsigned short) (signed char)40));
}
