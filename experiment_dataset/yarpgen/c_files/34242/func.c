/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34242
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15))))) : (1673204184U)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (1439186213U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (max(((~(((/* implicit */int) (short)-1)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_5))))))));
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_23 = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [(short)15] [(short)15]))), (((/* implicit */unsigned int) max(((unsigned short)31647), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_0] [i_2 + 1])), (arr_4 [i_2 + 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-2878)) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_2 - 1])))) : (((((/* implicit */_Bool) (short)2596)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (short)4620)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2855781081U)) ? (arr_7 [i_4 + 1]) : (((((/* implicit */_Bool) arr_11 [(short)5] [(short)1] [(signed char)12] [i_3] [i_4 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)7] [i_4]))) : (max((arr_12 [(short)15] [(short)15] [i_2] [(short)15] [i_2] [i_2 - 1]), (var_0)))))));
                                arr_14 [i_0] [9U] [i_4] [i_4] [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_4] [(short)11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 2]))) : (((((/* implicit */_Bool) var_5)) ? (arr_6 [11LL] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16059))) : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0])))) ? (arr_12 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) (short)-4606)))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) arr_4 [i_2 - 1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1299918947U)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (short)26887)) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0])))));
    }
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_17 [(signed char)2]), (arr_17 [(short)8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)16])) ? (576460752303423487LL) : (((/* implicit */long long int) 1470169043U))))) || (((/* implicit */_Bool) ((signed char) arr_19 [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_19 [i_5 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_19 [i_5] [i_5 + 1]))))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) arr_19 [(unsigned short)8] [i_5])), (2855781082U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_5])) ? (((/* implicit */int) (short)4623)) : (((/* implicit */int) arr_19 [i_5 + 2] [i_5 + 2]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5])) ? (arr_18 [i_5] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-3298)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4623))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_5 - 1])) ? (arr_18 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [8LL] [i_5]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_27 = ((/* implicit */unsigned char) (short)4606);
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_19 [i_6] [11U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-13887), (arr_19 [i_6] [i_6]))))) : (max((32512U), (((/* implicit */unsigned int) (signed char)-1))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) : (((max((((/* implicit */long long int) arr_19 [i_6] [i_6])), (arr_18 [(_Bool)0] [i_6]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_6])))))))));
        arr_24 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) (short)4606)) : (((/* implicit */int) arr_23 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_23 [i_6] [i_6])) : (((/* implicit */int) arr_23 [i_6] [i_6])))) : (((/* implicit */int) arr_23 [i_6] [i_6]))));
    }
}
