/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21820
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
    var_15 = ((/* implicit */unsigned short) ((unsigned char) 1432071507U));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) var_14);
        arr_4 [i_0] = (((!(((/* implicit */_Bool) (signed char)90)))) ? (((((/* implicit */_Bool) (unsigned short)54374)) ? (max((((/* implicit */unsigned int) var_11)), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))))) : (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) var_1))))) ? (max((arr_0 [i_0] [i_0]), (4158340655U))) : (max((((/* implicit */unsigned int) (short)-5983)), (var_12))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_16 ^= ((/* implicit */unsigned int) arr_1 [i_2 + 1]);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_2 + 1])) ? (arr_0 [i_2 - 1] [i_2 + 1]) : (arr_0 [i_2 + 1] [i_2 - 1])))));
                        var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_2])))) ? ((+(max((arr_5 [i_0]), (((/* implicit */unsigned int) arr_11 [i_0] [i_2 + 1] [10ULL] [i_0])))))) : (((/* implicit */unsigned int) (+(var_6))))));
                        arr_12 [i_1] [i_1] [(signed char)10] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_1)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)55019))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)27))))) == (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [18ULL])), (var_5)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)1] [i_4])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_9 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_4])) ? (((/* implicit */int) arr_10 [(unsigned char)2] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [12LL] [(_Bool)1] [12LL] [i_1])))))))));
                        var_21 = ((/* implicit */short) arr_0 [i_4] [i_4]);
                        arr_16 [9ULL] [i_2] [i_1] [i_4] = arr_15 [i_0] [i_2 - 1] [i_4 + 1] [i_1];
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_22 ^= max((arr_13 [i_5 + 1] [i_2 + 1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_19 [i_0] [i_0] [i_0])))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_0 [i_5 + 1] [i_0]);
                        arr_20 [i_1] [i_1] [i_1] [4U] [i_5] = ((/* implicit */signed char) (+(((max((arr_7 [i_1] [i_2 - 1] [i_1] [i_1]), (arr_0 [(signed char)20] [i_2]))) ^ (arr_7 [i_5] [i_5 + 1] [i_5] [i_1])))));
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) 726139813U);
                        var_24 -= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((arr_2 [i_0]) - (17179869183LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_19 [i_0] [i_0] [i_0]), (var_8))))) : (((unsigned int) (unsigned short)55019)))));
                    }
                    var_25 *= (((+(((/* implicit */int) (short)-5983)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)15] [7U] [i_1])) && (((/* implicit */_Bool) var_11))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_26 -= ((/* implicit */unsigned short) var_14);
                        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(8695455972993040104ULL)))) || (((/* implicit */_Bool) 1432071507U))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (arr_17 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_27 [i_0] [16] [(unsigned short)4] [i_6] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) arr_8 [i_6] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_0] [(signed char)22] [i_2 + 1])) : (((/* implicit */int) arr_8 [(unsigned char)20] [(unsigned char)20] [i_2 + 1])));
                            var_29 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [16LL] [i_2] [i_6] [i_7])) - (((/* implicit */int) ((var_4) < (((/* implicit */long long int) 136626640U)))))));
                            var_30 = ((/* implicit */unsigned int) var_10);
                        }
                    }
                    arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_1])) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_5 [i_1])))))) ? (((unsigned long long int) max((var_2), (arr_5 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [(_Bool)1])))));
                    arr_29 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2] [20LL] [i_1])) ? (arr_18 [i_2] [i_2 - 1] [21] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_3))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])), ((+(((/* implicit */int) arr_23 [(_Bool)1] [2U] [i_0] [i_0])))))))))));
    }
    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (+(var_4))))));
}
