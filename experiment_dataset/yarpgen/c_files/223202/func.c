/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223202
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-245)))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (var_8)))), (((arr_8 [i_0] [(_Bool)1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [4U] [i_2]))) : (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)245)))));
                        var_14 -= ((/* implicit */_Bool) var_5);
                        arr_14 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)244))))), (((unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 + 2]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [11ULL] [i_0] = ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (var_4)))));
                        var_15 -= ((/* implicit */short) arr_3 [i_0] [(unsigned short)6]);
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (unsigned char)136))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_17 &= ((/* implicit */unsigned short) ((arr_6 [i_1] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_7)))))))));
                            var_18 &= var_2;
                        }
                        for (long long int i_7 = 3; i_7 < 18; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_5] [i_7 - 1]);
                            var_20 += ((/* implicit */_Bool) 2335847867986375865ULL);
                            arr_28 [i_2] [i_1] [i_1] [i_5] [4LL] [i_7] &= ((((/* implicit */_Bool) ((arr_4 [i_0] [i_2] [i_7]) | (((((/* implicit */_Bool) 28U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (2335847867986375865ULL)))))) || (((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_2] [i_5] [i_7] [(unsigned short)17] [i_1])));
                            arr_29 [i_0] [i_5] [i_0] = ((/* implicit */short) (unsigned char)135);
                        }
                        arr_30 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)218);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0 + 1])) < (((/* implicit */int) var_8))));
                            var_21 = ((/* implicit */unsigned short) 2335847867986375865ULL);
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_5] [i_9] = ((/* implicit */unsigned long long int) 2145181795U);
                            var_22 = ((/* implicit */signed char) var_0);
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) 4294967295U);
                            var_24 = ((/* implicit */short) var_5);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)9624)) || (((/* implicit */_Bool) (short)20183)))));
                            var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_0 + 2] [i_11 + 1] [i_11 + 1] [i_0]))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0 + 1] [i_11 + 1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0 + 1] [i_0] [i_0 + 2] [i_11 + 1] [i_11]))) : (var_12)));
                            arr_43 [i_0] [i_0] [i_1] [5ULL] [i_5] [i_0] [i_0] = ((2335847867986375890ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13316))));
                            arr_44 [i_2] [i_0] [i_2] = ((/* implicit */short) ((var_13) ? (((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_37 [i_0 + 1] [i_0 + 1] [i_2] [i_5] [i_11] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_7))))))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) (~(-1992971483)))) | (((var_9) ? (var_3) : (var_3))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((int) (short)245)));
                    var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0 - 1])), (((unsigned char) arr_4 [i_0] [i_0 + 2] [i_0]))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) var_11);
    var_31 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_12))), ((+(var_3)))));
}
