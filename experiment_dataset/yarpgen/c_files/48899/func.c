/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48899
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
    var_19 = ((short) min(((signed char)-78), ((signed char)-48)));
    var_20 = ((/* implicit */long long int) min((((int) ((var_17) != (((/* implicit */unsigned long long int) var_18))))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_21 = var_8;
                    arr_8 [i_2] [i_1] = ((/* implicit */long long int) min((min((arr_7 [i_0] [i_1] [i_2]), (arr_0 [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0]))) : (arr_2 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) : (arr_0 [i_1])))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_2])))) ? (((arr_9 [i_2]) | (((/* implicit */unsigned long long int) var_12)))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
                        var_23 = ((/* implicit */signed char) var_12);
                        var_24 = ((/* implicit */short) (((~(arr_10 [i_0] [9LL] [i_0] [(unsigned char)8]))) < (((/* implicit */int) arr_4 [i_2] [i_2] [i_1] [5LL]))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_2] [i_4] [i_2] [i_3] [i_4] [(_Bool)1] = ((/* implicit */long long int) (+(max((min((4294967292U), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_3])))), (min((4248630051U), (((/* implicit */unsigned int) arr_7 [1LL] [i_1] [i_1]))))))));
                            arr_14 [i_2] [(unsigned char)8] [i_2] [(unsigned char)8] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (var_5) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (signed char)58))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_0]);
                            arr_18 [i_2] [i_3] [i_1] [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max(((unsigned short)65529), (((/* implicit */unsigned short) (signed char)4))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)74)), (min((((/* implicit */unsigned short) (_Bool)1)), (var_16)))))) ? (9223372036854775807LL) : (((/* implicit */long long int) 65520U)))))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_27 = arr_16 [i_0] [i_1] [i_2] [i_3] [i_2];
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(var_6))))));
                            var_29 = ((/* implicit */int) (short)5);
                        }
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_24 [i_2] [(unsigned char)8] [i_2] [i_1] [i_2] [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */long long int) var_3)), (arr_12 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) (~(var_5))))));
                        var_30 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_7])))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_31 = ((min((((long long int) 4294901798U)), (((/* implicit */long long int) (+(arr_30 [i_0] [i_2])))))) <= (((/* implicit */long long int) (+(((int) arr_23 [i_9] [1U] [7LL] [i_2] [i_0] [i_0]))))));
                            var_32 ^= ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [10] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_15)) : (var_2))))) > ((~(1584356956U)))));
                            arr_31 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_19 [i_2] [(signed char)4] [i_1] [i_2] [i_8 - 1] [(signed char)4]);
                            arr_32 [i_2] [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((14689176937925797709ULL) ^ (((/* implicit */unsigned long long int) 932085797U))));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (min((46337220U), (((/* implicit */unsigned int) (signed char)20)))))))));
                            arr_35 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(4248630059U)));
                            var_34 -= ((/* implicit */unsigned int) (~(max((-721276943), (((/* implicit */int) (_Bool)1))))));
                            var_35 = ((/* implicit */int) min((var_35), ((+(((/* implicit */int) ((_Bool) 0U)))))));
                        }
                        for (int i_11 = 1; i_11 < 9; i_11 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) arr_15 [i_8 + 1] [i_1] [(unsigned char)6] [i_11 + 3]);
                            arr_38 [i_0] [i_0] [i_1] [i_2] [(short)0] [i_2] [6U] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) var_9)), (arr_12 [i_0]))) >= (var_12))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_33 [0ULL] [i_1] [i_2] [i_11] [i_11] [i_8] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_18)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_36 [i_11] [i_8] [i_0] [i_0] [i_0])) : (var_17)))))));
                            arr_39 [i_0] [0LL] [i_2] [i_2] [i_11 + 3] = ((/* implicit */unsigned short) (_Bool)1);
                            var_37 = ((/* implicit */unsigned char) arr_27 [i_8] [i_1] [i_2] [(_Bool)1] [i_11] [i_0]);
                        }
                        var_38 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_2 [5U] [i_0] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            arr_42 [i_2] [i_8] [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) arr_15 [(unsigned char)2] [i_8] [i_2] [i_0])), (var_10)));
                            arr_43 [i_0] [11ULL] [i_2] [8U] [i_8] [i_12] = ((/* implicit */signed char) 65516U);
                        }
                    }
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        arr_47 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) || (((/* implicit */_Bool) max((var_14), (arr_12 [i_0]))))))) <= (((/* implicit */int) arr_20 [i_0] [i_1] [7ULL] [i_2] [i_2]))));
                        arr_48 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((int) ((var_12) < (((/* implicit */long long int) var_3)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_14 = 2; i_14 < 7; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            {
                var_39 = ((/* implicit */int) (unsigned short)6);
                arr_53 [i_14] [i_14] = ((/* implicit */_Bool) (~((-((+(var_3)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_40 = ((/* implicit */int) max((var_40), ((((_Bool)1) ? ((~(((/* implicit */int) arr_54 [i_16] [i_17])))) : (((/* implicit */int) var_16))))));
                arr_62 [i_17] [i_17] [i_17] = ((/* implicit */int) arr_54 [i_16] [0]);
                arr_63 [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_60 [i_16] [i_17])))))))));
            }
        } 
    } 
}
