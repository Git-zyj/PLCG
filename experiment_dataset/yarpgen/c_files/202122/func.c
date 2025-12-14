/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202122
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
    var_16 = ((/* implicit */short) (unsigned char)22);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) | (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */short) (-(((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) | (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (unsigned char)120)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_10))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)10800))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_12) : (((/* implicit */long long int) arr_5 [i_1] [i_1]))));
        arr_8 [i_1] = var_14;
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_19 = arr_14 [i_1];
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned long long int) (unsigned char)27);
                        var_21 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_4] [i_4] [i_1] [i_1])) / (((/* implicit */int) (unsigned char)24)))));
                    }
                    arr_20 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */long long int) ((unsigned int) var_9)))));
                }
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_4 [i_3] [i_2]))))));
                    arr_24 [i_2] [i_2] [(short)9] [i_6] = ((/* implicit */short) (unsigned char)10);
                }
                var_23 = ((/* implicit */unsigned char) ((var_4) << (((((unsigned int) var_2)) - (123U)))));
            }
            arr_25 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (_Bool)0);
        }
    }
}
