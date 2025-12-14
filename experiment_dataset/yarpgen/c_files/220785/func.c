/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220785
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_8);
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) var_15);
                    var_20 |= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) var_15);
                        var_22 = ((((unsigned int) 7577567850642992813LL)) * (((/* implicit */unsigned int) ((int) arr_3 [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */int) var_13);
                            arr_15 [i_1] [i_1] [i_2 - 1] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [20ULL] [i_1] [i_2] [i_1] [i_1])) ? (arr_4 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) var_17)) : (arr_4 [i_2])))));
                        }
                    }
                    for (int i_5 = 3; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (438238338U) : (((/* implicit */unsigned int) var_9)))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2 + 1] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1])) / (((/* implicit */int) var_7)))))));
                        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_2)), (max((min((arr_7 [i_0] [i_1] [i_1] [i_5]), (((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((signed char) (unsigned short)65517)))))));
                        arr_19 [(short)11] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_13)))) ? (((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_1] [i_1] [i_2 - 1])) ? (arr_7 [i_5 + 2] [i_1] [i_1] [i_2 + 1]) : (arr_7 [i_5 + 2] [i_1] [i_1] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10246360809395973923ULL)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) var_11))))) ? (arr_10 [i_5 - 3] [i_5 + 2] [i_1] [i_0 + 1]) : (((((/* implicit */int) var_11)) * (((/* implicit */int) var_6))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_26 = var_12;
                        arr_22 [i_0] [19LL] [i_1] [i_0] [i_0] = (+(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65517))) : (14519480395206479633ULL))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 - 1] [17ULL] [i_2 - 1] [i_2 + 1] [i_6 - 1]))));
                        var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(unsigned short)20] [i_0] [i_0 - 2] [i_0] [i_2 + 1])) ? (((/* implicit */int) arr_20 [(unsigned short)0] [(unsigned short)0] [i_0 + 1] [i_2] [i_6 + 2])) : (((/* implicit */int) arr_20 [(unsigned char)12] [i_0 + 1] [i_0 - 1] [i_1] [i_6]))));
                    }
                    var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((unsigned short) var_7))) ? (min((arr_11 [i_2] [i_1] [i_2 - 1] [i_2 - 1]), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_6))))))));
                }
                for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (~((~(arr_17 [i_0] [i_0] [i_1] [i_0] [i_0 - 1] [i_0 - 1])))));
                    var_31 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [7])), (arr_10 [i_1] [i_0 + 1] [i_0] [i_0 - 1]))), (((/* implicit */int) var_18))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */short) arr_2 [i_0 + 1] [i_0]);
                        var_33 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_14 [i_8] [i_7] [i_7] [i_1] [i_1] [i_0] [i_0]))));
                        var_35 = var_8;
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) ((unsigned int) arr_26 [i_8] [i_9 - 1] [i_9] [i_8] [i_9 - 1]));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) & ((~(arr_25 [i_0] [i_1] [i_7] [i_9]))))))));
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_9 - 1] [(signed char)19] [i_9 - 1] [i_9 - 1] [i_9])) - (((/* implicit */int) (unsigned short)65499))))) : (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (17146716796968896156ULL)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_20 [i_8] [i_1] [i_1] [i_1] [i_1]))));
                            arr_32 [i_10] [i_8] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */unsigned int) arr_8 [i_1]))));
                        }
                        for (signed char i_11 = 1; i_11 < 19; i_11 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) var_1);
                            arr_36 [i_0 - 1] [i_1] [i_0 - 1] [(unsigned short)18] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0 + 1] [i_0] [i_0 - 2] [i_0]))) + (7934875317900776496LL)));
                            var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                        }
                    }
                }
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7934875317900776504LL)))) ? (arr_25 [i_1] [i_1] [i_1] [i_1]) : (((((/* implicit */_Bool) (short)-29666)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13)))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_4)) != (arr_11 [i_0] [i_1] [i_0] [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(1300027276740655453ULL)))))))));
                var_43 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned short)16)) - (((/* implicit */int) (unsigned short)4)))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_28 [i_0] [18] [i_1] [i_1]))))))) ? ((+(((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(_Bool)1])))) : (min((((((/* implicit */_Bool) (unsigned short)40)) ? (((/* implicit */int) arr_29 [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_0])) : (arr_11 [i_0] [0U] [i_0] [i_0 - 1]))), (((/* implicit */int) min(((unsigned short)13), (((/* implicit */unsigned short) (short)-12989)))))))));
            }
        } 
    } 
    var_44 = ((/* implicit */short) (+(min((((var_4) ? (((/* implicit */long long int) 4294967290U)) : (-1LL))), (((/* implicit */long long int) var_2))))));
    var_45 *= ((/* implicit */_Bool) var_16);
}
