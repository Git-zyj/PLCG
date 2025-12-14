/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39752
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
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)26359)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_0))))) <= (((/* implicit */int) var_11)))))) : (min(((-(18446744073709551609ULL))), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (~((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 3])) > (((/* implicit */int) arr_0 [i_0 - 2]))))), (min((((/* implicit */unsigned long long int) (signed char)14)), (18446744073709551609ULL)))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [(short)8] [i_0 - 1])) + ((+(((/* implicit */int) arr_0 [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30343)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_18))))) ? ((-(var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_11)), (arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_23 -= ((/* implicit */_Bool) ((long long int) (~(max((8487099841350534219ULL), (((/* implicit */unsigned long long int) var_9)))))));
                    arr_7 [0ULL] &= ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 9959644232359017396ULL)) ? (8487099841350534219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [8ULL] [(unsigned char)4] [i_2]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (((unsigned long long int) 8487099841350534219ULL)))))));
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_15)), (var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_26 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) arr_0 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_3] [i_3] [i_3]))))) : ((~(7ULL)))));
        var_27 *= ((/* implicit */unsigned char) arr_6 [i_3] [i_3] [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        arr_12 [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (short)16128)) : (((/* implicit */int) (signed char)127)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4])) > (((/* implicit */int) (short)-8039)))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                {
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? ((+(((/* implicit */int) (signed char)90)))) : (((/* implicit */int) arr_15 [i_6] [i_6] [i_6 + 1])))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_5] [i_6 - 2]))) : (18446744073709551584ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6 - 2] [i_6] [i_6 + 1])))));
                    var_30 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)36)) ? (8487099841350534219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_8 + 1] [i_6] [i_5])) ? (((/* implicit */int) ((signed char) var_13))) : (((/* implicit */int) arr_10 [i_5]))));
                                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [(short)0] [(short)0] [i_5] [i_7 - 2] [i_5] [i_7])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
                                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1] [i_7 + 1] [i_7] [i_7 - 3] [i_7] [i_7 - 2]))) == (9959644232359017401ULL)));
                                var_34 = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_35 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_4] [(signed char)15] [i_6 + 1] [(signed char)21] [i_10] [i_10]))))) ? (arr_11 [i_10 - 2]) : ((~(var_5)))));
                                var_36 = ((/* implicit */_Bool) (signed char)80);
                                arr_28 [i_9] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) arr_10 [i_4]))));
                                var_37 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)130)))) == (((/* implicit */int) ((arr_11 [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_6 - 1] [i_6] [i_9] [i_10]))))))));
                                var_38 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_32 [i_11] = ((/* implicit */unsigned char) var_12);
        var_39 = min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_29 [i_11] [i_11])), ((short)-1)))), (((((/* implicit */_Bool) arr_31 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11] [i_11]))) : (8487099841350534213ULL))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    arr_38 [i_13] [i_11] [i_11] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)2047))))) ? (((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) arr_35 [i_12] [i_13])) : (((/* implicit */int) arr_37 [i_11] [i_11] [i_13])))) : (((/* implicit */int) arr_31 [i_12]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            {
                                var_40 ^= ((/* implicit */unsigned short) (+(arr_40 [i_15] [i_13] [i_11])));
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_30 [i_13] [i_13]), (((/* implicit */short) arr_37 [i_11] [i_14] [(unsigned short)15]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_37 [i_11] [i_12] [i_15])) < (((/* implicit */int) arr_31 [i_11]))))) : (((/* implicit */int) ((min((((/* implicit */long long int) arr_42 [i_11])), (var_17))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))))))));
                            }
                        } 
                    } 
                    var_42 &= ((/* implicit */unsigned char) (~(18446744073709551615ULL)));
                    var_43 -= ((/* implicit */unsigned char) 1930223570991725155ULL);
                    arr_44 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (6017024006951768301LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
        arr_45 [(unsigned short)2] [(unsigned short)2] = 7ULL;
    }
}
