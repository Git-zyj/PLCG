/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225695
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) (_Bool)1);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((unsigned char) arr_0 [i_1] [(signed char)4]));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) arr_8 [i_1] [i_2] [(unsigned short)6]);
                    var_20 = ((/* implicit */signed char) arr_8 [i_1] [i_2] [i_3]);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_4 = 4; i_4 < 11; i_4 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_0 [i_4 + 3] [i_4 - 4]))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+((+(1073741824U))))))));
                        var_23 = ((/* implicit */long long int) ((((unsigned long long int) 536870904ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 2] [i_1] [i_1])))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_24 *= ((/* implicit */short) ((((/* implicit */int) arr_17 [i_4] [i_4] [(short)13])) * (((/* implicit */int) arr_17 [(short)11] [(short)11] [(short)11]))));
                            var_25 -= ((/* implicit */short) arr_3 [i_1]);
                            var_26 += ((/* implicit */long long int) arr_12 [i_4] [0ULL]);
                            var_27 = ((/* implicit */unsigned char) ((arr_9 [(unsigned short)2] [i_1] [i_4 - 3]) ? (((/* implicit */int) arr_16 [i_1] [i_4] [i_4 + 1] [i_5])) : (((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_4 + 3] [i_4]))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
            arr_28 [5ULL] [i_1] [i_8] = ((/* implicit */short) (signed char)-82);
        }
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)34454)))))));
            arr_32 [i_9] &= ((/* implicit */int) arr_14 [(_Bool)1] [i_9] [i_9] [i_1]);
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)0))))))));
        }
        for (unsigned char i_10 = 3; i_10 < 13; i_10 += 1) 
        {
            var_30 *= ((/* implicit */unsigned int) var_2);
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) * (((/* implicit */int) arr_5 [i_1] [i_1]))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
            arr_35 [(unsigned short)2] [10LL] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_10 - 2]))));
            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) arr_12 [2ULL] [4ULL]))));
        }
        var_34 = ((/* implicit */short) ((arr_11 [i_1]) ? (((/* implicit */int) arr_19 [(unsigned char)0] [i_1] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_26 [i_1] [(unsigned short)2] [(unsigned short)1])) > (((/* implicit */int) var_14)))))));
    }
}
