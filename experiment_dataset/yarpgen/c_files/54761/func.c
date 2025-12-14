/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54761
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
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 ^= ((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned short) max((min((-5929893882678017884LL), (((/* implicit */long long int) arr_2 [i_0])))), (((-1LL) ^ (18LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) + (var_11)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) arr_6 [i_1] [i_1]))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) + (2147483647))) << (((/* implicit */int) ((-33LL) >= (4LL))))));
                var_24 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) arr_0 [i_3])) * (var_16))) <= (var_1)));
            }
            for (short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_4] [i_2])) << (((((-44LL) * (((/* implicit */long long int) 1003592741)))) + (44158080621LL))))) & (max((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])), (((((/* implicit */int) var_10)) / (var_0)))))));
                arr_15 [i_4] |= ((/* implicit */unsigned long long int) arr_13 [i_0] [i_2]);
                var_26 = ((/* implicit */short) ((((/* implicit */int) (short)-18386)) >= (-668896589)));
            }
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                arr_19 [i_0] = ((/* implicit */long long int) 0ULL);
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_4 [i_2]), (arr_4 [i_2])))) << (((var_17) - (3464914369U)))));
            }
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                arr_24 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19773))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)19773)), (-1LL))))));
                var_28 += ((/* implicit */short) arr_18 [i_0] [i_2] [i_6]);
                arr_25 [(short)11] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((var_4), ((unsigned char)5)));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                arr_30 [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_7])) >> (((((/* implicit */int) arr_18 [i_0] [i_2] [i_7])) + (((/* implicit */int) arr_13 [(_Bool)1] [i_2]))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        {
                            arr_36 [i_8] [i_8] [i_2] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_7] [i_8] [i_9]);
                            var_29 = ((/* implicit */int) arr_7 [i_8]);
                            arr_37 [i_0] [i_2] [i_2] [i_8] [i_9] [i_9] = ((/* implicit */long long int) -1232659832);
                            var_30 ^= ((/* implicit */unsigned long long int) arr_13 [i_8] [i_0]);
                        }
                    } 
                } 
            }
            for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_31 = ((/* implicit */short) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_10] [i_10])))));
                    var_32 = arr_27 [i_10] [i_0];
                    var_33 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40620)) || (((/* implicit */_Bool) var_13))));
                }
                var_34 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10] [i_10] [i_2] [i_0]))) - (-2201411709578277488LL)))), (889427168953948767ULL)));
                arr_43 [i_0] [i_2] [i_10] = ((/* implicit */signed char) arr_26 [i_0] [i_0] [i_0] [i_0]);
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_47 [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((-668896582), (1003592741)))), (((2LL) / (-15LL)))));
            arr_48 [i_12] [i_12] [i_12] = ((/* implicit */signed char) var_8);
        }
        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            var_35 = ((/* implicit */short) min((max((-2LL), (((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_13])))), (((arr_38 [i_0] [i_0] [i_0] [i_0]) / (arr_38 [i_0] [i_13] [i_0] [i_0])))));
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_56 [i_14] [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (short)0)), (15574380925517535403ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    arr_60 [i_0] [i_0] [i_13] [i_13] [i_13] [i_15] &= ((/* implicit */short) arr_46 [i_0] [i_0]);
                    arr_61 [i_0] [i_0] [i_0] [i_0] [(short)17] |= ((/* implicit */short) var_8);
                    var_36 += ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_13]))) * (arr_22 [i_0] [i_13] [i_14] [i_15])));
                }
                var_37 *= var_12;
                var_38 += ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-27944)), (2872363148192016212ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13] [i_13])))));
                var_39 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_51 [i_13] [i_14])), (min((((/* implicit */long long int) 2147483647)), (4926944801301728741LL)))));
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
            {
                var_40 ^= ((/* implicit */short) ((arr_50 [i_16] [i_13]) > (((/* implicit */long long int) arr_35 [i_13]))));
                arr_64 [i_0] = ((/* implicit */unsigned char) arr_22 [i_16] [i_13] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    arr_67 [i_13] = ((((/* implicit */int) arr_13 [i_0] [i_16])) <= (((/* implicit */int) arr_11 [i_17] [i_16] [i_13])));
                    arr_68 [i_17] [i_16] [i_0] [i_0] = ((9223372036854775807LL) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_13] [i_0]))));
                    arr_69 [i_0] [i_13] [i_0] [i_17] = ((/* implicit */_Bool) arr_57 [i_0] [i_17]);
                }
            }
        }
        var_41 = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_0]);
    }
}
