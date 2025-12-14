/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199039
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
    var_13 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)85))))))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((15574821513705846527ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                        {
                            arr_13 [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-86))))), (max((((/* implicit */unsigned long long int) var_2)), (2871922560003705088ULL)))))) ? (((((/* implicit */_Bool) (-(2871922560003705073ULL)))) ? (2871922560003705111ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))) : (((/* implicit */unsigned long long int) var_6))));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [1U] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((/* implicit */int) ((_Bool) var_7))), (max((((/* implicit */int) arr_0 [i_1] [i_3])), (arr_4 [i_0] [i_2])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [(signed char)22] [(signed char)22] [i_2] [i_3] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_6) : (var_6)))))));
                        }
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                        {
                            var_15 *= ((/* implicit */signed char) (-((-(min((((/* implicit */long long int) var_2)), (var_8)))))));
                            arr_17 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)85))) : (min((var_5), (2871922560003705065ULL))))))));
                            var_16 += ((/* implicit */unsigned long long int) (signed char)-91);
                            arr_18 [i_0] [i_1] [21LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26722)) ? (var_4) : (((/* implicit */int) (signed char)16))))), (((((/* implicit */_Bool) var_8)) ? (15574821513705846551ULL) : (0ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_5]))) : (var_11)));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2533781534U)) && (((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_2] [i_3] [i_6]))));
                            var_18 ^= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [15] [i_3] [11U]);
                            arr_21 [i_0] [i_1] [i_3] = ((/* implicit */signed char) var_4);
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_22 [i_3]), (((/* implicit */unsigned short) (short)-8202))))) && (((/* implicit */_Bool) 2871922560003705065ULL))));
                            arr_26 [i_0] [i_1] [i_1] [i_2] [i_0] [1ULL] [i_7] = ((/* implicit */long long int) arr_19 [i_0] [i_1] [i_2] [i_3] [i_7]);
                        }
                        var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_20 = ((/* implicit */int) ((max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -8093809571721211670LL)))), (17ULL))) << (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1101752046096295380LL)) && (((/* implicit */_Bool) arr_19 [i_3] [i_0] [i_2] [(unsigned short)15] [i_0]))))) : (((/* implicit */int) (unsigned short)11395))))));
                        arr_27 [4U] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((15574821513705846542ULL) - (min((((/* implicit */unsigned long long int) 32512U)), (2871922560003705111ULL)))));
                    }
                } 
            } 
            arr_28 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-86))))) ? (arr_8 [i_0]) : ((+(((/* implicit */int) (short)32767))))))) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])));
            arr_29 [i_1] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) != (3435316705U))))) != (((long long int) arr_3 [i_0] [i_1] [i_0]))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [18U] [18U] [i_0] [i_0]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_0] [i_8] [2] = ((/* implicit */unsigned int) min((2871922560003705097ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15574821513705846550ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_0] [i_8])))))) ? (min((var_4), (((/* implicit */int) var_2)))) : (((/* implicit */int) max((var_7), (var_7)))))))));
            arr_33 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_22 [i_0]);
            var_22 = ((/* implicit */unsigned long long int) var_6);
        }
        var_23 |= ((/* implicit */short) arr_11 [(short)5] [i_0] [i_0] [i_0] [i_0]);
    }
    var_24 *= ((/* implicit */unsigned int) max((min((max((((/* implicit */unsigned long long int) var_9)), (var_0))), (max((var_0), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_7), (var_7)))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)20737))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) -5989185001795006366LL))))) ? (((/* implicit */unsigned long long int) var_1)) : (min(((~(2871922560003705088ULL))), (((/* implicit */unsigned long long int) var_4))))));
}
