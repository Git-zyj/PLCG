/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235518
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
    var_12 = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_2))))))), (max((var_1), (((/* implicit */unsigned int) var_4))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (-(-1941842002)));
        var_13 = (-((~(((/* implicit */int) arr_0 [i_0 - 1])))));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) var_4);
                    var_14 = arr_10 [i_1] [i_1] [i_3];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 4; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) var_11);
                            arr_22 [i_1] [i_4] = ((/* implicit */int) ((unsigned short) ((unsigned short) (+(arr_5 [i_1])))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) : (min((((/* implicit */unsigned int) arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])), (var_1))))))));
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_17 *= ((/* implicit */short) ((((unsigned long long int) var_3)) | (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) (_Bool)1)))))));
            arr_25 [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) -1941842002)) : (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_9))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (-4235027190850857071LL)))) : (min((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_10])))))) ? (((/* implicit */unsigned long long int) (+(arr_10 [i_1 + 1] [i_1 + 1] [i_8])))) : (max((((unsigned long long int) arr_5 [i_8])), (max((((/* implicit */unsigned long long int) 2114407135482528506LL)), (arr_6 [i_10]))))))))));
                        }
                        arr_33 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */_Bool) 1941842022)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30391)))), (((/* implicit */int) (_Bool)1))))), (((long long int) max((arr_19 [i_1] [i_1] [i_9] [i_1] [i_10] [i_10]), (arr_21 [3U] [3U] [i_9] [i_10] [i_8] [i_1]))))));
                        arr_34 [i_8] |= ((/* implicit */long long int) arr_20 [i_1 + 1] [i_8] [i_9]);
                    }
                } 
            } 
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_10))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) 3414368298060712589LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_17 [i_1] [i_13] [i_14]) != (((/* implicit */long long int) ((((/* implicit */_Bool) 992523576U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_12] [i_12] [(short)7])))))))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_13 [i_8] [i_12] [i_14]))));
                            arr_41 [i_1] [i_8] [i_12] [i_1] [i_13] [i_14] = ((/* implicit */signed char) (((-(((int) var_11)))) | (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (unsigned short i_16 = 1; i_16 < 13; i_16 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 3; i_17 < 14; i_17 += 3) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_52 [i_1] [i_18] [i_1] [i_1] = ((max(((!(((/* implicit */_Bool) 3434684540U)))), (((((/* implicit */_Bool) arr_35 [i_1] [i_15] [i_15] [i_15])) && (((/* implicit */_Bool) arr_27 [i_1] [i_16] [i_17] [i_18])))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_17] [i_18]))));
                                arr_53 [i_1] [i_15] = ((/* implicit */long long int) ((_Bool) ((var_2) / (((/* implicit */unsigned long long int) min((var_5), (-3414368298060712590LL)))))));
                                arr_54 [i_17] [i_1] [i_16] [i_17] [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_1])) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_18 [(signed char)7] [i_16 + 2])) : (((/* implicit */int) arr_13 [2] [i_16 + 3] [2])))), (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_32 [i_1] [2U] [2U] [i_17 - 3] [i_18])))))))));
                                var_23 = ((/* implicit */short) ((_Bool) 17840253481376095479ULL));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_16]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 3) 
                    {
                        arr_57 [i_1] [i_15] [i_15] = ((/* implicit */int) var_5);
                        var_25 = ((/* implicit */_Bool) arr_46 [i_1]);
                        arr_58 [i_1] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) arr_48 [i_19] [i_16] [i_16] [i_15] [i_1] [i_1])), (arr_55 [i_1] [i_15] [i_16] [i_19])))))), (var_6)));
                    }
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-15)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_27 = ((/* implicit */unsigned int) ((var_0) ? ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 3153931522U)) : (var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 4) 
    {
        for (signed char i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 1; i_23 < 19; i_23 += 1) 
                    {
                        for (short i_24 = 0; i_24 < 22; i_24 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) arr_62 [i_21] [18U] [17U])) ? (((/* implicit */long long int) arr_62 [i_21] [i_21] [i_22])) : (arr_61 [i_20] [i_21])))))));
                                arr_71 [i_21] [i_21] [i_21] [i_20] = ((/* implicit */unsigned long long int) ((max((max((var_9), (((/* implicit */long long int) (_Bool)1)))), ((-(var_11))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_66 [i_20] [i_20] [i_20] [i_23] [(unsigned short)1]))) > ((~(var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_25 = 1; i_25 < 21; i_25 += 4) 
                    {
                        for (long long int i_26 = 1; i_26 < 19; i_26 += 3) 
                        {
                            {
                                arr_79 [i_20] [i_20] [i_22] [i_21] [i_22] = ((/* implicit */unsigned long long int) arr_59 [i_21] [i_25]);
                                arr_80 [i_20] [i_21] [i_20] [4ULL] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_77 [i_25] [i_25 - 1] [i_25] [i_25 + 1] [i_25] [i_25] [i_25])) : (((((/* implicit */_Bool) var_7)) ? (9223372036854775807LL) : (var_5)))))) ? (((/* implicit */int) (!(((10917858018728255461ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
