/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26826
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
    var_10 |= ((/* implicit */unsigned short) var_6);
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))))) >> (((((/* implicit */int) var_2)) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) var_1)))), (max((var_1), (var_4)))))) + (var_6)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))))), (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775807LL))), (((/* implicit */long long int) max((var_1), (var_4))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_6 [6LL] [(short)8] |= ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) <= (max((arr_4 [4LL] [i_0 + 1] [i_1]), (((/* implicit */long long int) arr_0 [i_0 - 1]))))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0] [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9223372036854775781LL))) >> (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((~(var_6)))));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])))) ? ((+(arr_1 [i_0 + 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                arr_12 [(unsigned short)11] [i_2] [i_3] [i_3] = ((max((max((((/* implicit */long long int) arr_11 [i_3] [i_3] [3] [3])), (arr_4 [(short)11] [i_2] [i_3]))), (((/* implicit */long long int) var_5)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_0 [i_0 - 2])))))));
                arr_13 [(short)11] [i_2] [i_3] [i_3] = min((((/* implicit */long long int) var_2)), ((+(((long long int) arr_0 [i_2])))));
                var_15 += ((/* implicit */unsigned long long int) ((min((arr_1 [i_0 - 1]), (arr_4 [i_0] [0LL] [i_0 - 1]))) - (arr_1 [i_0])));
            }
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_16 [i_4] [i_2] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) min((((int) arr_8 [i_0 - 1] [i_0 - 3])), (((/* implicit */int) ((((/* implicit */_Bool) 16887012267107974260ULL)) || (((/* implicit */_Bool) (unsigned char)178)))))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-23730)) ? (((/* implicit */int) (short)23735)) : (((/* implicit */int) (_Bool)0)))));
                        arr_24 [i_0] [(short)1] [i_6] [i_5] [i_5] = ((/* implicit */short) (+((-(min((var_6), (((/* implicit */int) var_2))))))));
                    }
                    arr_25 [i_5] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8278))))))))));
                    var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (short)-23730))))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_14 [(unsigned short)6] [i_5])) ? (((/* implicit */unsigned long long int) -346260369381569433LL)) : (arr_7 [i_5])))))));
                }
                var_18 = ((740024155) != (-740024140));
            }
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        arr_34 [(unsigned char)11] [i_2] [i_8] [i_8] [i_9] = (+(((/* implicit */int) ((short) (unsigned char)248))));
                        var_19 |= ((/* implicit */short) ((min((((((/* implicit */long long int) arr_8 [i_9] [i_9])) >= (arr_1 [i_0 + 1]))), ((!(((/* implicit */_Bool) (unsigned char)95)))))) ? (max((max((((/* implicit */long long int) -700887013)), (9223372036854775781LL))), (((/* implicit */long long int) arr_14 [i_2] [i_2])))) : (((long long int) ((9223372036854775788LL) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_7] [i_7] [i_2] [i_7] [i_2]))))))));
                    }
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [(signed char)4] [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_8])) >= (((/* implicit */int) (unsigned short)12518))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_0 - 2] [i_2])) : (((/* implicit */int) arr_27 [i_0 - 2] [i_2]))))) ? (((arr_27 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_27 [i_0 - 3] [(short)10])))) : (((((/* implicit */int) arr_27 [i_0 + 1] [i_2])) - (((/* implicit */int) arr_27 [i_0 - 1] [i_2])))))))));
                    var_22 = ((/* implicit */unsigned char) (+(max(((~(740024155))), (((/* implicit */int) var_2))))));
                    var_23 = arr_5 [i_7] [i_10];
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [(signed char)6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_27 [i_0] [i_7]))))), (((arr_32 [i_7]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                    var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_7] [i_2] [i_2] [i_2])) ? (((((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_11] [i_11] [(unsigned char)11])) | (((/* implicit */int) arr_28 [i_11] [i_7] [i_7] [i_7])))) : ((-(((/* implicit */int) (_Bool)1))))));
                }
                for (int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    arr_44 [11LL] [i_2] [i_7] [i_12] = ((/* implicit */unsigned short) arr_0 [i_7]);
                    var_26 -= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0 - 3]) : (((/* implicit */long long int) arr_23 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 2] [(unsigned char)8] [i_7])))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_12] [i_2] [i_12] [i_2])) ? (var_0) : (((/* implicit */int) arr_30 [i_0 - 2] [i_2] [i_7] [(short)10] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_12] [11] [i_12])) ? (((/* implicit */int) arr_28 [i_7] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
                arr_45 [i_0 + 1] [i_0 + 1] [10ULL] = ((/* implicit */signed char) ((unsigned short) arr_29 [i_0] [i_2] [i_2] [i_2] [i_7]));
            }
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_3)) / (var_0))), (((/* implicit */int) (unsigned short)33517))));
                arr_48 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [5] [i_0]))))) / ((((-(4611686018427387903LL))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [(short)8] [i_2] [i_2] [i_13] [i_13])))))))));
            }
            arr_49 [i_0 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_0 + 1] [(unsigned short)9]))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_26 [i_2] [i_0 - 3] [i_0] [i_0 + 1])) <= (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0]))))))));
        }
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [(unsigned short)5] [i_0])))))) + ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)116)) < (var_6)))))))))));
    }
    var_31 = ((/* implicit */unsigned short) var_2);
    var_32 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (max((((((/* implicit */unsigned long long int) 8388480LL)) & (17907309584532175373ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1166916899870707723LL)) ? (var_6) : (((/* implicit */int) var_8)))))))));
}
