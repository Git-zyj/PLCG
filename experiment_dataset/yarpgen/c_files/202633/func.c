/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202633
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
    var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) ? (max((((/* implicit */long long int) var_9)), ((+(var_6))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_11))))));
    var_17 *= ((/* implicit */unsigned long long int) ((var_6) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) var_12))))) : (-1337665963809066248LL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) max(((-(max((arr_2 [(unsigned char)20]), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [20U] [(short)11])) > (min((var_2), (((/* implicit */long long int) arr_1 [i_0] [(short)14])))))))));
        arr_4 [i_0] = ((/* implicit */int) ((long long int) var_10));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)0])), (arr_2 [9])));
            /* LoopNest 3 */
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_18 = max((min((arr_10 [i_2 - 1] [i_1 + 2] [i_1 - 1]), (((/* implicit */unsigned int) var_14)))), (arr_10 [i_2 - 1] [i_1 + 2] [i_1 - 1]));
                            var_19 = ((/* implicit */int) arr_2 [(short)0]);
                            var_20 *= ((/* implicit */int) min((((/* implicit */long long int) ((8191099427062403752LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45179)))))), (min((((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_6))), (((/* implicit */long long int) arr_6 [i_1 + 3]))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) arr_15 [i_1 + 1] [i_1 + 1]);
            /* LoopSeq 4 */
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_22 = ((/* implicit */int) max((var_22), (min((((((/* implicit */_Bool) arr_16 [i_1 - 1])) ? (arr_16 [i_1 + 2]) : (arr_16 [i_1 + 3]))), (((((/* implicit */_Bool) -249191609)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))))));
                arr_20 [i_0] [(unsigned short)1] [(unsigned char)15] &= ((/* implicit */unsigned int) max((min((max((((/* implicit */long long int) arr_0 [i_1])), (arr_12 [5LL] [5LL]))), (((/* implicit */long long int) (-(var_4)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (short)23713)) : (2139403716))), (arr_18 [10LL] [i_1 + 2] [10LL] [10LL]))))));
                arr_21 [(signed char)2] [(signed char)2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) -2147483629)), (3992097866U)))) ? (arr_18 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1]) : (0))) / (((/* implicit */int) min((arr_7 [i_1 + 2] [i_1] [i_1]), (arr_7 [i_1 + 1] [(_Bool)1] [i_1]))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((int) arr_15 [i_0] [i_1 + 1])), ((-(((/* implicit */int) (unsigned char)0)))))))));
                arr_22 [i_5] [12] [12] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))), (((/* implicit */long long int) ((signed char) arr_18 [i_0] [i_1 + 2] [i_5] [i_0]))))) & (((/* implicit */long long int) (-(arr_6 [(short)21]))))));
            }
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_24 = ((/* implicit */long long int) max((min((arr_24 [17LL] [i_1] [i_6] [i_6]), (arr_24 [(signed char)5] [(signed char)5] [(_Bool)1] [(unsigned char)6]))), (((unsigned short) 1980177351))));
                var_25 = ((/* implicit */signed char) min((((((/* implicit */_Bool) -1980177360)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (302869435U))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) | (var_8))))))));
                var_26 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [(signed char)10] [i_1 + 2])))) || (((/* implicit */_Bool) ((arr_15 [2LL] [i_1 - 1]) / (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)217), (((/* implicit */unsigned char) (signed char)1)))))))))));
            }
            for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)64561))))))))) + (min((((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_1 - 1])), (arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((((/* implicit */_Bool) 16256U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (-1653490635593729254LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_10))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        arr_34 [(short)17] [(signed char)6] [(short)17] [(unsigned short)6] [(unsigned short)12] [19ULL] = ((/* implicit */_Bool) arr_11 [(signed char)12] [(signed char)12] [(_Bool)1] [17]);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_7 + 1] [i_8])) ? (arr_10 [i_7 + 2] [i_7 + 2] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)131)) | (((/* implicit */int) var_14)))))))));
                        var_30 = var_5;
                    }
                    for (int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        arr_37 [(unsigned short)3] = ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) % (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [19U] [i_10]))))));
                        var_31 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        arr_38 [i_10] [(short)0] [i_7] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((arr_32 [i_1 - 1] [i_7 + 2] [i_7 + 2] [i_8 - 2] [9] [19]) > (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_32 = ((/* implicit */unsigned int) min((((arr_27 [(signed char)0] [(signed char)0] [(signed char)0] [i_8 + 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15)))), (((/* implicit */int) arr_11 [i_8 - 1] [(unsigned char)11] [(unsigned char)14] [6LL]))));
                        var_33 = ((/* implicit */short) max((((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) ^ (arr_35 [17ULL] [i_1 + 1] [i_7 + 2] [i_8 - 2] [17ULL]))), (((/* implicit */long long int) ((int) arr_14 [i_1] [(_Bool)1] [i_7 + 2])))));
                    }
                    var_34 = ((/* implicit */unsigned short) var_8);
                    var_35 = ((/* implicit */_Bool) (((~(1337665963809066246LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_26 [1] [(signed char)12] [i_0] [i_0])))));
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (signed char i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [6] [6] [(unsigned short)14] [(unsigned short)14] [i_0]))))) ? (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_13 [i_0] [i_0] [(unsigned short)9] [i_0] [(unsigned short)12]) : (((/* implicit */long long int) arr_18 [i_1] [8LL] [i_11] [i_12])))), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned short) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_16 [i_11]), (((/* implicit */int) var_0)))))))))));
                            var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_7 + 1])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (arr_29 [14])))))))) | (max((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)233)), (668046101)))), (((((/* implicit */_Bool) 1640637951996797342LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2)))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) max((max((arr_23 [i_7 + 2] [i_1 + 1]), (arr_23 [i_7 + 2] [i_1 + 1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7 + 2] [i_1 + 1])) || (((/* implicit */_Bool) var_15)))))));
            }
            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) max(((~(arr_12 [i_1 + 2] [i_13 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */int) var_7))))))))));
                arr_47 [i_0] [i_1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1 + 2] [i_13])) && (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_13))))) || (((/* implicit */_Bool) ((int) var_13)))))));
            }
            arr_48 [i_0] = ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)53)));
        }
        var_40 += ((/* implicit */short) (((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) var_7))));
        var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(var_8)))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (arr_40 [i_0] [(signed char)4])))))));
    }
    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((~(arr_49 [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_15))))))));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((arr_50 [i_14]), (((/* implicit */int) var_10)))), (min((var_8), (((/* implicit */int) (unsigned short)12))))))) ? (((((/* implicit */_Bool) 8171485971553938881ULL)) ? (((/* implicit */int) (unsigned short)57344)) : (((/* implicit */int) (short)-23624)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_50 [i_14]) : (arr_50 [i_14])))))))));
    }
}
