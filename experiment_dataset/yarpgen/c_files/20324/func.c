/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20324
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
    var_14 = ((/* implicit */unsigned char) var_11);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (-7847320674413301774LL) : (((/* implicit */long long int) 907582159))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (6402922318191420891ULL)));
    var_16 = ((/* implicit */unsigned char) max((var_0), (max((((/* implicit */long long int) ((var_8) | (((/* implicit */int) var_2))))), (var_0)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)35290))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (158497732U)));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (var_0)));
                            arr_16 [7U] [i_0] [i_3] [7U] = ((/* implicit */short) (~(-914374308)));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */signed char) arr_8 [i_1] [i_2 + 1] [i_3 - 2] [i_5]);
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1794363326) / (arr_15 [i_0] [i_0]))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        }
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [i_1] [i_0] [i_6] = ((/* implicit */int) arr_2 [i_0]);
                            var_21 = (unsigned short)60337;
                            arr_22 [3U] [i_1] [i_1] [6] [6] [i_0] = ((/* implicit */signed char) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_22 = ((/* implicit */long long int) (~(arr_6 [i_0] [(short)10] [i_0 + 1])));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) 12043821755518130724ULL);
                            arr_25 [i_1] [i_0] [i_7] = ((/* implicit */short) arr_23 [i_0 + 3] [i_1] [i_0 + 3] [i_3] [i_0 + 3]);
                        }
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_29 [i_0] [4] [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) (unsigned short)55180);
                            arr_30 [i_0] [i_0] [i_2] [i_3] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_0)))) ? (-5598068809022734163LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)60337)) >= ((((_Bool)1) ? (((/* implicit */int) (signed char)-110)) : ((-2147483647 - 1))))));
                            var_25 -= ((/* implicit */int) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        }
                        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))) != (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1])))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(signed char)5] [i_0 + 3] [i_0 - 1] [i_2 + 3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_6 [i_0] [i_1] [(short)9])));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_11 = 2; i_11 < 11; i_11 += 2) 
            {
                arr_40 [i_0] [i_0 + 4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [(unsigned short)13] [i_0])) ? (arr_1 [i_10] [3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 2] [i_10] [i_0] [i_10] [i_0] [i_11 + 2])))))) - (arr_12 [i_0] [i_0 - 1] [(signed char)13] [3])));
                arr_41 [i_0] [i_0] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35211)) ? (((/* implicit */int) (unsigned short)29205)) : (((/* implicit */int) arr_35 [i_0 + 4] [i_0 + 4]))));
                var_28 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_11 - 2]))));
                /* LoopSeq 2 */
                for (short i_12 = 3; i_12 < 11; i_12 += 3) 
                {
                    var_29 = (-(134217727ULL));
                    arr_44 [i_12 + 2] [i_0] [i_10] = ((/* implicit */unsigned long long int) ((short) arr_0 [i_12 + 3]));
                }
                for (short i_13 = 3; i_13 < 10; i_13 += 3) 
                {
                    arr_49 [i_0] = ((/* implicit */unsigned int) (~(var_8)));
                    arr_50 [i_0 + 4] [i_0 + 4] [i_0] [4ULL] = ((/* implicit */int) arr_26 [i_11 + 1] [i_11 + 2] [i_11 + 1]);
                }
            }
            var_30 = ((/* implicit */_Bool) -5598068809022734140LL);
        }
        for (short i_14 = 1; i_14 < 12; i_14 += 2) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1])) && (((/* implicit */_Bool) arr_35 [i_0] [i_14]))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 201326592U)) > (arr_20 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_0] [i_0 - 1])));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
            {
                for (unsigned int i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    {
                        arr_58 [i_0 + 2] [12ULL] [(_Bool)1] [i_16] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5198)) ? (var_6) : (((/* implicit */int) arr_34 [i_15]))));
                        var_33 = arr_52 [i_0] [i_0];
                    }
                } 
            } 
            arr_59 [i_0] = ((/* implicit */short) var_7);
        }
        arr_60 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) 914374308))));
        arr_61 [i_0] = ((/* implicit */unsigned int) arr_10 [i_0 + 4] [i_0 + 3] [(unsigned char)13] [i_0 + 3]);
        var_35 -= ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) (signed char)56)) : (8388607))) : (((/* implicit */int) arr_56 [i_0] [(unsigned short)0]))));
    }
    for (int i_17 = 0; i_17 < 16; i_17 += 2) 
    {
        arr_64 [i_17] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17] [i_17]))) : (var_0)))));
        arr_65 [i_17] = ((/* implicit */short) (-(4136469563U)));
        var_36 = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (arr_62 [i_17] [i_17]) : (arr_62 [i_17] [i_17]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_63 [i_17] [i_17])))))));
        var_37 += ((/* implicit */unsigned int) arr_63 [i_17] [i_17]);
    }
    /* LoopNest 3 */
    for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        for (signed char i_19 = 2; i_19 < 20; i_19 += 3) 
        {
            for (short i_20 = 1; i_20 < 18; i_20 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 3; i_21 < 20; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) var_11);
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_77 [i_19] [i_19] [7] [i_21 - 2] [i_22])) ? (max((((((/* implicit */int) arr_74 [i_18])) << (((/* implicit */int) arr_76 [i_18] [i_18] [i_18] [i_18] [i_19] [i_18])))), (((/* implicit */int) (short)1984)))) : (((/* implicit */int) arr_79 [i_18] [(unsigned short)7] [i_18] [i_18] [i_19]))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [i_19 - 2] [i_20] [i_20 + 3]))))) ? ((-(-5598068809022734140LL))) : (5598068809022734151LL)));
                }
            } 
        } 
    } 
}
