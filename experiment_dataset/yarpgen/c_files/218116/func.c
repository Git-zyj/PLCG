/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218116
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min((2596723016U), (2596723016U))))));
    var_12 = ((/* implicit */signed char) var_10);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 2069044682)) % (61440U)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((!(((/* implicit */_Bool) 2596723016U)))) ? (max((arr_5 [i_0 + 1] [i_1]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2596723019U)) ? (((/* implicit */long long int) 13U)) : (var_5)))))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [(short)12])) ? (arr_4 [i_0 + 1] [i_1 + 1]) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_4 [i_1 - 1] [i_0 + 2])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) max(((short)7325), ((short)32763)));
            var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 5506217809077504733ULL))) ? (max((1084890555), (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5137062175816304126LL)))))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (var_6))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_3])) >= (arr_11 [i_3])))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_5] [i_5] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 426332343)) ? (28U) : (28U)));
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_5 - 1])), (((((/* implicit */_Bool) arr_1 [i_5 - 1])) ? (((/* implicit */int) arr_1 [i_5 - 1])) : (((/* implicit */int) arr_1 [i_5 - 1])))))))));
                            var_17 = ((/* implicit */unsigned short) var_3);
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_2])), (((long long int) (signed char)109))))) ? (((/* implicit */int) arr_12 [i_4] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) 5506217809077504733ULL))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 3; i_7 < 18; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) 3920819603183589131ULL))))));
                            arr_31 [i_9] [i_7] = arr_5 [i_2 + 1] [i_7 - 2];
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) (!(var_3)));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8552))) / (5506217809077504733ULL)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            arr_36 [i_2] [i_3] [(signed char)16] [i_7] [i_2 - 2] [i_2] [i_2 + 1] = ((/* implicit */short) 5757688110994395798ULL);
                            var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_17 [(short)12] [i_2 + 1] [i_2 - 2] [i_7 + 2] [i_11])) : (((/* implicit */int) arr_12 [i_7 + 3] [i_7 + 2]))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_25 [i_2 + 1] [8U] [8U] [i_11]))));
                            arr_37 [i_2] [i_2] [i_2] [(short)13] [i_7] [i_11] [i_11] = ((/* implicit */long long int) arr_12 [i_2 - 2] [i_2 - 2]);
                        }
                    } 
                } 
            }
            for (short i_12 = 1; i_12 < 17; i_12 += 4) 
            {
                var_24 += ((/* implicit */unsigned short) 4294967295U);
                arr_41 [3] [3] [i_12 + 2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_4)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_26 [i_12] [i_3] [i_2 + 1] [i_2]))))))), (((var_0) ? (((var_3) ? (arr_11 [i_2 - 1]) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12 - 1] [i_12 - 1] [9U] [9U] [i_2 + 1] [i_2 - 1])))))));
            }
        }
        for (short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (arr_4 [i_2 - 2] [i_2 - 2])));
            var_26 = ((/* implicit */unsigned short) var_10);
        }
        var_27 *= ((/* implicit */unsigned long long int) var_5);
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_9))));
                    arr_48 [i_15] [(unsigned short)5] [i_14] [i_15] = max((max((arr_8 [i_2 - 1] [i_2 - 2]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1]))))));
                }
            } 
        } 
        arr_49 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))) : (var_7)))) && (((((/* implicit */long long int) var_8)) < (var_10))))) ? (max((((/* implicit */unsigned int) (signed char)102)), (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (arr_23 [i_2 + 2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 18; i_17 += 4) 
            {
                for (unsigned short i_18 = 3; i_18 < 18; i_18 += 4) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_2 - 1] [i_2 - 1] [i_17 + 1] [i_18 - 3])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_2 + 2] [i_18 - 2] [i_18 - 1] [i_17 - 1] [i_16])))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_43 [i_17 + 3])) != (((((/* implicit */_Bool) var_9)) ? (arr_56 [i_2] [i_2] [i_16] [i_17] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (short)7751))))))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) ((long long int) ((arr_30 [i_2] [i_16] [i_16] [4ULL] [i_16] [(_Bool)1] [i_2 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
            arr_57 [i_16] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3638079526U)));
            arr_58 [i_2] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_2] [i_2] [(short)20] [i_2])) ? (((/* implicit */int) arr_20 [i_2 + 1] [i_2 + 1] [9LL] [i_2])) : (((/* implicit */int) var_3))));
        }
    }
}
