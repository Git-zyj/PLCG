/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25030
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
    var_12 ^= ((/* implicit */unsigned int) ((int) (_Bool)0));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned short) arr_3 [i_4 - 1] [i_4] [i_4]);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_2] [i_1] [(_Bool)1] [i_2 - 2] [i_4 + 1] [(_Bool)1]) / (((/* implicit */long long int) max((arr_5 [i_0] [i_1] [(_Bool)1]), (((/* implicit */unsigned int) arr_8 [i_1] [(signed char)5] [(signed char)5] [i_3])))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_1] [(signed char)11] [i_2] [i_1]))));
                            }
                        } 
                    } 
                    var_15 += ((((/* implicit */_Bool) arr_9 [i_2] [i_0])) ? (((/* implicit */int) ((signed char) min((arr_7 [(unsigned short)13] [(unsigned short)11] [(unsigned short)13] [i_1]), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])))))) : ((+(((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_12 [i_2]), (arr_12 [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2 - 3] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 2] [i_2 - 2] [i_0]))) : (arr_10 [0LL] [i_0] [i_1] [0LL] [i_5] [i_1]))) : ((~(((arr_10 [(short)10] [i_0] [i_2 - 2] [i_2] [0] [i_2 - 1]) + (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_0]))))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_9 [i_5] [i_1])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) < (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 1] [i_2 - 2]))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((-(arr_10 [i_7] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_5 [2] [8] [i_7])))))));
                            var_19 = max((((/* implicit */long long int) min((((((/* implicit */int) var_3)) << (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))))), (min((arr_16 [i_2] [i_1] [i_2] [i_2 + 1] [(short)8] [i_0]), (arr_16 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_7]))));
                        }
                        var_20 *= ((/* implicit */unsigned char) ((int) min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])), (var_10))));
                        var_21 += ((/* implicit */unsigned short) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_4))), (arr_7 [i_2 - 1] [i_8] [i_8 + 1] [i_8 - 1])));
                                arr_29 [i_9] [i_0] [i_9] [i_9] [i_9] |= ((/* implicit */_Bool) (short)-29092);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+((+(arr_16 [i_0] [i_0] [i_9] [i_1] [i_9] [i_2 - 3]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 3; i_10 < 13; i_10 += 4) 
                    {
                        var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_26 [(_Bool)1])))))) ? (((/* implicit */int) var_3)) : (max((((arr_31 [(_Bool)1] [i_1] [i_2] [i_10] [i_1] [i_10 - 2]) ^ (((/* implicit */int) var_11)))), (((/* implicit */int) arr_6 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_0]))))));
                        var_25 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) max((arr_16 [i_10] [i_1] [i_0] [i_2] [i_1] [i_0]), (arr_32 [i_0] [i_0] [(short)4] [i_0])))) && (((/* implicit */_Bool) 268435455)))));
                        arr_33 [i_0] [i_0] [(_Bool)1] [11U] [9LL] [i_1] = ((/* implicit */int) ((((/* implicit */int) min((var_7), (var_5)))) != ((+(((/* implicit */int) arr_24 [i_0] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_1]))))));
                    }
                    for (short i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */short) var_4);
                        var_27 = ((/* implicit */_Bool) arr_19 [i_11] [(_Bool)1] [i_0]);
                        arr_36 [i_11] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) var_7);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_22 [i_13] [i_14] [i_13] [i_13] [i_13])))) : (((long long int) arr_8 [i_13] [i_13] [i_14] [i_15]))))));
                        arr_47 [i_13] [i_13] [(unsigned short)11] [i_13] = ((/* implicit */_Bool) (+(arr_15 [i_13] [i_14] [i_13])));
                    }
                } 
            } 
        } 
        arr_48 [i_12] = ((/* implicit */unsigned int) max((var_2), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (17LL))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((short) min((var_0), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
}
