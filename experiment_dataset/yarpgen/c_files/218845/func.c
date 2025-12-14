/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218845
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
    var_16 = ((/* implicit */short) var_2);
    var_17 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) var_14)))));
    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)182)), ((short)-23771))))) ^ (max((((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) ((var_11) <= (var_11))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 &= ((/* implicit */signed char) max((((unsigned short) arr_1 [i_0 + 1])), (((/* implicit */unsigned short) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [2LL] [i_1] [i_1])) + (2147483647))) << (((var_6) - (591930880551938658LL)))));
                            arr_13 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((unsigned int) arr_15 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) != (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2])) ? (arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 + 1] [i_6 + 2] [i_0 + 1]))));
                            var_24 *= ((/* implicit */_Bool) ((arr_16 [8U] [i_6 + 1] [i_6 + 1] [i_0] [8U]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [12ULL] [i_6 + 1] [i_6 + 3] [i_0 + 1] [12ULL]))));
                        }
                    }
                } 
            } 
            arr_21 [i_0] [i_0 + 1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)38))));
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_1] [5LL]))));
        }
        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_26 = var_0;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        var_27 += ((/* implicit */long long int) ((short) 0));
                        var_28 = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)23776), (((/* implicit */short) (signed char)-57))))))))));
                        var_29 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23777)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))) : (9223372036854775807LL))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_20 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                var_31 *= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0 + 1]))));
            }
            var_32 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (min((((var_3) ? (((/* implicit */long long int) var_5)) : (var_13))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2011326307940134001ULL))))))));
            var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_7] [i_0 + 1] [i_0 + 1]))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        var_34 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_11])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_11])))))))), (((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */unsigned long long int) max((var_12), (var_5)))) : ((+(16435417765769417627ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_35 [i_11] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))));
            var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_11])) | (((/* implicit */int) arr_34 [i_12]))));
        }
        var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_35 [i_11] [i_11])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (arr_34 [i_11])))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6356938392888042662LL))) : (max((((/* implicit */long long int) var_0)), (-6356938392888042662LL)))))));
        var_38 = ((/* implicit */_Bool) ((unsigned long long int) arr_36 [14ULL] [i_11] [i_11]));
        var_39 ^= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */int) (short)-23771)) * (((/* implicit */int) var_10))))), (arr_36 [0ULL] [i_11] [i_11]))), (((/* implicit */long long int) ((arr_35 [i_11] [i_11]) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_40 = ((/* implicit */short) var_0);
        var_41 = ((/* implicit */signed char) ((arr_37 [i_13]) ? (((/* implicit */int) arr_37 [i_13])) : (((/* implicit */int) arr_37 [i_13]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            var_42 += ((/* implicit */unsigned short) arr_35 [i_13] [i_13]);
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_14] [i_14] [(_Bool)0])) ? (arr_41 [i_13] [i_14] [i_14]) : (arr_41 [i_13] [i_14] [i_13])));
            arr_43 [i_13] [(unsigned short)3] [i_14] = ((/* implicit */int) (!(arr_38 [i_13])));
            var_44 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3274489200U)) / (arr_39 [i_13])));
        }
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 13; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                {
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((arr_41 [i_15 - 2] [i_15 - 2] [i_15 - 1]) | (((/* implicit */unsigned long long int) arr_33 [i_15 - 1] [i_15 + 3])))))));
                    var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) / (((((/* implicit */_Bool) 2305825417027649536LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))) : (3644179160U)))));
                }
            } 
        } 
    }
}
