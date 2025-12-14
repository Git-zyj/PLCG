/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196999
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
        {
            var_10 = (_Bool)1;
            arr_5 [i_0] = ((/* implicit */short) (unsigned short)15931);
            var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            var_12 = (((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) var_1)) >> (((1769479231U) - (1769479207U))))));
        }
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0]))));
            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0]) : (arr_7 [i_0])));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [4ULL] [4ULL])) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) (short)-21264)) : (((/* implicit */int) arr_3 [i_0] [(unsigned short)8])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)65)) && ((_Bool)1)))))))));
        }
        for (unsigned int i_3 = 2; i_3 < 7; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 6; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) (+(arr_13 [(_Bool)1] [i_0] [i_0] [5ULL])));
                        var_17 = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-25507)) - (((/* implicit */int) (short)-20555))));
        }
        arr_15 [i_0] = ((/* implicit */signed char) ((unsigned int) -1034727306));
        arr_16 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)146)) ? ((-(arr_13 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))));
    }
    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_19 += ((/* implicit */unsigned int) ((signed char) (short)4844));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (short)-21264))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_9] [i_6 + 1] [i_6])) == (((/* implicit */int) arr_22 [i_8] [i_6 + 1] [i_6])))))));
                            arr_35 [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)243))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 14; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_33 [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11] [i_11 - 1] [i_6 + 1]), ((unsigned char)59))))));
                            var_23 = ((/* implicit */signed char) (+(var_6)));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) && (((/* implicit */_Bool) (short)-4845)))))) != (var_6))))) <= (((((/* implicit */_Bool) arr_27 [i_6 - 1] [i_6 + 1])) ? (arr_27 [i_6 + 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (((-(arr_30 [i_6] [i_6 - 1] [i_6] [i_6]))) < (((/* implicit */unsigned int) min((1085328307), ((-(((/* implicit */int) arr_20 [i_6 + 1])))))))));
        /* LoopNest 2 */
        for (unsigned char i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((1073741823), (((/* implicit */int) (unsigned char)88)))))));
                    arr_44 [i_6] [i_6] [i_12 - 2] = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 - 1]))) : (arr_27 [i_6 - 1] [i_13 - 1]))), (arr_40 [(unsigned short)9])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_14])))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */int) arr_42 [i_6] [i_6] [i_13] [7ULL]))))) ? (-7LL) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-1)))))));
                        var_29 = ((/* implicit */unsigned char) 2277491819U);
                        arr_47 [i_13] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_34 [i_6] [i_12] [i_13] [i_14]);
                        arr_48 [i_14] [i_6] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)6410)) && (((/* implicit */_Bool) arr_21 [12U] [i_6]))));
                    }
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) max((var_30), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_6) : (((/* implicit */unsigned long long int) arr_52 [i_16] [14] [i_6]))))) ? (1073741823) : (((((/* implicit */int) arr_42 [(short)6] [i_15] [(short)6] [(short)6])) ^ (((/* implicit */int) var_5))))))))));
                            arr_55 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) max(((_Bool)0), ((_Bool)1)))), (arr_36 [i_6] [i_6] [i_6 + 1] [i_12 - 3] [i_6] [i_13 + 1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2017475476U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) / ((+(((/* implicit */int) var_1))))))) : (((((((/* implicit */_Bool) arr_54 [(signed char)14] [i_16] [i_15] [(_Bool)0] [i_12] [(_Bool)0] [i_6])) ? (arr_21 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_46 [i_16] [i_15] [i_13 - 1] [i_12] [i_6] [i_6])))))))));
                            arr_56 [i_6] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_42 [i_16] [i_13] [i_12] [i_6])) : ((+((+(((/* implicit */int) var_1))))))));
                            var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_6 + 1] [i_15])) ? (((unsigned long long int) arr_45 [i_6] [i_6] [i_6] [i_15])) : (((/* implicit */unsigned long long int) var_4)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) arr_32 [i_6] [i_6] [i_13 - 1] [i_15] [i_6])) : (((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) arr_33 [i_6 - 1] [i_6 - 1] [i_15] [i_15] [i_13 + 1] [(_Bool)1])) : (((/* implicit */int) (short)-1)))))));
                            arr_57 [(short)6] [i_12] [i_12] [i_16] [i_16] [i_6] [i_6] = ((/* implicit */long long int) var_8);
                        }
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 1) /* same iter space */
                        {
                            arr_62 [i_6] [i_6 + 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_59 [2LL] [i_15] [i_13] [11ULL] [11ULL])))))))) - (arr_51 [i_6] [i_6] [i_13] [i_15] [i_6])));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_37 [i_17] [i_15])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [(unsigned short)2] [(unsigned short)2]))))) == (((var_2) ? (((/* implicit */unsigned long long int) 1073741812)) : (var_6)))))))))));
                            var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1914825385233144253LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))) : ((+(arr_40 [i_6]))))), (arr_18 [i_6])));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned char) (-(arr_52 [i_12 - 2] [i_6] [i_12 - 2])));
                            arr_65 [0] [0] |= ((/* implicit */unsigned long long int) arr_31 [0ULL] [i_6 - 1] [i_13] [i_12 - 3] [i_6 - 1]);
                        }
                        var_35 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [(_Bool)1] [i_13] [(_Bool)1] [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) 1034727305)) : (arr_64 [i_6])))) % (max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((int) var_7))))));
                        var_36 = ((/* implicit */signed char) (unsigned char)89);
                    }
                }
            } 
        } 
        arr_66 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)99)), (((arr_34 [i_6] [(unsigned char)1] [i_6 - 1] [i_6]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_6 + 1]))))));
    }
    for (unsigned int i_19 = 2; i_19 < 10; i_19 += 2) 
    {
        arr_70 [i_19] [i_19 + 1] = ((/* implicit */short) (-(((((((/* implicit */_Bool) 2277491819U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)8)))) % (((728642458) % (((/* implicit */int) arr_26 [i_19]))))))));
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((((/* implicit */_Bool) max(((((_Bool)1) ? (arr_30 [i_19 - 1] [i_19] [i_19] [i_19]) : (arr_45 [i_19] [i_19] [i_19] [0ULL]))), (((/* implicit */unsigned int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_19] [i_19]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))));
    }
    for (int i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        arr_75 [i_20] [i_20] |= ((/* implicit */signed char) ((-1034727305) - (((((/* implicit */int) arr_74 [i_20] [i_20])) * (((/* implicit */int) var_5))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            var_38 = ((((/* implicit */_Bool) ((191394086) % (1486706988)))) ? ((+(2147483647U))) : (((/* implicit */unsigned int) min((-472359458), (((/* implicit */int) (_Bool)1))))));
            arr_79 [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_68 [i_21])))) ? (max((((/* implicit */long long int) var_4)), (-7LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_20] [i_20] [i_21] [i_21] [i_21] [i_21] [i_21]))) : (arr_58 [i_21] [i_21])))))))));
            var_39 = (unsigned char)156;
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((unsigned short) ((min((((/* implicit */unsigned int) (_Bool)0)), (arr_39 [i_20] [i_21] [i_20]))) == (((/* implicit */unsigned int) 1078000211))))))));
        }
        /* vectorizable */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_82 [i_20] [i_20] [i_20] = (_Bool)1;
            arr_83 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) 1830191534)) || (((((/* implicit */_Bool) 3921450790U)) || ((_Bool)1)))));
        }
        for (unsigned int i_23 = 1; i_23 < 11; i_23 += 4) 
        {
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_18 [(_Bool)1]) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_20] [i_20] [i_20] [15LL] [i_20])) ? (((/* implicit */unsigned int) var_8)) : (arr_30 [i_23 + 1] [i_23 + 1] [4LL] [i_20]))))))) | (((((/* implicit */_Bool) (+(-1034727293)))) ? (((/* implicit */int) (unsigned char)98)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))))));
            var_42 = max((((/* implicit */int) arr_33 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])), (max((((int) var_2)), ((-(-1073741823))))));
        }
    }
    /* LoopSeq 1 */
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        arr_91 [i_24] = ((/* implicit */signed char) var_6);
        arr_92 [i_24] = ((/* implicit */int) var_7);
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            for (short i_26 = 3; i_26 < 24; i_26 += 3) 
            {
                {
                    arr_97 [i_26 - 2] [8LL] [i_24] |= ((/* implicit */unsigned long long int) arr_90 [i_26 + 1]);
                    var_43 = (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_95 [i_26] [i_25] [i_25] [i_24])) ? (arr_88 [i_24] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) (short)-2702))))))));
                }
            } 
        } 
    }
}
