/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196981
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((int) (short)-18077))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (8931370107710734274ULL))) : (4658551703748433196ULL))) >> (((((/* implicit */int) arr_3 [i_0])) + (28679)))));
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])) ^ (17596944543206054267ULL))))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [i_2])) | (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [(_Bool)1] [(unsigned char)23])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((((unsigned short) min((arr_5 [i_1] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_9 [3LL] [i_3] [i_2] [13] [(signed char)10]))))), (((/* implicit */unsigned short) (signed char)81))));
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = ((var_0) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)42350))))));
                    }
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [(signed char)16]);
    }
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_1))));
}
