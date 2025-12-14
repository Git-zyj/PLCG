/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221225
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
    var_19 = max((((/* implicit */long long int) (~(((var_13) >> (((var_13) - (588231949U)))))))), (var_18));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_4 [i_1] [i_0]);
                var_21 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) (short)14419)) : (var_7))), (arr_4 [i_0] [i_0 + 1]))), (((/* implicit */int) (signed char)-21))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (2147483647)))))), (var_18)));
                    arr_16 [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) var_4);
                    var_22 = ((/* implicit */signed char) 18446744073709551615ULL);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        var_23 = (+(var_9));
                        var_24 = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) (~(((((((/* implicit */int) arr_20 [i_2 - 1] [i_3] [i_3] [i_4] [i_5] [i_5 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_2])) + (37))) - (27)))))))) : ((-(var_10)))));
                        var_25 *= ((/* implicit */signed char) arr_10 [i_5] [i_3] [i_2 - 1]);
                        arr_21 [i_4] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_12 [i_2 - 1])) | (((/* implicit */int) var_4)))));
                    }
                    for (short i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_28 [i_2] [i_3] [i_3] [(short)16] [i_6] [i_2] = ((/* implicit */short) 12ULL);
                            arr_29 [i_2] [i_7] [i_7] [i_6 - 2] [i_7] [i_2] [i_4] = (~(arr_3 [i_7] [i_6]));
                        }
                        var_26 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((1LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))))) < (max((var_9), (var_3)))))), (((((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_2]))))) / (arr_3 [i_2 - 1] [i_6 - 1])))));
                    }
                }
            } 
        } 
    } 
}
