/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218352
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1415266659)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [6ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)7669), ((short)0))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))), (var_1)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_6 [i_2] [i_2]))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_14 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))) : (var_4)))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
            {
                for (long long int i_5 = 4; i_5 < 11; i_5 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_6] [i_5 - 4] [i_4 - 1])) ? (arr_7 [i_4 - 3] [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_21 [i_5] [i_4 - 2] [i_4] [i_5]))));
                            var_15 = ((/* implicit */long long int) var_7);
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) 1594115127U)) ? (4665172757712037938LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [2]))))) < (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2)))))));
                            arr_29 [i_4] [i_7] [i_4 - 3] [i_4] [i_3] [i_7] [(short)2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */unsigned long long int) var_5)) : (3963759859287542372ULL)));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_32 [i_2] [i_3] [(signed char)9] [i_2] = ((/* implicit */unsigned short) var_4);
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))))));
                        }
                        var_18 = ((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_5]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                arr_36 [9U] [9U] [9U] = ((/* implicit */unsigned int) ((arr_18 [i_2] [i_9 - 2]) ? (((/* implicit */int) arr_18 [i_3] [i_9 - 2])) : (var_9)));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
                    arr_39 [6LL] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)79))))) ? (((/* implicit */int) arr_28 [i_9 + 3] [i_9 + 1])) : (((/* implicit */int) ((var_7) > (((/* implicit */int) var_0)))))));
                }
                for (short i_11 = 2; i_11 < 8; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_45 [i_2] [i_3] [i_9 + 1] [i_3] [i_2] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -410801610)) / (var_4)))) ? (((((((/* implicit */int) (short)-12245)) + (2147483647))) << (((((/* implicit */int) var_3)) - (22304))))) : (((/* implicit */int) arr_43 [i_9 - 1] [i_9 - 2] [i_9 + 4] [i_9 + 4] [i_11] [i_11]))));
                        arr_46 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_40 [i_2] [i_3] [i_2] [i_11]);
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_38 [i_11] [i_3] [i_11] [i_3] [i_11] [i_9 + 3]))))));
                        var_21 ^= ((/* implicit */long long int) ((var_5) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        arr_50 [i_2] [i_13] = ((/* implicit */long long int) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                    arr_51 [i_3] [i_3] [i_11 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_3] [7LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_52 [i_11 - 2] [i_11] [5ULL] [(unsigned char)7] [i_2] = ((/* implicit */signed char) (unsigned short)17426);
                }
                for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10804699196483062333ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [1LL] [i_3]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    arr_56 [i_2] [i_3] [i_2] [i_14] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_2] [i_2] [i_14] [i_3])) ^ (((/* implicit */int) ((2700852169U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    var_23 -= ((/* implicit */signed char) arr_40 [i_2] [i_9] [i_2] [i_2]);
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    arr_59 [i_15] [i_15] [i_2] [i_15] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9 + 1]))))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_15] [i_9 - 1]))));
                }
            }
            var_25 = ((/* implicit */unsigned int) ((var_6) & (((/* implicit */long long int) arr_30 [i_3] [i_3] [i_2] [i_2] [(signed char)6] [i_2] [i_2]))));
            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        arr_63 [i_16] [i_16] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [i_16])))) * (((/* implicit */int) (signed char)-69))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15; i_17 += 3) 
        {
            for (unsigned int i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 15; i_19 += 3) 
                    {
                        for (signed char i_20 = 2; i_20 < 11; i_20 += 3) 
                        {
                            {
                                var_27 |= ((/* implicit */unsigned int) (unsigned char)112);
                                arr_74 [i_16] [i_17] [i_18] [i_18] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) (unsigned short)29231)) ? (var_1) : (((/* implicit */unsigned int) var_7))))));
                                arr_75 [i_17] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_69 [i_20] [i_17] [i_17] [i_18]))));
                                arr_76 [i_16] [i_17] [i_17] [i_17] [i_20 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_66 [i_16])));
                                var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    arr_77 [i_17] [i_17] [i_18] [i_18 + 1] = ((/* implicit */unsigned int) (+(((12775636377901918339ULL) - (((/* implicit */unsigned long long int) var_11))))));
                    arr_78 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : ((-(var_4)))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 2; i_21 < 13; i_21 += 4) 
                    {
                        arr_82 [i_17] [i_18] [i_18 + 1] [i_21] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_17] [i_17])) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_5)) : (-429875266315282143LL)))));
                        arr_83 [i_17] [i_17] [i_18] [i_17] [i_21] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19759)))));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)16340)) > (((/* implicit */int) var_3)))))));
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (7642044877226489283ULL)));
        arr_84 [i_16] = ((/* implicit */signed char) ((((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) arr_80 [(short)4] [(short)10] [i_16] [i_16])))))) & (((/* implicit */int) ((((/* implicit */unsigned int) var_9)) != (arr_79 [i_16]))))));
    }
    var_31 = var_2;
    var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
}
