/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49964
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((~(max((((/* implicit */unsigned int) var_16)), (4294967295U))))) | (var_11))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_6))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) var_16);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
            var_23 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (-3310302609303054047LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) arr_17 [i_0] [0ULL] [i_3] [i_4] [(unsigned short)10]);
                            var_25 -= ((/* implicit */unsigned char) var_11);
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (var_1))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_0] [i_2] [i_0]))))));
                arr_18 [i_0] [(unsigned char)12] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_21 [(_Bool)1] [i_6] [i_6] = (signed char)-82;
                arr_22 [i_0] [(short)11] [i_6] = ((/* implicit */unsigned char) 2147483647);
            }
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((signed char) (short)12866)))));
                /* LoopSeq 4 */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_7]))))), (9759909878763836886ULL))))));
                    var_30 = ((/* implicit */unsigned long long int) 3633375292283094378LL);
                    arr_29 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14)))))) > (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : ((((+(((/* implicit */int) var_19)))) | (((/* implicit */int) ((arr_4 [i_0] [i_2] [i_0]) != (((/* implicit */unsigned int) var_12)))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        arr_36 [(unsigned short)4] [i_0] [i_7] [i_9] [i_7] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */int) arr_9 [i_9])) : (127294729)))) & (var_10));
                        var_32 = ((/* implicit */signed char) (((+(arr_35 [i_0]))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_7] [0U] [1U] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))));
                        var_33 = ((/* implicit */unsigned long long int) (short)-24639);
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_7] [i_2] [1LL] [i_11] = ((/* implicit */unsigned char) -3633375292283094378LL);
                    var_34 = (-(((/* implicit */int) ((arr_1 [i_11]) >= (arr_1 [i_2])))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                {
                    arr_45 [i_7] = ((/* implicit */unsigned short) var_11);
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) arr_16 [i_0] [i_2] [i_0])) - (77))))))));
                    arr_46 [i_12] [i_7] [i_7] [i_7] [7U] = ((/* implicit */short) var_19);
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 12; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */short) ((unsigned int) (-((+(var_12))))));
                            var_37 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_2] [i_2] [i_2] [i_2] [i_0])) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_9 [i_14]))))), (((((/* implicit */long long int) -1453251875)) * (0LL))))) : (((/* implicit */long long int) min((arr_2 [i_14 + 1]), (((/* implicit */unsigned int) ((-1453251878) / (((/* implicit */int) (signed char)-53))))))))));
                            arr_53 [i_0] [i_0] [10ULL] [i_14] [i_14] = ((/* implicit */int) var_6);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_13))));
                        }
                    } 
                } 
                var_39 |= ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [7ULL] [6U]);
            }
            arr_54 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_2]);
            var_40 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_8 [i_0] [i_2])) && (((/* implicit */_Bool) arr_8 [i_0] [i_2]))))));
            var_41 = ((/* implicit */unsigned char) var_11);
        }
        arr_55 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((9759909878763836910ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) (_Bool)1)))), (((arr_49 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_16 [i_0] [2] [i_0])) : (((/* implicit */int) (unsigned short)15383))))))) : (arr_48 [i_0] [i_0])));
    }
    for (int i_16 = 0; i_16 < 17; i_16 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_17 = 2; i_17 < 14; i_17 += 4) 
        {
            for (signed char i_18 = 2; i_18 < 15; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    {
                        arr_68 [(signed char)1] [i_19] [i_19] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_19))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_62 [i_17 + 1]), (((/* implicit */signed char) (_Bool)1)))))) : (((((/* implicit */_Bool) 9759909878763836881ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_17 - 2]))) : (var_8)))));
                        arr_69 [i_19] [i_16] [i_17] [i_18] [i_18] [i_19] = arr_58 [i_17];
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [(signed char)9])) ? (((/* implicit */unsigned int) 163167497)) : (var_4)))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_19))) ? (max((16157765864303485968ULL), (((/* implicit */unsigned long long int) (unsigned char)131)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))) : (((/* implicit */unsigned long long int) max((((var_16) / (((/* implicit */int) arr_60 [i_16] [(short)9])))), (((/* implicit */int) (_Bool)1))))))))));
    }
    for (long long int i_20 = 0; i_20 < 14; i_20 += 4) 
    {
        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_57 [i_20])))));
        var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_58 [(_Bool)1]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_21 = 3; i_21 < 13; i_21 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 4) 
            {
                for (int i_23 = 1; i_23 < 13; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */_Bool) var_10);
                            var_46 = ((/* implicit */unsigned char) ((-1LL) >= ((~(var_8)))));
                        }
                    } 
                } 
            } 
            arr_89 [i_21] [i_20] [i_21] = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) != (1453251854))) ? (17545612794649716469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            var_47 -= ((/* implicit */signed char) (+(var_8)));
        }
        for (unsigned int i_25 = 2; i_25 < 10; i_25 += 1) 
        {
            var_48 *= ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [2U]))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_75 [i_20]))));
            arr_94 [i_20] [i_25] = ((/* implicit */unsigned int) arr_58 [i_20]);
            arr_95 [i_20] [i_20] [i_25] = (!(((/* implicit */_Bool) 3792892898963131411LL)));
        }
    }
    var_49 = ((/* implicit */unsigned char) ((short) ((int) min((((/* implicit */unsigned long long int) var_12)), (var_1)))));
    var_50 = ((/* implicit */unsigned int) ((821730040) != (-179875926)));
}
