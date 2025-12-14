/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197829
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
    var_19 |= ((/* implicit */int) max((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_14)) ? (var_18) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 790163328)) ? (-790163346) : (var_7))) / (-692840170))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_20 += arr_0 [i_0] [8U];
        var_21 -= ((/* implicit */unsigned int) ((((unsigned int) ((unsigned int) arr_0 [i_0] [0]))) >= (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_22 = (+(arr_2 [i_1]));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 452796933U)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (((/* implicit */unsigned int) arr_2 [i_1])))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_24 |= ((/* implicit */int) arr_4 [i_1] [i_2]);
            var_25 &= arr_5 [i_2];
        }
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [10ULL])) : (1432769911804065847ULL)))));
            var_27 = ((int) (~(arr_3 [i_1])));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((265448035) > (-618984653)))) : (((((/* implicit */_Bool) 3762591343104426601ULL)) ? (-249500067) : (-2147483635)))));
            var_29 = ((/* implicit */unsigned int) arr_2 [i_3]);
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_30 = ((/* implicit */int) arr_6 [i_1] [i_4] [i_1]);
            var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [20ULL])) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (265448045) : (-249500062))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (arr_15 [i_5] [i_5] [i_5]) : (arr_2 [i_1])))))));
                        var_33 = (+(((int) -845012213)));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_6] [i_7])) ? (arr_9 [19ULL] [19ULL] [5]) : (((/* implicit */unsigned int) 790163346))))) ? (arr_8 [i_1] [0]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [1ULL] [i_5]))));
                            var_35 = arr_19 [i_1] [i_1];
                            var_36 = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_6]);
                        }
                        for (unsigned char i_8 = 2; i_8 < 19; i_8 += 4) 
                        {
                            var_37 |= ((/* implicit */int) ((arr_18 [i_8] [i_6] [i_8 - 2] [i_8] [i_6] [18U]) / (arr_18 [18] [i_6] [i_8 - 2] [i_8] [i_6] [i_8])));
                            var_38 = ((/* implicit */unsigned int) (+(arr_16 [i_4] [i_4] [i_5] [i_4])));
                            var_39 |= ((/* implicit */int) arr_11 [i_1] [i_1]);
                        }
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5] [12ULL] [1])) ? (arr_17 [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_4])));
                    }
                } 
            } 
        }
        for (int i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) arr_2 [i_9]);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-790163346)))) || (((/* implicit */_Bool) 249500067)))))));
                            var_43 = ((/* implicit */int) max((var_43), (((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1]))) * (arr_6 [i_12 - 1] [i_11] [i_9]))))));
                        }
                    } 
                } 
            } 
            var_44 = 790163345;
        }
    }
    /* LoopSeq 4 */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
    {
        var_45 += ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_37 [i_13] [i_13])))))), (((((/* implicit */_Bool) 1298990769)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (3961563584U)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
        {
            var_46 = (~(arr_37 [8] [i_14]));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 2; i_16 < 24; i_16 += 4) 
                {
                    var_47 = ((/* implicit */unsigned char) arr_35 [i_15]);
                    var_48 = arr_38 [i_14] [i_14] [i_14];
                    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_14] [i_16 - 2] [i_16] [3ULL])) ? (arr_43 [i_14] [i_16 - 2] [i_16] [16U]) : (arr_43 [i_14] [i_16 - 1] [i_16] [i_14])))) ? (((((/* implicit */_Bool) arr_43 [i_14] [i_16 + 1] [i_16] [i_16 + 1])) ? (arr_43 [i_14] [i_16 - 1] [i_16 - 1] [i_14]) : (arr_43 [i_14] [i_16 - 2] [i_14] [i_16]))) : (((/* implicit */unsigned int) (+(-790163345))))));
                }
                var_50 = min((arr_35 [i_15 + 1]), (((/* implicit */int) ((unsigned char) arr_36 [i_13]))));
            }
        }
        var_51 = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)64)), (1515691842U)));
        var_52 |= ((/* implicit */int) ((unsigned char) max((min((((/* implicit */unsigned int) arr_36 [i_13])), (arr_43 [i_13] [i_13] [i_13] [i_13]))), (((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned int) arr_34 [i_13])) : (arr_43 [i_13] [i_13] [i_13] [i_13]))))));
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
    {
        var_53 = arr_44 [i_17];
        var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_36 [i_17])))));
        var_55 = ((/* implicit */unsigned char) arr_43 [i_17] [i_17] [i_17] [i_17]);
        var_56 = (+(((/* implicit */int) (!(((/* implicit */_Bool) -249500045))))));
        var_57 = ((/* implicit */int) 4702339506780274425ULL);
    }
    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
    {
        var_58 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [23ULL])) == (14503986406314419155ULL))))) == (((unsigned int) arr_36 [i_18]))));
        var_59 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 249500066)), (13744404566929277191ULL)));
    }
    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            for (unsigned int i_21 = 1; i_21 < 24; i_21 += 4) 
            {
                {
                    var_60 = min(((-(arr_37 [i_21 + 1] [20U]))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) != (-339626360)))) < (arr_35 [i_19])))));
                    var_61 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((int) arr_34 [i_19]))) ? (arr_36 [i_19]) : (arr_53 [6] [i_20] [6]))), (-1506466871)));
                }
            } 
        } 
        var_62 = ((int) ((((/* implicit */_Bool) -746619742)) ? (arr_51 [i_19] [i_19] [i_19]) : (arr_51 [i_19] [i_19] [i_19])));
    }
}
