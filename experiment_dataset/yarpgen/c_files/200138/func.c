/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200138
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
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-27442)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0] [i_1] [6ULL]))));
                                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_9 [i_0] [i_1]);
                                var_20 += ((/* implicit */long long int) (short)-27442);
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)5] [i_2])) ? (((int) arr_4 [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) == (((long long int) (_Bool)1)))))));
                    var_21 = ((/* implicit */int) (short)-27442);
                    var_22 += ((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2]);
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_6)), (var_12)));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
    {
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))), (((((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5] [(signed char)10])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-6839397148046230700LL))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))))));
        var_24 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (1039462146759078892ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_16)))) : (arr_9 [i_5] [i_5]))) - ((+(min((((/* implicit */unsigned long long int) (signed char)110)), (1039462146759078892ULL))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) (-(arr_3 [i_5] [i_6] [i_7])));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_10 [i_6] [(unsigned char)1] [i_7] [i_6] [i_7]))))), (arr_1 [i_5])))) & (((((/* implicit */int) (unsigned char)2)) / (arr_2 [i_6] [i_6] [i_7])))));
                    var_27 = ((/* implicit */_Bool) 2147483647);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        var_28 += (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 2463642291U)) == (var_4)))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */int) (short)27431)) < (arr_27 [5ULL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) == (arr_8 [i_8] [i_8] [i_8] [i_8]))))) : ((-(var_15)))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (-1302461292) : (((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [i_8]))));
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (signed char)51)))));
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) -832550300);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (int i_11 = 1; i_11 < 11; i_11 += 4) 
            {
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-52))) + (6948177503296113017ULL))))));
                    var_33 = ((int) arr_18 [i_11 + 1]);
                    arr_39 [5LL] [i_10] [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_9])) || ((_Bool)0))))));
                    var_34 = ((/* implicit */unsigned long long int) ((((13002372216606460295ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27442))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (3865537647U)));
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((((/* implicit */int) arr_4 [i_9])) >= (arr_27 [i_9]))) ? (((((/* implicit */_Bool) (unsigned short)19977)) ? (6948177503296113047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)28))))))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)2))))));
        arr_43 [i_12] = ((/* implicit */unsigned short) ((var_18) & (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))));
        var_37 *= ((/* implicit */short) ((((unsigned long long int) arr_40 [i_12] [i_12])) << (((((((/* implicit */_Bool) arr_42 [i_12] [i_12])) ? (arr_42 [i_12] [i_12]) : (((/* implicit */int) arr_41 [2])))) - (728405430)))));
        var_38 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_41 [i_12])), (arr_42 [i_12] [i_12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((signed char) arr_41 [i_12]))));
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) (signed char)-30)) + (52)))))), (4050111179U))))));
    }
}
