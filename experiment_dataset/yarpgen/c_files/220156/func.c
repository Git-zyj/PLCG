/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220156
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_1 + 2] [i_2 + 1] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2])), (min((((/* implicit */int) arr_4 [(signed char)5] [i_3])), (arr_5 [i_0])))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0 - 1] [i_2] [i_2] [i_0 - 1] [(signed char)8]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) arr_2 [i_3]))))) : (((/* implicit */int) var_15))))), (var_11)))));
                        arr_10 [8] [i_1 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) max((arr_3 [i_2 - 2] [i_0]), (((/* implicit */unsigned int) min((619276925), (-775043320)))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((var_7), (((/* implicit */long long int) arr_8 [i_0] [i_2] [i_1 + 1] [i_0] [i_4])))))));
                        var_20 = ((/* implicit */int) ((short) (unsigned short)45717));
                    }
                    var_21 *= ((/* implicit */int) (_Bool)0);
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5921253734794798621LL)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))))), (arr_1 [i_0])))) ? (((unsigned long long int) arr_8 [i_2 - 2] [i_0] [i_2] [i_2] [i_2 - 2])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1])), (arr_1 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) ^ (var_0))) : (arr_1 [i_0])))));
                                var_22 ^= ((/* implicit */unsigned short) arr_17 [i_1] [i_2] [i_5 - 1] [i_6]);
                                var_23 = ((/* implicit */unsigned short) ((int) arr_3 [i_0] [i_0]));
                                var_24 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) 1113456534U)) : (min((arr_0 [i_0]), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_2] [i_5] [i_6])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (signed char)57);
    var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_13)))) : (((/* implicit */int) (signed char)127))));
    var_27 = ((/* implicit */signed char) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45717)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45717))) : ((-9223372036854775807LL - 1LL))));
        arr_24 [i_7] [20ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)39)) >= (((/* implicit */int) arr_21 [i_7]))));
        arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_23 [i_7]))));
    }
    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_29 ^= ((/* implicit */long long int) arr_23 [i_8]);
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) arr_22 [i_8]))))))));
    }
    for (short i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            arr_42 [i_9] [i_9] [6] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) (-(var_3)))) : ((+(var_8)))))) ? ((-(((/* implicit */int) arr_21 [i_12])))) : (((/* implicit */int) arr_4 [i_9] [i_13]))));
                            var_31 = ((/* implicit */unsigned int) (short)-21477);
                        }
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (arr_5 [i_12])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45717)) ? (arr_33 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) (short)-22574)) : (((((/* implicit */_Bool) arr_5 [i_12])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_13 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (unsigned short)34418))));
        var_35 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [4U])) ? (((/* implicit */unsigned long long int) arr_28 [i_9])) : (max((arr_1 [i_9]), (((/* implicit */unsigned long long int) arr_37 [i_9] [(short)9] [i_9] [i_9])))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_14] [i_14])) ? (((/* implicit */int) arr_43 [i_14] [(_Bool)1])) : (((/* implicit */int) arr_43 [i_14] [i_14]))));
        arr_47 [i_14] [i_14] = ((unsigned int) var_12);
    }
}
