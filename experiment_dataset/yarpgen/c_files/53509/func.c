/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53509
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) var_8)), (var_2)))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (var_10)))), ((-(16571560955448287304ULL)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-((-(min((arr_1 [i_0] [i_0]), (13695093842746695160ULL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((min((144115188075855872LL), (((/* implicit */long long int) (signed char)48)))) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_18 = ((/* implicit */signed char) var_0);
        arr_6 [i_1] [i_1] = ((/* implicit */short) -635172469);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_7))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 247966298)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 1]))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)63)) ? (4751650230962856455ULL) : (((/* implicit */unsigned long long int) 979712661U)))))));
        /* LoopSeq 4 */
        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned int) var_16);
            arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 1103783282)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_9 [3LL] [3LL])) ? (var_11) : (((/* implicit */unsigned long long int) 2378063060U)))) - (11031325513472132982ULL)))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            arr_18 [i_5] [i_5] = ((/* implicit */signed char) arr_4 [i_3 - 3]);
            /* LoopSeq 1 */
            for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                arr_22 [i_3] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))) : (1562026395U))))));
                arr_23 [(short)16] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_5 - 1]))));
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            }
            arr_24 [i_5] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (3051597083U)));
            var_23 += ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) var_13)))));
            var_24 = ((/* implicit */signed char) arr_5 [i_3]);
        }
        for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_29 [i_7] = arr_20 [i_7 + 1] [i_7 + 1] [i_7];
            arr_30 [(unsigned short)0] [i_7] [i_7] = ((/* implicit */short) var_12);
            /* LoopSeq 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_25 = ((arr_32 [i_7] [i_7] [i_9]) ? (((/* implicit */int) arr_32 [i_10] [i_7] [i_3 - 1])) : (((/* implicit */int) arr_32 [i_3] [i_3 - 2] [i_8 - 1])));
                            arr_40 [i_7] [i_9] [i_8 - 1] [i_7] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-40))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_47 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-48)) * (((/* implicit */int) (signed char)48))));
                            var_26 = ((/* implicit */_Bool) 13695093842746695160ULL);
                        }
                    } 
                } 
                arr_48 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_3 - 1] [i_7 + 1] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [i_7] [i_3]))) : (arr_34 [(short)10] [16ULL] [i_8])));
            }
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                var_27 = ((/* implicit */_Bool) ((int) arr_5 [i_3 + 3]));
                arr_53 [i_3 - 1] [i_7] [i_13] = ((((var_4) && (arr_17 [i_13]))) ? (((/* implicit */int) arr_46 [i_3] [i_3] [i_13] [i_7 - 1] [i_13] [i_13])) : (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 1])));
                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((0LL) <= (((/* implicit */long long int) arr_37 [i_3] [i_3] [i_3] [i_13] [i_13])))))));
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                var_29 = ((/* implicit */int) var_5);
                arr_58 [i_3] [i_7] = ((/* implicit */short) arr_20 [i_7] [i_7 + 1] [i_7]);
                arr_59 [i_7] [i_7] = ((/* implicit */signed char) ((((arr_5 [i_14]) ? (((/* implicit */int) var_15)) : (arr_37 [(unsigned char)9] [i_7] [i_7] [i_3] [i_3]))) * (((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)5921))))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((unsigned char) (+(arr_35 [2U] [6ULL] [i_14] [i_3 + 2])))))));
            }
        }
        for (short i_15 = 4; i_15 < 15; i_15 += 4) 
        {
            arr_62 [i_3] = (~(((((/* implicit */_Bool) (signed char)-33)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_10 [i_3])))) ? ((-(var_1))) : ((-(((/* implicit */int) arr_38 [i_3] [2LL] [i_3] [i_3 + 3] [i_3] [(signed char)4] [2LL])))))))));
        }
        arr_63 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3 - 4])) ? (((((/* implicit */int) var_8)) >> (((((/* implicit */int) arr_44 [i_3] [i_3] [i_3] [i_3] [(signed char)2])) + (137))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3])))))));
    }
}
