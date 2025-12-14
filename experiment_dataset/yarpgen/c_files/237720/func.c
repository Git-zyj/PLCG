/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237720
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_0;
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (short)14743)))));
                    var_12 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_1 [i_2] [(unsigned char)17])))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_4 [i_0 - 1]);
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [(signed char)5] [(_Bool)1] [i_0 - 1] [i_0])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned int) arr_4 [i_0 - 1])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-60)) ? (3692194956U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14743)))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_16 [i_5]) : (arr_16 [i_5])));
        var_18 = ((/* implicit */unsigned long long int) (+(((unsigned int) var_10))));
        arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_7))));
}
