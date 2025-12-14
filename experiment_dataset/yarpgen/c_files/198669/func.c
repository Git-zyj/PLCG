/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198669
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
    var_13 *= ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) arr_0 [i_1] [(short)17]);
                    var_15 = ((((/* implicit */int) arr_7 [i_2] [i_1])) << (((/* implicit */int) arr_0 [i_0] [i_2 + 1])));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1509894216)) ? (1249555883U) : (((/* implicit */unsigned int) var_4))))) - ((~(arr_6 [i_0] [i_1]))))))));
                }
            } 
        } 
        arr_9 [i_0] = 1509894218;
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10733)) && (((/* implicit */_Bool) (short)23444))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_23 [i_6] = ((1394251392U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-25488))));
                                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_6] [i_5])) && ((_Bool)1))) || ((!(((/* implicit */_Bool) 2696226150U))))));
                                arr_24 [i_3] [i_4] [i_5] [i_6] [i_7 + 3] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 - 1]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_5 [i_4] [i_5]) : (arr_2 [i_3])));
                    var_19 = var_12;
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            var_20 = ((/* implicit */short) arr_2 [i_3]);
            arr_28 [i_3] [(unsigned char)16] = ((/* implicit */short) -1397149050);
        }
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_3] [i_9]))));
            var_22 = ((/* implicit */unsigned int) ((((7662677778062455070ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(signed char)2] [i_3] [i_9] [i_3] [i_3]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_9] [i_3])))));
        }
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((unsigned char) ((arr_17 [i_10]) << (((((/* implicit */int) (short)23444)) - (23430))))));
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_7 [i_10] [i_11]))));
                    var_25 *= ((/* implicit */short) ((((/* implicit */unsigned int) (-(1509894216)))) == (var_11)));
                }
            } 
        } 
        var_26 = ((/* implicit */int) max((var_26), (arr_3 [i_3] [i_3])));
    }
    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    {
                        var_27 = (!(((/* implicit */_Bool) arr_14 [i_15] [i_14] [i_13])));
                        arr_49 [i_15] [i_12] [i_13] [i_13] [i_12] [i_12] = ((/* implicit */signed char) ((max((((/* implicit */int) var_6)), (arr_3 [i_12] [i_13]))) & (max((arr_3 [i_13] [i_15]), (-1397149050)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_22 [i_12] [i_12] [i_13] [i_16] [(unsigned short)19]))));
                            var_29 -= ((/* implicit */unsigned short) arr_5 [i_15] [i_13]);
                        }
                        arr_54 [i_15] [i_14] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)82)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65506)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_25 [i_14] [i_13])))))));
                        var_30 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                {
                    arr_60 [i_12] [i_17] [i_18] = ((((/* implicit */int) min((arr_42 [i_18] [i_17]), (var_6)))) + ((~(((/* implicit */int) arr_42 [i_17] [(short)10])))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (var_11))) / ((+(var_5))))))))));
                    var_32 = ((/* implicit */short) (!(((arr_3 [(signed char)14] [i_12]) < (arr_3 [i_12] [i_17])))));
                    var_33 = ((/* implicit */unsigned short) arr_0 [i_12] [i_18]);
                    var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_41 [i_12] [i_17] [i_18]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            for (int i_20 = 1; i_20 < 11; i_20 += 4) 
            {
                {
                    arr_66 [i_12] [4] [i_20] [i_12] &= ((/* implicit */short) (-(((/* implicit */int) arr_44 [i_12] [i_19 - 1] [i_12]))));
                    var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_32 [i_19 - 1] [i_19])) || (((/* implicit */_Bool) (unsigned char)190)))), (((((/* implicit */int) arr_32 [i_19 - 1] [i_19])) == (((/* implicit */int) arr_32 [i_19 - 1] [i_19]))))));
                    var_36 -= ((/* implicit */short) min(((~(683575960))), (((/* implicit */int) ((((/* implicit */_Bool) (short)3925)) || (var_9))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_21 = 1; i_21 < 19; i_21 += 1) 
    {
        for (unsigned short i_22 = 2; i_22 < 19; i_22 += 4) 
        {
            for (unsigned char i_23 = 0; i_23 < 21; i_23 += 3) 
            {
                {
                    var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */int) (short)-10905)), (1804476155)))) ? (max((1176131142122453809ULL), (((/* implicit */unsigned long long int) arr_26 [i_21 + 1] [i_21 + 1] [i_23])))) : (((/* implicit */unsigned long long int) arr_11 [i_22 + 2])))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) arr_0 [(_Bool)1] [(_Bool)1])))))) + (arr_74 [i_22 - 2] [i_21 - 1] [i_21 - 1] [i_21 - 1]))))));
                    arr_75 [0LL] = ((/* implicit */short) arr_34 [17U] [17U]);
                    arr_76 [i_21 - 1] [i_22 - 2] [i_21 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((-496216748), ((+(((/* implicit */int) var_0))))))) > (max((6160275979722194940ULL), (((/* implicit */unsigned long long int) 435044024))))));
                }
            } 
        } 
    } 
}
