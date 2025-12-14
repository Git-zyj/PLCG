/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201725
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
    var_12 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((var_8) <= (((/* implicit */long long int) ((((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2])))))))))));
                    var_14 = ((/* implicit */_Bool) var_10);
                    var_15 = ((/* implicit */_Bool) ((max((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_1)))))) & (((/* implicit */int) ((((unsigned int) var_0)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [2] [i_2])))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_3]);
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (+(((int) arr_4 [i_1] [i_2] [i_3])))))));
                        var_18 = ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (signed char)1)) ? (100930543U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))))))) << (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_10 [i_3] [i_3] [i_3] [17ULL] [i_3])))));
                        var_19 = ((/* implicit */unsigned char) ((unsigned int) var_6));
                        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_11)) > (var_10)))) % (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_11)))))), ((~(((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) var_1))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) != (arr_13 [(short)16] [10U] [i_2] [i_2] [i_2])))) > (((/* implicit */int) arr_2 [i_0])))))))))));
                        var_22 = ((/* implicit */unsigned short) (~(max((((arr_7 [i_0] [i_1] [i_2] [i_4]) ^ (((/* implicit */unsigned long long int) var_4)))), (arr_14 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [i_2])))));
                    }
                    for (signed char i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */int) var_3)) << (((((arr_14 [i_1] [i_2] [i_5] [i_5] [i_5 - 1]) + (arr_7 [i_2] [i_2] [i_2] [i_2]))) - (6082935634521476092ULL)))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_0))));
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_6 [i_0] [i_1])))))) ^ (((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5 + 3] [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_5] [i_5 - 2] [i_5 + 2] [i_5] [i_5] [i_5]))))));
                            var_27 = (i_2 % 2 == zero) ? (((/* implicit */short) ((var_7) >= (((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_2] [i_5] [i_6])) ? (((arr_7 [(short)12] [(signed char)17] [i_5 - 1] [i_6]) << (((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6]) - (1936261849224893623ULL))))) : ((+(arr_14 [i_2] [i_1] [i_1] [i_1] [i_1])))))))) : (((/* implicit */short) ((var_7) >= (((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_2] [i_5] [i_6])) ? (((arr_7 [(short)12] [(signed char)17] [i_5 - 1] [i_6]) << (((((arr_18 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6]) - (1936261849224893623ULL))) - (1978415120762529058ULL))))) : ((+(arr_14 [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) var_5);
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */short) arr_1 [i_8]);
                            var_31 = ((/* implicit */short) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [(short)0] [i_1]))) >= (arr_1 [i_1]))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (short)24230)) < (((/* implicit */int) (unsigned short)65520))));
                            var_33 = ((/* implicit */unsigned char) ((arr_17 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_5 + 3] [i_2] [i_9 - 1] [i_9] [(signed char)6]))))))));
                            var_34 |= ((/* implicit */unsigned char) ((max((arr_15 [i_0] [i_5] [(unsigned char)15] [i_5] [i_5 + 2] [3U]), (arr_15 [(_Bool)1] [(unsigned short)15] [i_0] [i_0] [i_5 + 3] [i_5 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_0] [7] [i_5] [i_5 + 3])))) : (((unsigned int) var_10))));
                        }
                        var_35 = ((unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (arr_14 [i_2] [i_0] [i_1] [i_2] [i_5]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 2; i_11 < 15; i_11 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_1] [i_2] [i_10] [2U]);
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11 + 3] [i_0] [i_10] [i_10] [(_Bool)1]))) ^ (((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (var_10)))) ? (((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_10] [i_11])) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        }
                        var_38 *= ((/* implicit */unsigned char) min((((/* implicit */signed char) arr_15 [(signed char)17] [i_1] [i_1] [i_1] [i_1] [i_1])), (var_1)));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) < (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (short i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        var_40 = ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2]) - (((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_2] [i_1] [i_1] [5U]))));
                        var_41 &= ((/* implicit */unsigned short) var_1);
                        var_42 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_15 [i_0] [i_12] [i_2] [i_1] [i_1] [i_1]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_12 + 2])))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))) * (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_13] [(unsigned char)15]))) : ((~(var_9)))))));
                        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) max(((signed char)113), ((signed char)126))))));
                        var_45 = ((long long int) ((var_10) & (((/* implicit */int) arr_3 [i_1]))));
                    }
                }
            } 
        } 
    } 
}
