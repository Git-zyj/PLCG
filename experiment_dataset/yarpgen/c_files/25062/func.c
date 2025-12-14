/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25062
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
    var_10 = ((/* implicit */unsigned int) var_3);
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) 1649770660256272463ULL))));
    var_12 &= ((/* implicit */unsigned char) 4294967269U);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1649770660256272463ULL)) ? (((unsigned int) 16796973413453279153ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) var_1)), (min((var_9), (((/* implicit */unsigned short) var_2))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_8 [(unsigned char)14] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0]))));
            arr_9 [i_0] [i_1] [(unsigned char)2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (7775778972861049592ULL)));
        }
        for (signed char i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) 16796973413453279153ULL);
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                var_13 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_11 [i_2 + 1] [i_0]) : (arr_11 [i_0] [i_2 - 1])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : ((-(arr_16 [i_0] [i_0] [i_0] [i_0]))));
                arr_17 [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_1))))));
            }
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                arr_21 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (1649770660256272463ULL) : (16796973413453279153ULL)));
                var_14 = ((/* implicit */short) (~(((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_15 [i_2 + 1] [(signed char)8] [3ULL] [3ULL])))))));
                var_15 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 16796973413453279153ULL)) ? (1649770660256272462ULL) : (17474842358801923276ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (unsigned char)14))))) : (((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1]))))));
            }
            for (short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_3);
                    var_16 = (+(((/* implicit */int) min((((/* implicit */short) (signed char)-41)), (arr_2 [i_5 + 1])))));
                    arr_27 [(short)5] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((signed char) arr_5 [i_2 - 1] [i_5 + 2] [i_6]));
                    var_17 -= ((/* implicit */unsigned int) max((17474842358801923268ULL), (12337735608064805608ULL)));
                    arr_28 [i_0] [i_0] [i_2] [i_0] |= ((/* implicit */unsigned int) ((unsigned short) max((4612141208769671730ULL), (((/* implicit */unsigned long long int) var_4)))));
                }
                for (unsigned short i_7 = 4; i_7 < 17; i_7 += 2) /* same iter space */
                {
                    arr_33 [i_5] [i_5 + 2] [i_2] [i_5] = ((/* implicit */int) 16796973413453279154ULL);
                    arr_34 [i_5] = ((13834602864939879881ULL) == (((arr_16 [i_5 - 1] [i_5 + 2] [i_5 + 2] [i_5 + 2]) >> (((((/* implicit */int) arr_15 [i_5] [i_5 + 2] [i_5] [i_5 + 2])) - (183))))));
                    var_18 = ((/* implicit */short) arr_11 [i_0] [i_0]);
                }
                for (unsigned short i_8 = 4; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        arr_43 [i_5] [i_5] = ((/* implicit */signed char) (+(arr_31 [i_2 - 2] [i_5 + 1] [i_8 - 1] [i_8 - 2])));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 1]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_48 [i_0] [i_5] [i_0] [i_0] [(unsigned short)6] [i_0] [i_0] = arr_31 [i_0] [i_2] [i_5] [i_8 + 1];
                        arr_49 [i_5] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_1)))) ^ (min((((/* implicit */unsigned long long int) var_6)), (var_7))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_0] [i_0]))));
                    }
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_2])) ? (17179869183ULL) : (((((arr_39 [i_8] [i_5 - 1] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_8] [8] [i_0])))))))));
                }
                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_13 [i_5 + 2] [i_2 + 1])))) ? (((((/* implicit */_Bool) 1649770660256272458ULL)) ? (((arr_35 [i_0] [i_2] [i_0] [i_0] [i_0]) ? (16796973413453279153ULL) : (17474842358801923266ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 6109008465644746013ULL)))))))) : (((/* implicit */unsigned long long int) max((((unsigned int) arr_11 [i_2 + 1] [i_0])), (((/* implicit */unsigned int) arr_0 [i_2 + 1])))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_36 [i_2 + 1] [i_2] [i_2 - 2] [i_2 + 1] [i_5 - 1]))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_5 + 2]))))));
                arr_50 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_16 [i_2 - 2] [i_5 - 1] [i_2 - 2] [i_2 - 2]))) ? (((unsigned long long int) arr_16 [i_2 - 2] [i_5 + 2] [i_2 - 2] [i_2 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)46777))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 2])) << (((((/* implicit */int) arr_20 [i_2 + 1] [i_2 - 1])) ^ (((/* implicit */int) arr_20 [i_2 - 2] [i_2 + 1]))))));
            }
        }
        for (signed char i_11 = 2; i_11 < 17; i_11 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_11] [(signed char)16])) ? (6109008465644746041ULL) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [i_0] [(_Bool)1] [i_11] [i_11])))) : (arr_31 [i_0] [i_11] [i_11 - 2] [i_11 + 1])))) ? (min((var_7), (arr_39 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            var_25 -= (-(((/* implicit */int) arr_18 [(signed char)12] [i_11] [i_11 - 2] [i_11 - 2])));
            arr_53 [i_0] = ((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_0]);
        }
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) ((18446744056529682447ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) << (((32752U) - (32736U))))))))) % (arr_10 [i_0] [i_0] [17])));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (16796973413453279154ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-1))))))))))));
    }
}
