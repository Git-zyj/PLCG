/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241279
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) -6569578912895317030LL));
        var_18 = ((/* implicit */unsigned short) min((var_18), (var_8)));
        var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (-6569578912895317035LL) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 2321435893U)) : (-6569578912895317030LL))));
        var_20 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1] [i_1])), (arr_0 [i_1])))), (((var_17) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (var_0)))) : (((/* implicit */int) var_3))))));
        arr_6 [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1]))));
        arr_7 [2LL] |= ((/* implicit */short) ((unsigned char) var_12));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned short) arr_3 [i_1])))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 2321435885U)) : ((-9223372036854775807LL - 1LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_3 [i_2]))));
        arr_11 [6LL] [i_2] = ((/* implicit */short) ((signed char) arr_0 [(unsigned short)10]));
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) arr_3 [i_2]))));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 4; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((short) 1973531396U));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6 - 1] [(signed char)8] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) : (var_2)));
                            var_26 = ((/* implicit */short) arr_9 [i_6]);
                            arr_29 [i_7 - 3] [i_5] [i_6] [(short)11] [1LL] [i_5] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_5 + 1] [i_5 + 1] [i_5 - 1]))));
                        }
                        for (long long int i_8 = 4; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(arr_31 [i_8 - 3] [i_6 + 1] [i_5 + 1]))))));
                            arr_32 [i_4] [i_4] [i_5] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((signed char) (signed char)-67));
                        }
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -6569578912895317025LL)) ? (2321435889U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13065)))))))));
                        arr_33 [i_5] [i_4] [i_4] [i_5] [i_5 - 1] [i_6] = ((/* implicit */short) var_8);
                    }
                    arr_34 [i_5] [i_3] [i_5] = ((/* implicit */short) ((unsigned long long int) (unsigned short)17194));
                    var_30 = ((/* implicit */long long int) max(((signed char)1), (((/* implicit */signed char) (_Bool)1))));
                    arr_35 [i_5 + 1] [i_4] [i_3] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)24058))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41477))) : (6569578912895317039LL)))) ? (((12114509819189252083ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4198))));
                    arr_36 [i_3] [i_4] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) (!((_Bool)0)));
                }
            } 
        } 
    } 
}
