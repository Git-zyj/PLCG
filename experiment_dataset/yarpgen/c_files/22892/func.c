/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22892
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) 1231074330950532398LL);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        var_19 = min((((/* implicit */unsigned int) (short)19336)), (2163119136U));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_6 [i_3 + 3]);
                    }
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        var_20 = ((/* implicit */signed char) 3154184625U);
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_1 [i_5] [i_4 + 2])), (arr_0 [i_5] [i_7])))));
                                var_22 = ((/* implicit */signed char) (~(min((var_6), (((/* implicit */unsigned int) var_10))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 3; i_10 < 11; i_10 += 2) 
                        {
                            arr_33 [i_4 + 2] [i_4 + 2] [i_5] [i_4] [i_9] [i_4 + 2] [i_10 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_9] [i_9] [i_9 - 2])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (!(((/* implicit */_Bool) 5966823172395640078ULL)))))));
                            arr_34 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_0);
                        }
                        arr_35 [i_4] [i_6] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-19332)) ? (((/* implicit */int) (short)-19347)) : (((/* implicit */int) (short)31703)))), (((/* implicit */int) arr_2 [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (var_11))) ? (((((/* implicit */_Bool) 5966823172395640051ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19336))) : (12479920901313911559ULL))) : (arr_36 [i_4 - 1] [i_11 - 1] [i_4 + 2] [i_4 - 1])));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-19337)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) : ((+(var_3)))));
                        var_25 = ((/* implicit */unsigned char) arr_28 [i_6] [i_5] [i_6] [i_11 + 1]);
                    }
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((((((~(((/* implicit */int) var_14)))) + (2147483647))) >> ((((~(var_9))) + (2574473754065503713LL))))) : (((/* implicit */int) arr_28 [i_4] [i_5] [i_4] [i_6]))));
                        var_27 = ((/* implicit */signed char) var_6);
                    }
                    arr_43 [i_4] [i_4] [i_6] = ((/* implicit */long long int) var_13);
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(7726040445342871542ULL))) : (((/* implicit */unsigned long long int) (~(var_1))))));
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */short) max((((unsigned int) arr_46 [i_4 - 1] [i_5] [i_6] [i_4 + 1])), (max((((/* implicit */unsigned int) var_5)), (arr_19 [i_4 + 2] [i_4])))));
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_18)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_4] [i_5] [i_4] [i_14])) * (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))))));
                            var_31 = ((/* implicit */long long int) var_8);
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)4075))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_15)) ? (arr_37 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) : (((/* implicit */unsigned long long int) (+(var_4)))))) : (max((9ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_18 [i_6] [i_13] [i_6])), (arr_9 [i_5] [i_6] [i_6]))))))));
                        }
                        arr_49 [i_4] [i_4] [i_6] [i_5] = (~(((var_4) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_17))))));
                        arr_50 [i_4] [i_4] [i_5] [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) var_5);
                        arr_53 [i_4] [i_4] [i_6] [i_15 + 1] [i_4] [i_15 - 1] = ((signed char) (-(((/* implicit */int) arr_52 [i_15 + 1] [i_6] [i_6] [i_4 - 1]))));
                    }
                    /* vectorizable */
                    for (short i_16 = 3; i_16 < 13; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */signed char) 2147221504U);
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_4] [i_4 + 2] [i_4] [i_16 - 3] [i_4 + 2])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    }
                }
            } 
        } 
    }
    var_37 = (+(var_9));
    var_38 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
}
