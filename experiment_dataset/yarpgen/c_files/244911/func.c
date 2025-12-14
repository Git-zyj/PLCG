/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244911
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned char)12))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned long long int) var_17)), (18446744073709551610ULL)))))));
                var_22 = ((/* implicit */int) 18446744073709551598ULL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) max((var_14), (max((var_2), (arr_11 [i_2] [i_4] [i_3] [i_5 + 1])))));
                                arr_18 [7LL] [i_3] [i_4] [i_4] [i_6] = ((short) ((((/* implicit */_Bool) 6ULL)) || (((/* implicit */_Bool) 2248996394U))));
                                arr_19 [i_5] [i_5] [0] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned short) var_1))), (max((((/* implicit */unsigned long long int) var_12)), (12989459705451361122ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) var_15);
                        var_25 = arr_17 [i_2] [i_2] [15ULL] [i_3] [i_4] [i_7];
                        var_26 = ((unsigned short) var_16);
                        arr_22 [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) 935818117);
                    }
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        arr_26 [i_4] = ((/* implicit */short) max((((unsigned long long int) arr_16 [i_3] [(short)3] [i_8 - 2] [i_2] [(short)3])), (((/* implicit */unsigned long long int) (unsigned short)9))));
                        var_27 = ((/* implicit */unsigned int) var_4);
                    }
                    for (signed char i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        arr_30 [i_2] [i_3] [i_3] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_4 [i_9] [i_9 - 1])), (arr_17 [i_4] [i_9 + 1] [(_Bool)1] [i_9 + 1] [i_4] [i_9]))) == (max((18446744073709551614ULL), (18446744073709551594ULL)))));
                        arr_31 [i_2] [(_Bool)1] [i_9] [(_Bool)1] [i_4] [i_4] = ((/* implicit */short) var_9);
                        var_28 = ((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [i_4]);
                        var_29 = ((/* implicit */unsigned int) var_6);
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 4) 
                        {
                            var_30 -= ((/* implicit */int) max(((unsigned short)30498), ((unsigned short)35035)));
                            arr_38 [i_11] [i_4] [i_4] [i_10] [14ULL] = ((/* implicit */signed char) ((((unsigned int) arr_12 [i_4] [i_10 - 1] [i_4] [i_4])) >> (((((unsigned long long int) var_0)) - (2693400763ULL)))));
                            arr_39 [(unsigned char)13] [i_4] = ((/* implicit */_Bool) ((unsigned char) (signed char)58));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) max((((int) 6ULL)), (((/* implicit */int) ((var_10) == (((/* implicit */long long int) arr_34 [i_10] [i_10 - 1] [i_11 + 1] [i_2]))))))))));
                        }
                        for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            var_32 -= 7248276604954404855LL;
                            var_33 = ((/* implicit */signed char) max((((unsigned short) var_16)), (arr_29 [i_4] [i_12 - 1] [i_12 + 1])));
                        }
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]);
                            var_35 -= ((/* implicit */long long int) 18446744073709551594ULL);
                        }
                        var_36 -= (_Bool)1;
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((unsigned long long int) -1719930278))));
                        arr_47 [i_4] = ((_Bool) ((short) var_4));
                    }
                    var_38 -= ((/* implicit */unsigned char) var_13);
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((short) arr_28 [i_3] [i_3] [i_3])))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) var_7);
}
