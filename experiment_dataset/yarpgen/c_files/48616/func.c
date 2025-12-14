/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48616
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) max((var_14), (var_5)))) || (((/* implicit */_Bool) var_10)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) : (max((-5395122176303179083LL), (((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) (short)-8638)))))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5395122176303179084LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_15)))))) : (var_9)));
        var_17 = ((/* implicit */long long int) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)38)), (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -7185346254669843868LL))))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5395122176303179087LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) * (1051067037U))) : (((/* implicit */unsigned int) 106389405))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) 3243900259U)) != (-722555356268760647LL))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_9 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-10))));
            arr_10 [i_1] = ((/* implicit */short) ((var_3) < (((/* implicit */unsigned long long int) var_15))));
            var_19 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)190))))));
            var_20 = ((/* implicit */unsigned char) (-(arr_5 [i_1])));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                var_21 += ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_1] [i_1]))));
                arr_18 [i_3] [i_1] [i_3] [i_4] = ((/* implicit */short) arr_13 [i_3]);
            }
            for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((var_15) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (151))))))));
                    /* LoopSeq 3 */
                    for (short i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        arr_29 [i_1] [i_7] [i_1] [i_3] [i_3] [i_7] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) 4U)) && (((/* implicit */_Bool) 2219276947U))));
                        var_23 = ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-223959956065194716LL) : (((/* implicit */long long int) var_7))))) : (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (var_9))));
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)76)) && (((/* implicit */_Bool) (signed char)63)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9025))) : (((((/* implicit */_Bool) arr_22 [i_3] [i_5] [i_6 + 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6)))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_32 [i_3] [i_3] [7] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)135)) && (((/* implicit */_Bool) -1331847804747913516LL))));
                        arr_33 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)225)) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) == (((/* implicit */long long int) (-(3653125122U))))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned long long int) arr_14 [i_3] [i_3] [i_3]);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2520300926U)) + (16095235612399253639ULL)));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) * (arr_1 [i_6 + 2])));
                    }
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_3] [i_3] [(unsigned char)6] [i_1])) * (((/* implicit */int) arr_16 [9LL] [i_3] [i_5] [(unsigned char)13]))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    arr_40 [i_1] [i_1] [i_3] [i_3] [10] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4204568010355126708LL)) ? (((/* implicit */int) arr_17 [i_1] [i_3])) : (((/* implicit */int) arr_17 [i_1] [i_3]))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-5971079947025943119LL)))) ? (((var_15) & (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_10] [(signed char)11] [(signed char)11] [(signed char)11] [i_10]))))) : (arr_36 [i_3] [i_5] [(unsigned char)10] [(unsigned char)10] [i_3])));
                    var_29 = ((/* implicit */signed char) (-(var_7)));
                    arr_41 [(unsigned char)14] [(unsigned char)7] [i_3] [i_5] = ((/* implicit */unsigned long long int) 5185979140907985039LL);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (unsigned char)234))));
                    arr_44 [i_3] = ((/* implicit */long long int) arr_39 [i_1] [i_3] [i_5] [i_5] [10LL]);
                }
                for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_1] [i_3] [i_3] [i_12 + 1] [i_12 + 2] [i_1])) ? (arr_1 [i_12 - 1]) : (arr_1 [i_12 - 1])));
                    arr_48 [i_1] [i_3] [(short)8] [i_12] = ((/* implicit */unsigned int) arr_21 [12ULL] [i_5] [i_5] [i_3] [i_3] [i_1]);
                }
                var_33 = ((/* implicit */long long int) max((var_33), (arr_14 [i_1] [i_3] [i_1])));
            }
            for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                var_34 = ((((/* implicit */_Bool) arr_39 [i_3] [i_1] [i_13] [i_1] [i_13])) ? (4611404543450677248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_3] [i_3])))))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_28 [i_1] [i_1] [i_3] [i_13] [i_13] [i_13] [i_13]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))) | (5185979140907985028LL)))));
                arr_51 [i_1] [i_3] [i_13] = ((/* implicit */unsigned long long int) var_6);
            }
            arr_52 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */int) var_11)) + (2147483647))) << (((/* implicit */int) arr_30 [(short)2] [(short)2] [(unsigned char)0] [8LL] [i_3] [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_47 [i_3] [i_3] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)140))))));
            /* LoopNest 3 */
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        {
                            arr_63 [i_1] [i_3] [i_1] [9ULL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (-8192403806739428296LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1] [i_3] [i_14] [i_3])))))) ? (((14662055163943167598ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_12 [i_1]))));
                            arr_64 [i_1] [i_3] [i_16] [i_3] [(_Bool)1] [i_3] = ((/* implicit */signed char) arr_39 [i_1] [(short)8] [i_14] [i_14] [(unsigned short)3]);
                            var_36 = ((/* implicit */long long int) ((unsigned int) arr_20 [i_3] [i_3] [i_3]));
                        }
                    } 
                } 
            } 
        }
        var_37 |= ((/* implicit */unsigned char) min((var_0), (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        var_38 = ((/* implicit */_Bool) arr_50 [i_17] [i_17]);
        arr_67 [i_17] [i_17] = ((/* implicit */unsigned char) (short)0);
        var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_9) >> (((3862935255136751421LL) - (3862935255136751403LL)))))) ? (arr_1 [i_17]) : (((/* implicit */unsigned long long int) ((arr_6 [i_17] [i_17] [i_17]) + (var_15))))));
        arr_68 [i_17] = ((/* implicit */long long int) ((6734243383419578487LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-23279)))));
    }
    var_40 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) var_12)), ((~(var_4)))))));
    var_41 = ((/* implicit */_Bool) var_3);
    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (max((((unsigned long long int) -223959956065194735LL)), (((/* implicit */unsigned long long int) (short)18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7448)))));
}
