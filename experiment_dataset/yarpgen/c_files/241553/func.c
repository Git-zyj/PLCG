/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241553
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-19)))) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [(_Bool)1]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */int) (signed char)18);
                            arr_13 [(unsigned short)13] [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2977404715064582998LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [1LL] [0U])))))) ? ((~(((/* implicit */int) (unsigned short)10694)))) : (((/* implicit */int) (unsigned short)11610)))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_12 [(_Bool)1] [0U] [i_2] [i_2 - 1])), (arr_9 [i_3])))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_2 - 2] [i_0] [i_2 - 4]))) : (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))))))));
                            arr_14 [i_0] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) 3919842447U)) ? (16533862485664197345ULL) : (((/* implicit */unsigned long long int) -12)))), (((/* implicit */unsigned long long int) min(((unsigned short)60453), (arr_7 [i_0] [i_0] [i_0] [i_3]))))))));
                        }
                        for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (2372602864U)))) : (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0]))) : (16533862485664197345ULL))))))));
                            arr_17 [i_0] [i_0] [(unsigned char)13] [i_3] [(unsigned char)13] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) arr_11 [i_5] [i_2] [i_0] [i_5] [i_2] [9] [i_0])), (((((/* implicit */int) arr_16 [i_3] [i_2] [i_2 - 1] [i_0])) << (((/* implicit */int) var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (arr_3 [i_0])))))))));
                            arr_18 [i_0] [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) var_1);
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_21 [i_0] [(short)3] [15U] [i_3] [i_6] = ((/* implicit */signed char) 9U);
                            arr_22 [i_0] [(short)15] [i_6] [(unsigned char)10] [i_6] = ((/* implicit */long long int) (signed char)4);
                        }
                        var_19 = ((/* implicit */unsigned char) (~(1922364438U)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned long long int) arr_15 [i_8 + 1] [i_8 - 2] [i_8 - 2] [(_Bool)1] [i_8 - 2])), (((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (11457880394873774268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28)))))))))));
                            var_21 = ((/* implicit */long long int) arr_20 [i_8 - 2] [i_0] [i_2 + 1] [i_0] [i_0]);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(arr_3 [i_0])));
                            arr_29 [i_0] [i_2] [i_0] [i_8] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min(((short)-22220), (((/* implicit */short) arr_1 [i_8])))))))));
                        }
                        var_22 = var_14;
                        arr_30 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (signed char)-18));
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        arr_34 [i_9] [i_1] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((var_3) << (((/* implicit */int) arr_19 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) var_13))));
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1922364439U)))))) < (min((1922364440U), (var_6)))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1546516302)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)1] [i_9] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) var_5)))))))));
                    }
                    var_25 -= ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)204)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((unsigned char) var_2))))))));
}
