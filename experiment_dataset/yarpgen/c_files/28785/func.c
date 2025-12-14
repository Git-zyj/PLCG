/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28785
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) arr_5 [i_0]))));
            var_12 = ((/* implicit */unsigned int) (short)12);
            var_13 = ((/* implicit */int) var_9);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_14 = (+(3487780510664858294ULL));
            var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_2])))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_1))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 3) 
                        {
                            var_16 *= ((/* implicit */unsigned int) arr_10 [i_6] [i_4] [(short)10]);
                            var_17 = ((/* implicit */signed char) arr_2 [i_3]);
                        }
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15)) ? (1697076611U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45204)))));
                    }
                } 
            } 
            var_19 = ((unsigned int) arr_9 [i_3] [i_3]);
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_20 = ((/* implicit */int) ((long long int) var_0));
                    var_21 = ((/* implicit */unsigned int) (((+(var_2))) < (((/* implicit */unsigned int) -1371494599))));
                }
                for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((((((/* implicit */int) var_1)) + (2147483647))) >> (((var_0) - (4086143840U))))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3] [i_3])) != (((/* implicit */int) arr_16 [i_0] [i_3] [i_7] [i_9]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_7] [i_7 - 4] [i_7 + 2])) ? (((/* implicit */int) arr_18 [i_7] [i_3] [i_7 + 1] [(unsigned char)12] [i_9])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_7 + 2] [(signed char)14] [i_7]))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_6 [i_7 - 4] [i_7 - 4] [i_7 + 2]))));
                        var_26 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_3])) >> (((var_4) - (16618509911585899164ULL))))));
                        arr_29 [i_0] [i_0] [i_7 - 2] [i_9] [i_3] [10] = ((/* implicit */short) (~(arr_20 [i_7 - 1] [i_7 - 3] [i_3])));
                    }
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) (_Bool)0);
                        var_28 = ((((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_7 + 1] [i_9] [i_11])) ? (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)-15)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((2597890685U) <= (var_0)))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        arr_34 [1LL] [i_3] [i_3] = (~((-(((/* implicit */int) arr_2 [i_0])))));
                        var_29 = ((/* implicit */unsigned int) ((arr_27 [i_3] [i_7 - 4]) == (arr_27 [i_3] [i_7 - 3])));
                        var_30 = ((unsigned long long int) arr_30 [i_7]);
                    }
                    var_31 &= arr_31 [i_9] [(signed char)10] [i_7] [(signed char)10] [i_7];
                    var_32 = ((/* implicit */unsigned int) ((arr_14 [i_3] [i_7 - 4] [i_7 - 4]) != (arr_14 [i_3] [i_7 - 2] [(signed char)8])));
                }
                arr_35 [14ULL] [i_3] [i_3] [i_7] = ((/* implicit */long long int) (unsigned short)0);
                var_33 -= ((/* implicit */unsigned short) arr_12 [12LL] [12LL]);
            }
            for (unsigned long long int i_13 = 4; i_13 < 14; i_13 += 1) /* same iter space */
            {
                var_34 = (~(arr_1 [i_13 + 1]));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (6489898298981289861LL))))));
                            var_36 = ((/* implicit */signed char) (~(-1761034615501147890LL)));
                        }
                    } 
                } 
                arr_47 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_42 [(signed char)2])))))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            for (long long int i_17 = 1; i_17 < 15; i_17 += 3) 
            {
                {
                    var_37 -= ((/* implicit */unsigned short) arr_50 [i_0]);
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_16] [i_16])) ? (max((((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_16] [i_16] [i_17 + 1] [i_17])), (((((/* implicit */_Bool) arr_31 [i_16] [(_Bool)0] [i_0] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [7] [i_0]))) : (arr_45 [i_0] [i_0] [12U] [i_16] [i_17] [i_17 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_16] [i_16] [i_16]), (arr_17 [i_16] [i_0] [i_16])))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 4) 
    {
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
        {
            {
                var_39 = ((/* implicit */_Bool) arr_56 [i_18]);
                var_40 = ((/* implicit */signed char) arr_59 [i_19] [i_18] [i_18]);
                var_41 = ((/* implicit */signed char) (short)30126);
            }
        } 
    } 
}
