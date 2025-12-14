/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43559
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
    var_19 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [2ULL] [i_1] = ((/* implicit */unsigned int) max((max((((/* implicit */int) min((((/* implicit */short) var_9)), (arr_5 [i_1] [2LL])))), ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) ((short) arr_8 [i_0 - 2] [i_0 - 1] [(unsigned short)0] [i_0 + 1])))));
                        arr_11 [i_0] [(signed char)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_1) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)5]))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_8 [i_0 - 2] [i_0] [i_0 - 2] [0LL]))))) > (((/* implicit */unsigned long long int) min((max((arr_1 [i_2]), (arr_1 [i_0]))), (((/* implicit */unsigned int) ((short) arr_3 [i_3]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                    {
                        arr_15 [(_Bool)1] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((arr_12 [i_0] [i_1] [i_2] [(unsigned char)4]) || (((/* implicit */_Bool) arr_2 [(unsigned short)7] [(unsigned short)7] [i_2])))) || ((!(((/* implicit */_Bool) arr_3 [i_0]))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_1] [i_4])) <= (((/* implicit */int) arr_4 [i_0 - 4])))))));
                        var_21 = ((/* implicit */short) ((long long int) arr_1 [i_1]));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [(unsigned short)7] [i_0] = ((/* implicit */int) arr_12 [(short)4] [i_1] [(short)4] [i_4 - 1]);
                    }
                    var_22 ^= min((((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (arr_2 [i_0 + 2] [i_1] [9U]))), ((+(((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 3])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_17))))))));
    var_24 &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((1286295608U) * (1286295614U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned char) 1286295617U))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_5] [i_6 - 1] [i_7] [i_7])) ? ((-(((/* implicit */int) (unsigned short)19)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5] [i_6] [(unsigned short)12])), (arr_19 [i_5])))))))));
                    arr_27 [i_5 - 1] [i_6 - 1] [i_7] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_17 [i_5 - 1]), (arr_17 [i_5 - 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) arr_19 [i_7]);
                        arr_30 [i_5] [i_6 + 1] [0LL] [i_5] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (var_5)))) ? (arr_26 [i_5 - 1] [i_6 - 1] [i_6 + 2] [i_8 + 3]) : (arr_29 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 1]))));
                        arr_31 [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_21 [i_5 + 1] [i_6 + 2] [i_8 + 1]))), (arr_18 [(unsigned short)3] [i_8 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 4) /* same iter space */
                    {
                        arr_34 [i_6] [i_6] [i_7] [i_9] [i_9 + 1] [i_9] = ((/* implicit */long long int) var_11);
                        arr_35 [(short)6] [i_6 - 1] [i_7] [(signed char)15] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_8)))));
                        var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((int) var_4)))));
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 21; i_11 += 3) 
                    {
                        for (signed char i_12 = 2; i_12 < 22; i_12 += 3) 
                        {
                            {
                                arr_44 [i_5] [i_6] [i_10] [20ULL] [i_12 + 1] = ((/* implicit */short) var_10);
                                arr_45 [i_10] = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_19 [i_5 - 2])))));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((short) max((((/* implicit */int) arr_40 [i_6 - 1] [i_5])), (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_43 [i_5] [i_5])) - (32)))))))))));
                                arr_46 [i_11 - 3] [i_6] [i_10] [i_11] [i_12] = ((/* implicit */long long int) max((min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)109)) <= (((/* implicit */int) arr_25 [i_5]))))), ((unsigned short)44636))), (min((arr_22 [i_5 - 2]), (arr_22 [i_5 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_30 += ((/* implicit */unsigned long long int) arr_33 [i_5] [i_6] [i_10] [i_14]);
                                var_31 += ((/* implicit */short) (+((+((+(((/* implicit */int) (unsigned char)141))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_15] [i_15])) > (((/* implicit */int) var_17))));
                        arr_60 [i_5] [(signed char)5] [10U] [i_15] [(short)1] [(unsigned short)9] = (~(((/* implicit */int) arr_37 [i_15])));
                        arr_61 [i_5] [i_15] [i_16] = ((/* implicit */unsigned int) (-(arr_58 [i_6 + 1])));
                    }
                    arr_62 [(signed char)6] [i_6] [i_15] = ((unsigned long long int) var_4);
                    arr_63 [i_5] [i_5 - 2] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_51 [i_5] [(signed char)17] [i_15 + 2] [i_15]))));
                }
                var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_32 [i_6 + 2])))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5 - 2] [i_6 + 1] [(unsigned char)5])) ? (((/* implicit */int) arr_22 [i_5 + 1])) : (((/* implicit */int) arr_22 [i_5 - 1]))))) ? (((/* implicit */int) arr_24 [i_5 - 2] [i_6 + 2] [i_5 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6] [i_6])))))));
                var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (var_1) : (var_13))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_5] [i_5]))))) : ((+(((/* implicit */int) (unsigned char)97))))));
            }
        } 
    } 
}
