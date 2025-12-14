/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191846
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) 3914655829U);
                                var_19 += ((/* implicit */unsigned int) var_14);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((max((((unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_0 - 1])), (((/* implicit */unsigned long long int) ((signed char) 11195134616943570444ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))), (var_4))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_21 = ((unsigned int) min((((/* implicit */unsigned long long int) ((int) arr_4 [i_2]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_5 + 1]))) - (var_1)))));
                                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_2])), (arr_2 [i_0 - 1] [i_6 + 1] [i_2])))) ? (((long long int) arr_6 [i_6])) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) min((var_9), (((/* implicit */signed char) arr_7 [i_0] [i_2] [0ULL] [(signed char)4]))))), ((short)5306)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 2) 
                    {
                        var_24 -= ((/* implicit */signed char) ((_Bool) (_Bool)1));
                        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                        arr_23 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0 - 1] [(unsigned char)1] [i_0 - 1]));
                        var_25 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((long long int) arr_3 [i_0] [i_0])) + (9223372036854775807LL))) << (((/* implicit */int) arr_21 [i_0] [i_1 + 2] [i_1 + 2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((((long long int) arr_3 [i_0] [i_0])) + (9223372036854775807LL))) << (((((/* implicit */int) arr_21 [i_0] [i_1 + 2] [i_1 + 2] [i_1] [i_0])) - (1))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_26 ^= ((/* implicit */_Bool) (-(var_11)));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_12 [(unsigned short)3] [i_0] [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_0 - 1] [i_0]))));
                            var_28 = ((/* implicit */unsigned long long int) ((_Bool) arr_28 [i_1 + 2] [(_Bool)1] [i_1 - 1] [i_1 + 2] [i_1]));
                        }
                        for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            arr_32 [i_10] [(signed char)12] [i_0] [i_0] [i_2] = ((6844708469169049798LL) > (((/* implicit */long long int) var_15)));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((var_10) ? (arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 + 2] [i_1 + 1] [i_1 + 2]))))));
                            var_30 = ((/* implicit */unsigned int) ((long long int) -1101987472694325103LL));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        arr_36 [i_0 - 1] [i_0] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((var_9), (((/* implicit */signed char) var_10))))), (max((((/* implicit */unsigned short) arr_0 [i_1 + 1] [i_0 - 1])), (arr_15 [i_0 - 1])))));
                        arr_37 [8ULL] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (~((+(var_0)))));
                        arr_38 [i_2] [i_0] [i_2] [(_Bool)1] [i_11] = var_17;
                        arr_39 [i_0] [i_2] [i_1 - 2] [i_0] = ((/* implicit */signed char) ((_Bool) ((arr_7 [i_1 - 2] [i_1] [i_0 - 1] [i_0 - 1]) || (((/* implicit */_Bool) ((short) var_5))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    {
                        var_31 &= ((/* implicit */unsigned int) min((((((((/* implicit */long long int) var_11)) / (var_16))) + (-6844708469169049799LL))), (((/* implicit */long long int) ((signed char) var_11)))));
                        var_32 |= ((unsigned long long int) ((unsigned char) arr_11 [i_0 - 1] [i_13] [0U] [i_14]));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) var_17))));
    var_34 = ((/* implicit */unsigned short) var_8);
}
