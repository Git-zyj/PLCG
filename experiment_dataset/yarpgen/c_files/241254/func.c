/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241254
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
        var_14 = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)52215)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 4]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) < (((var_9) % (var_9)))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (unsigned char)54))));
                        arr_15 [i_2] [i_2] [i_1] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 307012258U)) ? (1142866755U) : (((/* implicit */unsigned int) 66060288))));
                        arr_16 [(_Bool)1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
                    }
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) var_3);
                        var_16 = ((arr_4 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((arr_5 [i_1]) > (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_27 [i_6] [i_8 + 1] [i_6] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_27 [i_1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1])))))));
                            arr_29 [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)1)))) + (((/* implicit */int) arr_23 [i_7] [i_6] [i_5] [i_1]))));
                        }
                    }
                } 
            } 
            arr_30 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) * (((/* implicit */int) arr_17 [i_1]))));
            var_19 = ((/* implicit */unsigned short) ((var_6) && (((/* implicit */_Bool) (unsigned char)255))));
        }
        arr_31 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
        var_20 = ((unsigned int) arr_4 [i_1]);
        arr_32 [(_Bool)1] [i_1] = ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) var_12)))) : (arr_7 [i_1] [i_1] [i_1]));
    }
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    {
                        arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)0)) / (-66060289)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))) : (((unsigned int) ((int) (_Bool)1)))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 524182383U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (524182409U)))))))));
                        var_22 = ((/* implicit */int) (~(arr_37 [i_9] [i_9] [i_12] [i_9])));
                        arr_42 [i_12] [i_12] [i_12] [i_12] = (unsigned char)23;
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 8ULL))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (unsigned char)1);
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 4) 
    {
        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            {
                arr_49 [i_13 - 1] |= ((/* implicit */unsigned char) min((((((/* implicit */int) arr_44 [i_13 - 1])) ^ (((/* implicit */int) arr_44 [i_13 - 2])))), (((((/* implicit */int) arr_45 [i_13 - 2] [i_13 + 1])) - (((/* implicit */int) arr_45 [i_13 - 2] [i_13 + 1]))))));
                /* LoopNest 3 */
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (unsigned short i_16 = 3; i_16 < 21; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                        {
                            {
                                arr_56 [i_13] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */unsigned int) arr_44 [i_13 - 2]);
                                var_25 = ((/* implicit */unsigned short) 4515072726577045116LL);
                                arr_57 [i_13] [(unsigned char)12] [i_13 + 1] [i_13] [(_Bool)1] = ((/* implicit */short) ((_Bool) max(((unsigned short)20761), (arr_54 [i_13] [i_14] [i_14] [i_16] [i_16] [i_16] [i_17]))));
                                arr_58 [i_14] [(unsigned short)8] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41247))) - (1292043297759545317ULL)))) || (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)39706)))));
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_46 [i_15] [i_14]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))), (134217727U))))));
                            }
                        } 
                    } 
                } 
                arr_59 [i_13 - 2] [i_14] = ((/* implicit */int) (-(288503023U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
    {
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            {
                arr_65 [i_19] = ((/* implicit */unsigned short) (short)21190);
                var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((arr_37 [i_18] [i_18] [i_19] [i_19]) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_28 = ((/* implicit */unsigned short) (unsigned char)232);
                var_29 = ((/* implicit */_Bool) (~(((((arr_47 [i_18 + 1] [i_18 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28983))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (short)29627))))))))));
            }
        } 
    } 
}
