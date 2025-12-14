/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28021
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
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | ((((-(0LL))) & (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)31)))))))));
    var_16 = ((/* implicit */signed char) var_1);
    var_17 += ((/* implicit */unsigned short) 0LL);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (short)-3953)) : (((/* implicit */int) (_Bool)1))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0]))) * (((/* implicit */unsigned long long int) 0LL))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((arr_7 [i_1]) || (arr_7 [i_1])));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)-6)))) : (((((/* implicit */_Bool) (unsigned short)29768)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [1U])))))))));
        var_20 *= ((/* implicit */short) (-(((/* implicit */int) var_14))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            var_21 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_2 - 1]))));
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned long long int) (!((_Bool)0)));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-23043)) ? (arr_12 [i_2 - 2] [i_2 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)0))))) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1]))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2 - 2])) < (((/* implicit */int) var_14))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1426960948)) ? (((/* implicit */int) (unsigned short)56289)) : (((/* implicit */int) (unsigned char)241))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (12861357691941433718ULL)))))));
                        arr_24 [i_1] [i_1] [i_1] [6ULL] [i_1] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_1] [i_7])) ? (14758648434356391448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            var_27 += ((/* implicit */unsigned short) (-(arr_25 [i_1] [i_8 + 1] [i_8 - 1])));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_31 [i_1] = ((/* implicit */unsigned long long int) ((signed char) arr_22 [i_8 - 2] [i_8 - 1]));
                        var_28 &= ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) <= (var_8));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned short)11017)) : (((/* implicit */int) (unsigned short)0))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_9])) ? (var_10) : (((/* implicit */int) arr_17 [i_1] [i_8] [i_11 + 3]))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            arr_38 [i_1] [i_8] [i_9] [i_9] [i_10] [i_12] = arr_15 [i_1] [i_8] [i_12];
                            arr_39 [i_12] [i_10] [i_1] [i_9] [i_8] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_35 [i_10] [i_10]))));
                        }
                        var_31 = ((/* implicit */_Bool) (+(arr_28 [i_1] [i_8] [i_9] [i_9])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 10; i_14 += 4) 
                {
                    for (short i_15 = 2; i_15 < 9; i_15 += 2) 
                    {
                        {
                            arr_48 [i_15] [i_8] [i_13] [i_14] [i_15] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_14] [i_1])) ? (((/* implicit */int) arr_21 [i_8] [i_8 - 2] [i_8 - 1])) : (((/* implicit */int) arr_21 [i_8] [i_8 + 1] [i_8]))));
                            arr_49 [i_1] [i_8] [i_13] [i_14] [i_13] &= ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) : (18446744073709551606ULL));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((short) ((((/* implicit */int) arr_14 [i_8] [i_8] [i_13])) != (((/* implicit */int) arr_6 [i_1]))))))));
            }
            for (long long int i_16 = 1; i_16 < 10; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (arr_55 [i_8] [i_8])));
                            var_34 = ((((/* implicit */int) (unsigned short)65527)) % (((/* implicit */int) (short)-23043)));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_16 + 1] [i_18]))) >= (0LL)))) : (((((/* implicit */_Bool) arr_30 [7LL] [i_16 + 1] [i_16 + 1] [7LL] [i_18])) ? (((/* implicit */int) arr_6 [i_8])) : (((/* implicit */int) var_11)))))))));
                            var_36 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_35 [i_16] [i_17]))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_5))))))));
            }
            var_38 = ((/* implicit */signed char) var_4);
            var_39 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_1]))) & (0LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_8] [i_8])))));
        }
    }
}
