/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32665
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
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (63U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))) ? ((-(1135202113))) : (max((var_7), (1535271079))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [18U] = ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_14)))) : (371213495));
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (-1039643809) : (((/* implicit */int) (signed char)-2))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        var_22 = (((~(3233489027U))) >> (((/* implicit */int) ((((/* implicit */int) (short)-9070)) == (1308752549)))));
        arr_5 [i_0] |= ((unsigned int) arr_1 [i_0]);
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_21 [(signed char)12] [i_2] [(signed char)12] [i_2] [i_5] &= (-(((unsigned int) var_19)));
                                arr_22 [i_2] [i_2] = ((/* implicit */int) var_0);
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_3 + 1] [6] [i_3] [6] [(short)19] [i_3]), (((/* implicit */unsigned int) 950220700))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) min((max((arr_18 [i_1] [i_1 + 2] [i_3 + 2] [i_3] [i_3 + 2]), (max((arr_0 [i_2] [(signed char)11]), (((/* implicit */unsigned int) (short)9070)))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_1] [i_2])) ? (arr_20 [16] [i_2] [(signed char)12]) : (2080374784))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) var_4);
                                var_26 = ((((unsigned int) var_15)) << (((((((/* implicit */_Bool) (signed char)16)) ? (229376U) : (((/* implicit */unsigned int) -995093210)))) - (229353U))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        arr_31 [i_1] [i_8] [i_3 - 1] [i_8] = ((/* implicit */signed char) max((((((min((var_2), (var_2))) + (2147483647))) >> (((((/* implicit */int) var_11)) - (89))))), ((+(((/* implicit */int) arr_13 [i_1] [i_2] [i_3 - 1] [i_1]))))));
                        var_27 = max((var_2), (max((1048064), (((/* implicit */int) (short)9070)))));
                        arr_32 [i_8] [i_8] [i_3 + 2] [i_2] [i_8] [i_1 - 1] = ((/* implicit */unsigned int) var_5);
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((((/* implicit */unsigned int) max((var_5), (((((/* implicit */_Bool) (short)32747)) ? (arr_20 [i_8] [i_3 - 1] [i_2]) : (((/* implicit */int) (signed char)-4))))))) | (((((2768377161U) + (4294737931U))) & (((/* implicit */unsigned int) ((int) (signed char)-1)))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        for (short i_10 = 2; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_29 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [9] [i_1] [i_1 + 1] [(signed char)4] [9]))) <= (min((arr_18 [i_10] [i_10 - 2] [i_10 - 1] [i_10 - 1] [i_10 + 1]), (arr_18 [i_10] [i_10 - 2] [i_10 - 1] [i_10 - 2] [i_10 - 2])))));
                                arr_39 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1 + 2] [13U] [i_1 + 2] [i_9] [i_1 + 2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)75))))) ? (((/* implicit */int) arr_33 [i_1])) : (arr_25 [i_1] [i_2] [i_2] [i_9] [i_10])))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((arr_30 [i_1] [i_1] [i_1] [i_2] [i_10 + 1] [i_1]) == (((/* implicit */unsigned int) var_9))))) : (max((arr_28 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1]), (((/* implicit */int) var_13)))))) : ((-((+(var_6))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? (512U) : (var_10)))) ? (((((/* implicit */_Bool) ((arr_14 [i_1 - 1] [i_1] [i_1]) >> (((var_5) + (798416502)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 419961490U)) ? (2025591390) : (-1763398823))) : (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_37 [i_1] [i_1] [(signed char)9] [(signed char)9] [i_1]))))))));
        var_30 = ((/* implicit */unsigned int) ((2025591379) * (((/* implicit */int) ((3255434099U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))))))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 19; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194288U)) ? (arr_19 [i_1 - 1] [i_11] [13] [i_14] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) arr_19 [i_1 - 1] [i_12] [3] [i_1 - 1] [i_12]))));
                            arr_50 [i_11] [i_11] [(signed char)14] [i_13] [i_11] [17] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 229376U)))) ? (-1991820844) : (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_1] [i_1 + 1] [i_11] [i_14 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-14979)) : (((/* implicit */int) var_11))))))))));
                        }
                    } 
                } 
            } 
            var_32 *= ((((/* implicit */_Bool) (+(arr_48 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_11] [i_11] [i_11])))) ? (((/* implicit */int) ((((1721201886) + (var_5))) < (((((/* implicit */int) (short)24)) * (((/* implicit */int) arr_37 [i_11] [i_11] [i_11] [i_11] [i_1 + 1]))))))) : (((/* implicit */int) max((((/* implicit */short) var_11)), (arr_47 [i_1 + 1] [(signed char)16] [(signed char)16] [i_1 + 2])))));
            var_33 |= (+(((/* implicit */int) (!(((/* implicit */_Bool) 714812762U))))));
        }
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-(((((/* implicit */int) var_13)) / (arr_6 [i_1 + 1] [i_1 - 1]))))))));
    }
}
