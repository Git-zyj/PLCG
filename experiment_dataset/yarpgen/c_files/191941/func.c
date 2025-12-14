/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191941
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */short) 1205311560U);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max(((unsigned short)42432), (((/* implicit */unsigned short) (unsigned char)239)))))));
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_20 = max((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_7 [i_1]))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_14 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? ((-(((/* implicit */int) arr_11 [i_1] [i_2])))) : (((/* implicit */int) var_16))));
            arr_15 [i_2] = arr_11 [i_1] [i_2];
            arr_16 [i_2] = ((/* implicit */signed char) var_6);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (short)12107))));
                var_22 = ((/* implicit */unsigned short) ((unsigned char) arr_11 [i_1] [i_2]));
                arr_20 [i_1] [(unsigned char)8] [i_2] [(short)12] = ((/* implicit */unsigned short) var_0);
            }
        }
        arr_21 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23108))))) ? (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */long long int) var_4)) : (6845796322361318108LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34)))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((var_23), (var_1)));
                            arr_31 [i_5] [i_5] [i_5] [i_4] [i_7] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) min((var_6), (((/* implicit */unsigned int) var_11))))))));
                            arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = min((((short) var_5)), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5 + 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_17 [i_5 + 2] [i_5 + 1] [i_5 - 1]))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_1] [i_1] [i_4] = var_7;
        }
        var_24 = ((unsigned int) (unsigned char)12);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_8])) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_22 [i_8] [i_8]))));
        arr_36 [i_8] = ((/* implicit */short) ((unsigned int) ((9819919642630592876ULL) / (((/* implicit */unsigned long long int) 1910935266U)))));
        var_26 ^= ((/* implicit */unsigned short) ((unsigned char) 9819919642630592876ULL));
        arr_37 [i_8] = ((/* implicit */long long int) var_16);
    }
}
