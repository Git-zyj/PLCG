/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36568
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) arr_10 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_2]);
                                var_15 = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] [i_0])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1] [i_2]) != (arr_3 [i_2] [(short)8] [i_2])))), (arr_0 [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) 4510856695480512744ULL);
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_17 |= ((/* implicit */unsigned long long int) (+(var_9)));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_9))));
                        arr_24 [i_5] [(_Bool)1] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((18446744073709551612ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) arr_1 [i_5]);
                        arr_27 [(unsigned char)16] [i_6] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12034)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_21 [i_5] [i_6] [i_7] [i_7])))) ? (max((arr_0 [i_5]), (((/* implicit */unsigned long long int) -6848239904239166674LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [9U] [0ULL])) || (((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) max((arr_23 [i_5] [i_6] [i_7] [17ULL] [i_5] [3U]), (((/* implicit */signed char) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_9 [i_5] [i_6] [i_7] [i_9] [i_9])))))) : (var_8)))));
                    }
                    var_20 -= ((/* implicit */long long int) ((-1822250709) != ((~(((/* implicit */int) (short)12034))))));
                    var_21 *= ((/* implicit */unsigned long long int) arr_7 [i_7] [i_6]);
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_5] [i_5] [i_6] [i_6] [i_7])) - (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_7] [i_5] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_32 [i_11] [i_10] [i_6] [i_6] [6U])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [i_5] [i_7])))));
                                var_23 = ((/* implicit */long long int) (_Bool)1);
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [(signed char)4] [i_6])), (arr_20 [i_7] [i_6] [i_7] [i_10] [i_7] [15ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_7]))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) / (var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_28 [i_5] [i_6] [i_5] [i_10]) / (((/* implicit */int) arr_11 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : ((+(arr_16 [i_5] [11])))))));
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) arr_26 [i_5] [i_6] [i_12] [i_13]);
                                var_26 = var_0;
                                var_27 = ((/* implicit */short) arr_11 [(short)19]);
                                var_28 += ((unsigned long long int) max((arr_2 [i_12]), (((/* implicit */long long int) (short)12034))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12034)) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                                var_30 = ((/* implicit */_Bool) max((((var_5) - (arr_3 [13] [i_6] [i_6]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_5] [i_6] [i_12] [i_15] [i_15] [i_16])))))));
                                arr_45 [i_5] [i_6] [i_12] [i_15] [i_16] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (6848239904239166667LL) : (((/* implicit */long long int) 2116592711))))) ^ (min((((/* implicit */unsigned long long int) arr_16 [i_15] [i_5])), (5001406833086308287ULL))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_2), (((/* implicit */signed char) var_11))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_35 [(signed char)14] [i_6])) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [(_Bool)1] [i_6] [i_12] [i_12] [i_12])))))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (((min((arr_3 [17LL] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) var_0)))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                }
                for (signed char i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
                {
                    arr_50 [i_5] [(_Bool)1] [i_5] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))) < (268435455ULL)));
                    var_33 |= ((/* implicit */unsigned char) (short)12034);
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8394)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14847)))))) ? (((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_17] [i_5] [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7314))) : (arr_20 [15ULL] [15ULL] [i_6] [i_6] [i_17] [i_17]))) : (arr_20 [i_17] [i_6] [(short)8] [(_Bool)1] [i_5] [i_6]))))));
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (((+(arr_1 [i_6]))) - (((/* implicit */unsigned long long int) var_9)))))));
                    var_36 |= ((/* implicit */short) var_10);
                }
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned int) (signed char)-118);
    var_38 = ((/* implicit */unsigned char) (unsigned short)15696);
}
