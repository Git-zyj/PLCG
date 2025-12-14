/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196570
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
    var_12 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((+(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) var_3)))))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_2 [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)14))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) (~((+(((/* implicit */int) var_11))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) ((unsigned char) (short)15931))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_0] = ((/* implicit */int) (-(arr_9 [i_0] [i_1] [i_0] [i_3 - 1] [i_1] [i_4])));
                            var_16 = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) arr_8 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_4] [(_Bool)1] [i_2] [(unsigned char)6] [i_4] [i_0]))));
                            var_17 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_0 [i_0])))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_4)));
                        }
                        for (unsigned char i_5 = 4; i_5 < 9; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))))) ? (((((/* implicit */_Bool) arr_9 [i_5 - 1] [8U] [i_0] [i_3 + 2] [i_5] [8U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)253))));
                            arr_16 [i_1] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [0U] [i_0])) || (((/* implicit */_Bool) var_0))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_21 [i_0] [8] [i_1] [i_1] [(unsigned char)8] [i_0] [1ULL] = ((/* implicit */int) ((arr_5 [i_1] [i_2] [2ULL]) ? (((/* implicit */unsigned long long int) ((arr_11 [i_3 - 1] [(signed char)6] [i_2] [i_1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [2LL] [6ULL] [i_6]))))))))) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3 - 1] [i_3 - 1] [i_2] [i_3 + 1] [i_3 + 1])))))));
                            arr_22 [i_0] [i_3] [3ULL] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) arr_14 [i_0]);
                            arr_23 [2LL] [i_3] [i_0] [(unsigned short)5] [2] = (~(((unsigned long long int) 17123569813781031802ULL)));
                            arr_24 [i_0] = ((/* implicit */unsigned int) ((17123569813781031807ULL) >> (((17123569813781031807ULL) - (17123569813781031788ULL)))));
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_28 [i_0] [i_0] [(_Bool)1] [(signed char)1] = ((/* implicit */unsigned int) ((unsigned char) (+((+(((/* implicit */int) var_3)))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_7] [i_8]))))));
                            arr_32 [i_8] [i_7] [i_0] [0ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [(short)4] [(_Bool)1] [i_7] [i_7] [(unsigned char)2]))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)88)) - (((/* implicit */int) (short)14149))))) + ((+(var_10)))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_7] [i_0])))));
                            arr_36 [i_0] [i_1] [i_1] [i_7] [i_0] = ((/* implicit */unsigned long long int) var_11);
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_40 [(unsigned char)9] [i_0] = ((/* implicit */long long int) arr_3 [(unsigned short)8] [i_1] [i_0]);
                            var_21 = ((/* implicit */short) var_10);
                            var_22 &= ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_30 [3ULL] [i_1] [i_1] [8ULL])))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_43 [i_0] [i_1] [6ULL] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_35 [i_1] [i_1] [i_2] [i_11] [i_11]), (arr_35 [i_11] [i_11] [i_11] [i_11] [8LL]))))));
                        arr_44 [9LL] [i_0] [i_0] [i_0] = var_1;
                    }
                }
            } 
        } 
        arr_45 [(unsigned char)4] |= ((/* implicit */short) var_6);
        arr_46 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [(signed char)9] [i_0])) + (((/* implicit */int) arr_15 [i_0] [2ULL] [i_0] [i_0] [i_0] [(signed char)7]))))) ? (var_10) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31)))))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_23 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_47 [i_12]))));
        var_24 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_12])) && (((/* implicit */_Bool) arr_48 [i_12] [i_12])))))));
    }
    var_25 = ((/* implicit */unsigned int) ((unsigned char) var_9));
    var_26 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_27 = ((/* implicit */signed char) (-(1323174259928519808ULL)));
        arr_52 [i_13] = ((/* implicit */short) (+(((((/* implicit */int) var_3)) / (((/* implicit */int) arr_49 [i_13]))))));
        /* LoopNest 3 */
        for (short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    {
                        arr_61 [(unsigned char)4] [i_14] [i_15] [i_13] = ((/* implicit */unsigned char) ((arr_50 [i_13]) >> ((((-(((/* implicit */int) (signed char)16)))) + (69)))));
                        arr_62 [(short)11] [i_13] = ((/* implicit */unsigned int) ((short) var_7));
                    }
                } 
            } 
        } 
    }
    for (signed char i_17 = 1; i_17 < 14; i_17 += 1) /* same iter space */
    {
        var_28 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1] [(short)15] [6LL])))))));
        arr_66 [(signed char)7] [i_17] = ((/* implicit */unsigned long long int) (-((~(arr_57 [i_17 + 1] [15ULL] [i_17 - 1])))));
    }
    for (signed char i_18 = 1; i_18 < 14; i_18 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (unsigned char)2)))));
        arr_70 [9ULL] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_57 [i_18 + 1] [i_18 + 1] [i_18 - 1])) : (arr_50 [(unsigned char)4]))))));
        var_30 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) arr_56 [i_18]))), (((((/* implicit */_Bool) arr_69 [i_18 + 1])) ? (((((/* implicit */int) arr_55 [(short)14])) + (((/* implicit */int) arr_53 [i_18] [i_18 + 2] [10ULL])))) : ((~(((/* implicit */int) arr_51 [5ULL]))))))));
    }
}
