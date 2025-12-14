/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189747
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) ((unsigned char) var_6))))) : (((var_2) ? (((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 8924158089243448171ULL))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)127))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)112))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 3] [i_3] [i_1] [i_1] [i_3 - 1] [i_3 - 1]))) / (arr_10 [i_1] [i_3 + 2] [i_0] [i_1])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_11))));
                            arr_15 [i_1] [i_1] [i_1] [10LL] [(signed char)1] = ((/* implicit */long long int) ((66977792U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_4 - 1])))));
                            arr_16 [7] [(unsigned short)8] [i_1] [(_Bool)1] [i_4 - 1] = ((/* implicit */signed char) ((unsigned char) ((long long int) var_7)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((var_13) / (arr_10 [14U] [14U] [i_3 - 3] [i_3 - 3]))))));
                        }
                    }
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_1] [(short)7]))));
                    var_22 ^= ((/* implicit */unsigned short) ((int) var_0));
                    var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        {
                            arr_25 [i_1] [i_6] [i_1] [14LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((unsigned short) var_4)))) & (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_6))))) : (((/* implicit */int) var_4))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 2; i_8 < 13; i_8 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)-127)))));
                                arr_28 [i_8] [i_8 - 2] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_6)) > (((/* implicit */int) arr_27 [i_8 + 3] [i_8 - 2] [i_8 - 2] [i_1] [i_8 - 2])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-69))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (min((((/* implicit */long long int) arr_13 [i_0] [i_0] [0LL] [i_7] [i_8 + 3])), (var_8)))))));
                            }
                            var_25 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_7)))) / (((((/* implicit */int) arr_8 [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_6] [i_6]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
