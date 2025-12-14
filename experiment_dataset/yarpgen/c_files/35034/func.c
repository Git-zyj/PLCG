/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35034
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_12)) <= (var_8))))) <= ((+(var_13)))))) & (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60363))) != (1850097511U)));
                arr_4 [15U] &= min((max((((/* implicit */unsigned long long int) 3637184775990377010LL)), (16269250188512423221ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) var_2))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)16320))))))), ((+(((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)14129))))))));
                    var_20 = ((/* implicit */long long int) ((min(((+(((/* implicit */int) arr_10 [i_2] [i_3])))), (((/* implicit */int) min((arr_10 [i_3] [i_4]), (((/* implicit */unsigned short) var_2))))))) - (((/* implicit */int) var_11))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_4 - 2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 4554496440018650344LL)) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_2]))) : (arr_6 [(short)4] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -6045295760940387793LL))))));
                        arr_16 [i_2] [i_2] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) + ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_4])))))));
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        arr_20 [i_2] [i_2] [i_2] [i_2] = arr_10 [i_4] [i_4];
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (-(arr_6 [4ULL] [i_3])));
                            var_22 = ((/* implicit */int) var_3);
                            var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (var_6)))) : (((unsigned long long int) arr_7 [i_2] [i_2] [i_2]))))));
                            var_24 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_7 [i_3] [i_3] [i_3])))))))) / (min((((arr_8 [9U] [20LL] [(short)4]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_7] [i_2]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_14 [i_2] [i_3] [i_2] [i_6])), (var_9)))))));
                            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_9 [i_3]) == (((/* implicit */long long int) 2444869782U))))), (((2631930618314494963LL) / (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned long long int) (-(min((-6045295760940387806LL), (6045295760940387793LL)))))) : (((((((/* implicit */_Bool) arr_9 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2249600790429696ULL))) * (((/* implicit */unsigned long long int) arr_23 [i_2] [i_3] [i_7]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_26 -= ((/* implicit */_Bool) var_14);
                            var_27 = ((/* implicit */long long int) ((short) 2631930618314494963LL));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_2] [i_3] [i_9] [i_2] [i_9] = (short)-13535;
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)16033))) ? (var_6) : (arr_19 [i_3] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 1] [10U]))))));
                            var_29 = ((/* implicit */long long int) arr_24 [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]);
                            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_12 [i_6 - 1] [i_4] [2U]))) >> (((arr_28 [i_2] [i_3] [i_3] [i_6 + 1] [i_6 + 1]) - (10744672238215219960ULL)))));
                        }
                    }
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (min((var_16), (((/* implicit */short) var_15))))))), ((-(((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_3] [(short)15] [(short)15]))))));
                        var_32 = ((/* implicit */_Bool) max((((unsigned char) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) + (((/* implicit */int) (signed char)38))))), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_14)))))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        arr_38 [i_2] [i_3] [i_4] [i_11] = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6045295760940387787LL)) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_11])) : (((/* implicit */int) (signed char)0))))))));
                        arr_39 [i_3] = ((/* implicit */int) ((arr_18 [i_11]) > (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))));
                        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) 2143289344U))));
                    }
                }
            } 
        } 
    } 
}
