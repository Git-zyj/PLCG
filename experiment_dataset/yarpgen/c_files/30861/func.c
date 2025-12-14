/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30861
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_10)) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_10)))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_7))))) : (var_14)));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_12)))) : (var_9)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (arr_3 [(short)11]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        var_20 = ((/* implicit */signed char) arr_5 [i_1]);
        arr_7 [i_1] = ((/* implicit */long long int) var_7);
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        var_21 = var_13;
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_2))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(var_0))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_2] [i_3])) : (((/* implicit */int) var_16))))))) ? (arr_5 [i_3]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_4] [i_3] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) var_8);
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (arr_3 [i_4])))) : (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) var_5)) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) var_9))));
                                arr_22 [i_6] [i_2] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((var_16) ? ((~(((/* implicit */int) arr_18 [i_2] [i_3] [i_2])))) : (((/* implicit */int) var_6)))))));
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) 9124571418671115592ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27498))) : (0U))) : (var_3));
                }
            } 
        } 
    }
}
