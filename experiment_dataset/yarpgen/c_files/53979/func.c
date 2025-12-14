/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53979
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
    var_15 = ((/* implicit */_Bool) min((var_8), (((((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8))) / (((/* implicit */unsigned long long int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        var_17 = ((/* implicit */short) ((unsigned long long int) arr_2 [i_0]));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((var_5) ? (((/* implicit */unsigned long long int) -3014925489865046949LL)) : (arr_9 [i_3] [i_2] [i_1] [i_0])));
                        var_19 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_12 [i_0] [i_0] [i_2])));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0] [i_1] [i_2] [i_5]) : (arr_9 [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (short)22650))))) ? (((((/* implicit */_Bool) (short)-22650)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))));
                    var_24 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2])) : (((/* implicit */int) var_5)));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) var_14);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((var_14), (((/* implicit */long long int) (short)-22652)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)-22651)))) : (((/* implicit */int) (short)22650)))))));
}
