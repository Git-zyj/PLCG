/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26583
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 741737049U)) ? (arr_1 [i_1 + 1] [i_1 + 4]) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3]))))) ? (((arr_1 [i_1 + 1] [i_1 + 4]) / (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3])))) : (((var_2) ? (arr_1 [i_1 + 1] [i_1 + 4]) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3]))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    arr_6 [i_0] = ((/* implicit */long long int) (~(((741737049U) | (3553230246U)))));
                    var_15 *= ((/* implicit */unsigned long long int) var_3);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) var_6);
                    var_16 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 741737049U))))) : (((/* implicit */int) arr_5 [i_1 + 4])))) <= (max((max((((/* implicit */int) arr_3 [i_1])), (var_5))), (arr_4 [(_Bool)1] [i_1] [i_1 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (463876669U)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10685298435883395766ULL))) : (((/* implicit */unsigned long long int) -791163019))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-786524709))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) (_Bool)1))))))))));
                }
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) max((min((((/* implicit */int) var_3)), (var_7))), (((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_1 + 4] [(_Bool)1])) ? (arr_4 [i_3 + 3] [i_1 + 4] [i_3 + 3]) : (((/* implicit */int) (_Bool)1))))));
                    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) max((arr_3 [i_1]), (((/* implicit */unsigned short) (unsigned char)108))))) > (((/* implicit */int) ((((/* implicit */_Bool) 741737049U)) && (var_3)))))))));
                    arr_12 [i_0] = ((/* implicit */int) (unsigned short)43812);
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [4ULL] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [(unsigned char)14] [i_6] [i_6] [i_6])) & (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_5 + 3] [i_5]))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15834)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_5] [i_5 - 3] [i_5] [i_5] [i_5 + 3] [i_5 - 3])))))));
                                var_20 = ((/* implicit */unsigned short) (((_Bool)0) ? (0) : (((/* implicit */int) (_Bool)0))));
                                arr_21 [i_0] [i_1] [i_1] [i_0] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_5 - 2] [i_4])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_5 + 2] [i_4]))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned short) (~(786524709)));
                    var_22 = ((/* implicit */long long int) (~(3553230247U)));
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1 + 4] [i_1 - 1] [i_1] [i_1 + 4] [i_1 + 4] [i_1])) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_13 [i_1] [i_1 - 1]))));
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_26 [i_0] [6U] [i_7] [i_7] |= ((/* implicit */unsigned int) min((max((805306368), (((((/* implicit */_Bool) (unsigned short)9929)) ? (((/* implicit */int) (unsigned short)15204)) : (((/* implicit */int) (unsigned char)50)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(-543751968)))) && (((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_7] [(unsigned short)9] [i_7] [i_1 + 1])))))));
                    arr_27 [i_0] [8] &= ((/* implicit */long long int) arr_19 [(unsigned short)5] [i_1] [i_1 + 4] [i_1 + 4] [i_7]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
        {
            {
                arr_34 [i_8] [9U] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_32 [i_9 + 2] [i_9 + 2]))))));
                arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) arr_3 [i_9]);
                var_25 = ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (_Bool)0)) : (1050850535));
                arr_36 [i_8] [i_8] [i_8] &= ((/* implicit */int) ((arr_1 [3] [i_9 + 1]) == (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >> (((((((/* implicit */_Bool) arr_4 [i_9] [i_9] [i_8])) ? (var_5) : (((/* implicit */int) arr_5 [i_8])))) - (1971837610)))))));
            }
        } 
    } 
}
