/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190306
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
    var_16 = ((/* implicit */long long int) max((var_11), (((/* implicit */short) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 ^= arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] [i_3] [i_2];
                                var_19 -= ((/* implicit */long long int) ((_Bool) var_13));
                                arr_12 [i_0] [i_1] [i_1] [i_2] [9LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7685762495413844982LL)) ? (-7685762495413844997LL) : (((/* implicit */long long int) ((/* implicit */int) (short)13358)))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 229376)) : (arr_9 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((short) arr_7 [i_0] [i_0] [i_0] [i_0]));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)18405)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0])) ? (824937877556772938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_7] [i_0] [i_7 + 4] [i_7] [i_7] [i_7 + 3]))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_6] [i_8 - 2] [i_7 + 1] [i_6] [i_0]))) % (arr_16 [i_7 + 4] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_28 [i_0] [i_9] [i_5] [i_7] [i_6] = (!(((/* implicit */_Bool) 13293835133176396511ULL)));
                            arr_29 [i_6] [i_7] [2] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */int) var_8)) < (var_7)));
                        }
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(arr_17 [i_7 + 3]))))));
                            arr_34 [i_0] [i_7] [i_0] [i_0] &= ((short) arr_25 [i_7] [i_5] [i_7 + 4] [i_7] [i_10]);
                            var_24 *= ((/* implicit */short) ((long long int) ((signed char) var_7)));
                            var_25 = ((/* implicit */int) ((arr_8 [i_7] [i_7] [i_7] [i_7 + 1]) | (arr_8 [i_7] [i_7] [i_7] [i_7])));
                            arr_35 [i_10] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */int) (~(((unsigned long long int) var_13))));
                        }
                        for (signed char i_11 = 4; i_11 < 11; i_11 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) arr_5 [i_0]);
                            arr_38 [i_7] [i_7] [i_5] [i_7 + 2] [i_11] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_6] [i_7 + 1] [i_7 - 1] [i_11 - 4] [i_11] [i_11]) : (arr_9 [i_6] [i_6] [i_7 + 3] [i_11 + 1] [(signed char)11] [i_11])));
                        }
                        var_27 = ((/* implicit */short) ((unsigned char) arr_16 [i_7 + 1] [i_7 + 4]));
                        arr_39 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_7 - 1] [i_7] [i_7] [6] [i_7] [i_7])) ? (((unsigned long long int) arr_6 [i_6] [i_6])) : (arr_8 [3LL] [i_5] [(unsigned char)2] [i_5])));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_7] [i_7 - 1] [i_7] [(_Bool)0] [i_7] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 2])) : (((/* implicit */int) arr_24 [i_7] [i_7] [i_7] [9LL])))))));
                        var_29 = ((/* implicit */unsigned short) -8085812748024213871LL);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) (+(1008879145U)));
        var_31 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_41 [i_12])) ? (-9108954667856957663LL) : (((/* implicit */long long int) arr_41 [i_12]))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) 3286088150U))));
        var_33 = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                {
                    arr_50 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32756)) / (((/* implicit */int) (unsigned short)47131))));
                    var_34 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) var_10)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        arr_53 [i_13] [i_15] [i_14] [i_13] = ((/* implicit */unsigned int) (+((+(1874410304)))));
                        arr_54 [i_13] [(short)5] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_15] [i_13])) % (((/* implicit */int) var_0))));
                    }
                    for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_9))));
                        var_36 *= ((/* implicit */short) arr_48 [i_14]);
                    }
                    var_37 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_10))) : (((/* implicit */int) ((short) var_15))))));
}
