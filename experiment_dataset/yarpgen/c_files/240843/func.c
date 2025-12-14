/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240843
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((-1) + (2147483647))) << (((((min((((/* implicit */int) arr_0 [i_1 + 1])), (var_7))) + (952361089))) - (15))))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_11 -= ((/* implicit */_Bool) min((((unsigned long long int) arr_11 [i_1 + 1] [i_0])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_1 + 1] [i_1 + 1])), (var_4))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */int) arr_6 [i_1] [i_3] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_2]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0)))));
                                var_12 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 532212665)), (9223372036854775788LL))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_8)) + (arr_12 [i_0] [i_3] [i_3] [i_0])))) ? (((/* implicit */long long int) var_9)) : (min((((/* implicit */long long int) arr_4 [i_0])), (arr_10 [i_0] [i_3] [(unsigned short)0] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    var_13 = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((int) arr_11 [i_1 + 1] [i_1 + 1])) >> ((((~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_1])))) + (38588)))))) : (((/* implicit */signed char) ((((int) arr_11 [i_1 + 1] [i_1 + 1])) >> ((((((~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_1])))) + (38588))) - (16488))))));
                    var_14 -= ((/* implicit */long long int) ((min((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_0]), (arr_10 [i_1] [i_1 + 1] [i_1] [i_0]))) <= (((/* implicit */long long int) (+(var_9))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 1) 
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((var_1) + (((((/* implicit */_Bool) arr_6 [i_0] [i_5 - 1] [i_5 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1] [i_1] [i_1] [i_0]), (arr_16 [i_0] [i_0] [i_0]))))) : (((unsigned int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_5] [i_6]) - (arr_12 [i_0] [i_1] [i_1] [i_0])))) ? (arr_12 [i_0] [i_1] [(signed char)8] [i_6]) : (min((arr_12 [(unsigned char)4] [i_1] [(signed char)9] [i_6]), (arr_12 [i_0] [i_1] [i_5 + 1] [i_6])))));
                        arr_21 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) 1765016446);
                        arr_22 [(_Bool)1] [i_1] [(short)6] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) -1765016455));
                    }
                    arr_23 [i_1] = ((/* implicit */unsigned int) max((((unsigned long long int) min((((/* implicit */int) arr_16 [i_0] [i_1] [i_0])), (-1765016455)))), (((/* implicit */unsigned long long int) ((long long int) 1765016446)))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 6; i_8 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_8] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_27 [i_0] [i_0] [(unsigned short)4] [i_7] [i_8 + 3]), (((/* implicit */signed char) ((_Bool) var_4)))));
                                arr_29 [i_1] [i_7] [i_1 + 1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5 - 1] [i_1 + 1])) - (((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1]))))), (((long long int) ((((/* implicit */int) arr_25 [i_0] [i_1])) + (((/* implicit */int) arr_11 [i_0] [i_7])))))));
                                arr_30 [i_8 + 3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_6 [i_5 - 1] [i_1] [i_5] [i_1])), (arr_18 [i_5 - 1] [i_5 - 1] [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_18 [i_5 - 2] [i_5 - 2] [i_1]))))));
                                arr_31 [i_5] [i_1] = ((/* implicit */signed char) arr_19 [i_1] [(unsigned char)3] [(unsigned char)3] [i_7] [i_7]);
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-1765016455) / (1765016447)))) ? (max((((/* implicit */int) arr_16 [i_8 + 3] [i_1] [i_5 - 1])), (-1765016430))) : (min((((((-1765016447) + (2147483647))) << (((var_1) - (1147312836U))))), (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_9])) > (((/* implicit */int) ((((/* implicit */_Bool) -1765016446)) || (((/* implicit */_Bool) 1765016447)))))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1765016447)) & (arr_33 [(_Bool)1])))) ? (arr_33 [(_Bool)1]) : (((/* implicit */unsigned long long int) 1765016454))));
        arr_35 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) == (var_7)));
        var_19 = ((/* implicit */signed char) ((-1765016446) + (1765016466)));
    }
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        arr_40 [i_10] [i_10] = ((/* implicit */int) ((_Bool) ((unsigned char) arr_7 [i_10] [i_10] [i_10])));
        arr_41 [i_10] = ((/* implicit */signed char) var_3);
        var_20 ^= ((/* implicit */_Bool) arr_1 [i_10] [i_10]);
    }
    var_21 = ((/* implicit */unsigned short) var_5);
    var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_1) & (((/* implicit */unsigned int) var_2))))) | (var_6)));
}
