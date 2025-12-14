/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18960
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
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [(signed char)11] [i_0])))) : (max((((/* implicit */long long int) arr_1 [i_0] [(_Bool)0])), (arr_0 [i_0] [i_0]))))) == (max((arr_0 [i_0 + 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 + 2])))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [(short)8] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)12] [i_0 + 2]))))))))) : (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0 + 1]))))))));
        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0] [(short)9]))))) && (((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)11])))) ? (((/* implicit */int) max((arr_1 [i_0 + 2] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 + 1])))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [2])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [10LL]) : (arr_0 [(_Bool)1] [9LL]))) : (arr_0 [(short)2] [i_0 - 3])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((int) arr_1 [i_0 + 2] [i_0 - 2])))));
    }
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((long long int) arr_9 [i_2 + 1] [i_2] [i_3] [i_2 - 1])) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_2 + 1] [i_2] [i_3] [i_2 + 1]), ((_Bool)0))))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((long long int) max((arr_5 [i_1 + 3]), (arr_5 [i_1 + 2])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((_Bool) ((unsigned char) arr_5 [i_1])));
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] [i_4] |= ((/* implicit */unsigned int) arr_9 [i_4 + 1] [(unsigned char)14] [(_Bool)1] [(signed char)14]);
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_22 = ((/* implicit */long long int) arr_5 [i_4]);
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 7; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        arr_21 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-106))));
                        arr_22 [i_4] [i_5] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) arr_1 [i_4] [i_4 + 1]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_8 = 2; i_8 < 9; i_8 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_4 + 1])) & (((/* implicit */int) arr_5 [i_4 + 1]))));
                    arr_27 [i_8] [(unsigned char)0] [(unsigned char)0] [(unsigned char)1] [2U] = ((((/* implicit */_Bool) ((short) arr_17 [4ULL] [(_Bool)1] [i_8] [5LL]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8]))) : (((arr_16 [i_4] [i_4] [i_4] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_4] [4LL]))))));
                }
                arr_28 [i_4] [i_8] [i_5] [(unsigned short)1] = ((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8 + 1] [i_8 - 1])) ? (arr_20 [i_8 - 1] [i_8 - 2] [i_8 - 1]) : (arr_20 [i_8 - 1] [i_8 - 1] [i_8 + 1]));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_20 [i_4 - 1] [i_8 - 1] [(_Bool)1]))));
                arr_29 [5LL] [i_5] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_8 - 2] [i_8] [i_8 - 2] [i_8])) <= (((/* implicit */int) arr_26 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8]))));
            }
            arr_30 [i_4] [i_4] = ((/* implicit */long long int) ((arr_6 [(short)16]) ? (arr_10 [i_4 - 1]) : (((/* implicit */int) arr_8 [i_4 - 1] [(unsigned short)10]))));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_1 [i_4 + 1] [i_4 + 1]))));
    }
    for (long long int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
    {
        arr_33 [i_10] [i_10] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_4 [i_10 + 1] [i_10 + 1]))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((max((arr_20 [i_10 - 1] [4LL] [i_10 - 1]), (arr_0 [i_10 - 1] [i_10]))), (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) : (1550746223858715077LL))))))));
    }
}
