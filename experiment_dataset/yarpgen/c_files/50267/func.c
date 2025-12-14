/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50267
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_0] [11ULL])) - (arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (unsigned short)412)))))));
        var_20 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [4U] [i_0])) ? (arr_0 [8ULL] [i_0]) : (arr_0 [10ULL] [10ULL]))) / (((/* implicit */int) arr_2 [12LL] [12LL]))));
        var_21 = ((/* implicit */long long int) (+(-1205128862)));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_6) : (var_15)))) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1])) - (max((-1205128831), (((/* implicit */int) arr_6 [i_1]))))));
        arr_9 [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned short) ((unsigned int) -2126567978));
        var_23 ^= ((/* implicit */short) (-((~(arr_1 [(unsigned char)20])))));
        arr_10 [i_1] = ((/* implicit */int) ((((((_Bool) 1205128862)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1]))) * (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [0U] [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 4; i_3 < 12; i_3 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))) + ((~(var_14)))));
            arr_15 [i_2] = ((/* implicit */signed char) ((var_11) - (((/* implicit */unsigned long long int) arr_4 [i_3 - 2] [i_3 - 4]))));
        }
        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_25 -= arr_7 [i_4];
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) 1205128861))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_2)))))));
        }
        var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [20ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_4 [i_2] [i_2])))) : ((-(var_11)))));
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_29 -= ((/* implicit */unsigned char) ((arr_7 [i_2]) & (((/* implicit */unsigned long long int) var_12))));
            arr_21 [i_5] [2U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)5))));
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_29 [i_5] = ((/* implicit */int) (signed char)107);
                            var_30 = ((/* implicit */unsigned long long int) (~(arr_24 [i_2] [2ULL] [i_5] [i_5] [i_6 - 1])));
                            arr_30 [i_5] [i_5] [(short)12] [i_5] [10U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((arr_28 [i_8] [i_8] [i_7] [i_2] [i_2] [i_5] [i_2]) - (18286466645059297269ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 1]))) : (((((/* implicit */_Bool) 10082802020712437452ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (1501229706U)))));
                        }
                        for (short i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_33 [(signed char)12]))));
                            arr_34 [i_2] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) arr_18 [i_9 - 1]);
                            var_32 ^= ((/* implicit */unsigned int) (unsigned short)18841);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_33 *= ((/* implicit */unsigned int) (~(var_0)));
                            arr_39 [i_5] [i_5] [i_6 - 2] [i_7] [(unsigned short)6] = ((/* implicit */unsigned int) (_Bool)1);
                            var_34 -= (+(((/* implicit */int) var_13)));
                        }
                        for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (arr_37 [(short)2] [i_7] [i_6] [i_5] [(short)2])));
                            var_36 *= ((/* implicit */signed char) (-(10786344724750378052ULL)));
                        }
                        var_37 ^= arr_14 [i_2];
                        arr_43 [i_2] [i_5] [i_6] [i_5] [9] [i_6] = ((arr_33 [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2] [i_5] [i_6]))));
                        var_38 = ((/* implicit */int) arr_26 [i_5] [i_5] [i_6] [i_7]);
                    }
                } 
            } 
        }
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_26 [(_Bool)1] [(_Bool)1] [i_2] [i_2]))));
            arr_46 [(unsigned short)7] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
        }
        arr_47 [i_2] = ((/* implicit */unsigned long long int) (signed char)-83);
        /* LoopNest 2 */
        for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_14] [i_14])) ? (((/* implicit */int) arr_2 [i_14] [i_14])) : (((/* implicit */int) arr_2 [i_14] [i_14]))));
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 13; i_15 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            var_41 ^= ((/* implicit */signed char) (-(var_16)));
                            var_42 -= ((/* implicit */unsigned long long int) ((arr_24 [i_13 + 1] [i_15 + 1] [i_16] [i_15 - 1] [i_16 - 2]) ^ (arr_24 [i_13 - 1] [i_15 + 1] [i_16] [i_15 + 1] [i_16 + 1])));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_13 - 1]))) != (var_11)));
                        }
                        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            var_44 ^= (~(((((/* implicit */_Bool) 1205128861)) ? (((/* implicit */unsigned long long int) arr_40 [i_17] [i_13] [i_17] [i_13] [i_13] [i_14] [8U])) : (var_11))));
                            var_45 = ((/* implicit */long long int) (unsigned short)65535);
                        }
                        for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            arr_62 [i_14] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_20 [i_2] [i_14])));
                            arr_63 [4] [4] [i_14 + 1] [i_14] [i_14 + 1] = ((/* implicit */unsigned short) arr_56 [i_2] [(signed char)4] [i_14 + 1] [(signed char)4] [i_18] [(short)10]);
                        }
                        for (unsigned int i_19 = 1; i_19 < 13; i_19 += 4) 
                        {
                            var_46 ^= arr_33 [(short)4];
                            var_47 = ((/* implicit */int) arr_20 [i_14] [i_14]);
                            arr_66 [i_14] = ((/* implicit */unsigned short) ((unsigned int) arr_36 [i_13 - 1] [i_14] [i_19 - 1]));
                            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_14]))))) : (((/* implicit */int) (short)-1))));
                        }
                        var_49 ^= ((/* implicit */unsigned long long int) (-(arr_49 [i_13 + 1] [i_15 - 1] [7ULL])));
                        var_50 = ((/* implicit */unsigned int) (-(arr_41 [i_15 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_13 - 1])));
                    }
                    arr_67 [i_14] [i_14] [i_14] [i_2] = arr_55 [i_14] [i_14] [i_13] [i_14];
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_20 = 3; i_20 < 14; i_20 += 3) 
    {
        for (unsigned int i_21 = 2; i_21 < 15; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 1) 
                {
                    for (unsigned int i_23 = 1; i_23 < 14; i_23 += 3) 
                    {
                        {
                            var_51 = ((/* implicit */unsigned int) arr_68 [i_20] [i_20]);
                            var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_69 [i_23]))));
                        }
                    } 
                } 
                arr_82 [i_20] = 7660399348959173546ULL;
            }
        } 
    } 
}
