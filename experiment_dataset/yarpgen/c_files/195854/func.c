/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195854
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0 - 2] [(unsigned short)8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_12)))) ? (var_2) : (((/* implicit */int) arr_0 [i_0 - 2]))));
                    arr_9 [i_0 + 2] [i_0 + 2] [i_1] [7] |= ((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1] [i_0 - 1]) & (var_0)));
                }
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (+(arr_3 [i_0] [i_1])));
                    var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) <= (var_11))))) : (arr_5 [i_3])))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-90)) ? (4107771191429044667ULL) : (((/* implicit */unsigned long long int) 1190369329U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4107771191429044667ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32763))));
                                var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 3468675586U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) <= (((var_8) << (((arr_19 [i_0 + 1] [i_0 + 1]) - (1086200967))))))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_5 + 1])) ? (((/* implicit */int) max(((short)32762), (((/* implicit */short) var_4))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) arr_4 [i_6] [i_5 + 1] [(_Bool)1]))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) (((+(((/* implicit */int) (unsigned short)35060)))) == (((/* implicit */int) max((arr_0 [(unsigned char)7]), (((/* implicit */signed char) var_3)))))))))))));
                                arr_23 [6] [i_4] [(unsigned char)5] = ((/* implicit */long long int) (~((((+(arr_19 [(_Bool)1] [(_Bool)1]))) - ((+(((/* implicit */int) var_3))))))));
                                var_17 += var_4;
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_4] [(_Bool)1] [i_4] &= ((/* implicit */int) arr_20 [i_0] [i_0] [(short)2] [2U]);
                    var_18 &= ((/* implicit */_Bool) max(((~(arr_18 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((var_5) + (arr_13 [i_4] [5LL] [i_0] [5]))) : (((((/* implicit */int) (unsigned short)384)) << (((var_1) - (3924841169U))))))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_19 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (arr_20 [i_0 + 1] [i_8] [i_1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (var_0) : (((/* implicit */long long int) (+(var_5))))))), (((((/* implicit */_Bool) var_6)) ? ((+(var_10))) : (((/* implicit */unsigned long long int) var_1))))));
                            /* LoopSeq 1 */
                            for (int i_9 = 2; i_9 < 10; i_9 += 2) 
                            {
                                var_20 ^= ((/* implicit */short) min((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_20 [(signed char)3] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_13 [(short)3] [i_7] [(unsigned short)7] [i_9 - 1])) : (arr_20 [i_0] [i_0] [i_0 + 3] [(unsigned char)8]))))), (((var_1) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-67)) ? (var_5) : (((/* implicit */int) (short)32765)))))))));
                                var_21 = ((/* implicit */unsigned short) var_3);
                                var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1] [i_7])) ? (var_12) : (var_12)))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [(unsigned short)4] [(short)6] [10LL] [(short)6] [4] [(short)6] [(short)6])) : (((/* implicit */int) arr_26 [i_0 + 2] [i_1] [i_8] [i_0 + 2]))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_1] [(unsigned short)1])))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(17847283541343125684ULL)))) ? ((~(((/* implicit */int) (short)-32766)))) : ((~(((/* implicit */int) var_4)))))) ^ ((~(((/* implicit */int) var_4)))))))));
                                var_24 = ((/* implicit */unsigned char) var_0);
                            }
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_1] [i_1]))) : (var_1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
    var_27 = ((/* implicit */unsigned char) var_8);
}
