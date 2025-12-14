/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33868
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (var_1)))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_18))));
        var_22 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) var_2);
                            var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((int) arr_8 [i_4] [i_3] [i_1] [i_1])), ((+(((/* implicit */int) (signed char)127))))))), (min((((unsigned long long int) arr_0 [i_1] [i_2])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_1] [i_2] [i_3] [i_4])), (4294967295U))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                var_25 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294967294U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned long long int) min((4294967295U), (4U)))) : (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_8 [i_1] [i_1] [i_1] [i_5])))))));
                                var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_2]))), (((((/* implicit */_Bool) arr_5 [(unsigned char)11])) ? (((var_18) ? (arr_12 [i_1] [i_1] [i_3] [(unsigned short)12] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [11U] [i_2]))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (15U))))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(1922659931U)))) ? (((var_8) ? (var_4) : (((/* implicit */unsigned long long int) 1922659931U)))) : (((/* implicit */unsigned long long int) min((4294967284U), (1U))))))));
                                arr_16 [i_1] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_4])), ((~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_6]))))))), (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((2372307365U) % (4294967275U)))))));
                                var_28 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_4] [i_6]))))));
                                var_29 = (signed char)-72;
                            }
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_1] [i_1] [(unsigned short)7])) ? (arr_8 [i_3] [i_3] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((short) arr_14 [(unsigned short)4] [i_3] [i_3] [i_2] [i_3])))))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)30191)), (arr_10 [i_3] [i_3] [i_2] [i_1])))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_12 [(unsigned short)7] [i_1] [i_2] [i_1] [i_1]) != (arr_12 [i_2] [i_2] [i_2] [(unsigned short)3] [8]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((max((arr_18 [i_7] [i_7]), (arr_18 [i_7] [i_7]))), (arr_18 [i_7] [i_7])));
        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37616))) | (((((/* implicit */_Bool) ((unsigned int) (signed char)122))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-72)))) : (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_7] [i_7]))) : (arr_19 [i_7])))))));
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        var_34 = ((/* implicit */_Bool) min((((arr_22 [i_8] [i_8]) ? (arr_21 [i_8]) : (arr_21 [i_8]))), (((/* implicit */int) (unsigned char)216))));
        var_35 = ((/* implicit */short) min(((-(((arr_22 [9ULL] [i_8]) ? (((/* implicit */unsigned long long int) arr_23 [i_8])) : (18446744073709551587ULL))))), (((/* implicit */unsigned long long int) arr_23 [i_8]))));
    }
}
