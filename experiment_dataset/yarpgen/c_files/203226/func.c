/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203226
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0 - 4]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned short) ((var_14) * (((/* implicit */int) (unsigned char)0))));
                            arr_13 [i_3] = ((/* implicit */_Bool) (+(arr_0 [i_3 - 2])));
                        }
                        arr_14 [i_0] [i_1] [(unsigned short)20] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)0))));
                        arr_15 [i_1] [i_3] [i_1] = ((long long int) arr_6 [i_0 + 3] [i_0 - 3]);
                    }
                    var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((17261185510010940535ULL) >= (((/* implicit */unsigned long long int) var_0)))))) + (((arr_0 [i_0 - 2]) - (arr_0 [i_0 + 2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_19 [i_5]))))) && (((var_9) < (((/* implicit */long long int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 11357905314727909867ULL))), (min((arr_7 [i_6] [2] [i_6] [(unsigned short)16] [i_6]), (((/* implicit */unsigned short) var_4)))))))));
                                arr_29 [i_7] [i_8] = ((/* implicit */unsigned short) max(((+(min((((/* implicit */long long int) var_4)), (1232089386226485687LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((2803706998U), (1145659778U)))))))));
                                var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) arr_22 [i_0] [i_7 - 1] [i_6] [i_0 + 1] [i_5 + 3]))))) != (min((((/* implicit */unsigned long long int) arr_24 [i_7 - 1] [i_5 + 1] [i_0 - 4] [i_5 + 1])), (var_7)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_9 = 4; i_9 < 21; i_9 += 4) /* same iter space */
    {
        var_24 = max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)16951)) << (((var_9) - (6434289069222254614LL))))), ((-(((/* implicit */int) (_Bool)0))))))), (max((min((((/* implicit */unsigned long long int) 3844742298U)), (13362565968104206850ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_9] [i_9] [i_9]))))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((short) ((arr_1 [i_9 - 4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9 + 3])))))))));
        arr_32 [i_9] [i_9] = ((/* implicit */short) (!(((((/* implicit */_Bool) 13362565968104206850ULL)) && (((/* implicit */_Bool) 5084178105605344764ULL))))));
        var_26 = ((/* implicit */long long int) var_3);
        var_27 = ((/* implicit */long long int) ((int) ((((/* implicit */long long int) arr_20 [8LL] [(signed char)16] [i_9 + 1])) > (-1232089386226485688LL))));
    }
    var_28 &= ((/* implicit */short) var_2);
}
