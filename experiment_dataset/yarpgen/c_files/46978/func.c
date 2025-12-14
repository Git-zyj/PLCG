/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46978
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(17467096826771714285ULL)))) ? ((~(min((9223372036854775807LL), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((((/* implicit */int) (unsigned short)54579)) < (((/* implicit */int) (short)511)));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61992))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_13 [i_3] [i_1] [i_2] [i_3] [i_4]))));
                            var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [(short)13] [(unsigned short)14]);
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) /* same iter space */
                        {
                            var_20 &= ((/* implicit */long long int) arr_17 [(short)12] [i_1] [i_2] [i_3] [i_5 - 2]);
                            var_21 -= arr_2 [i_0] [i_1] [i_1];
                        }
                    }
                    var_22 += ((/* implicit */short) ((var_13) ? ((~(arr_6 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22623)))));
                    var_23 &= ((/* implicit */_Bool) var_0);
                }
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= (((((/* implicit */_Bool) min((-2084618995), (((/* implicit */int) (short)511))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)511))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1)))))))));
                            arr_24 [i_7] = ((/* implicit */_Bool) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (var_15)))));
                            arr_25 [i_0] [i_1] [i_6 + 4] [i_7] = ((/* implicit */unsigned int) (short)-26907);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (short i_10 = 3; i_10 < 16; i_10 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) min((((((/* implicit */int) max(((unsigned short)22615), (((/* implicit */unsigned short) (short)511))))) / (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) var_14)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    arr_33 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_32 [i_9] [i_8] [i_10] [i_10 + 1])))) ? ((~(arr_31 [i_8] [i_8] [i_9] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-46)), (((((/* implicit */_Bool) (signed char)-84)) ? (2296710938U) : (((/* implicit */unsigned int) -2084618975))))));
                }
            } 
        } 
    } 
    var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42920))) + ((~(var_10))));
}
