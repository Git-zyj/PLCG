/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225262
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 9411621145064135838ULL)) && (((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) (unsigned short)7))))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (1054603191U)));
        arr_3 [i_0] = ((/* implicit */int) max(((+((+(1054603191U))))), (((/* implicit */unsigned int) (((-(arr_0 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((unsigned int) 476829390))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_10 [i_2] [i_1] [i_0] [i_2] &= ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [(unsigned short)10] [i_1] [i_2]))));
            }
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                arr_15 [i_1] = ((/* implicit */unsigned int) ((((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1]))))) >> (((min((var_16), (3596201291773136090ULL))) - (3596201291773136086ULL))))))));
            }
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                arr_19 [i_1] = (~(2147483647));
                arr_20 [(short)5] [i_1] [i_4] [i_4] = ((/* implicit */long long int) ((int) arr_16 [i_0] [i_1] [i_0]));
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [0U]);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    arr_26 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) ((((arr_23 [i_0] [i_1]) || (arr_23 [i_0] [i_1]))) && (((/* implicit */_Bool) var_6))));
                    arr_27 [i_0] [i_1] [3LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51830)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_5])) : (((/* implicit */int) var_9))))) & (var_8)));
                }
                arr_28 [(_Bool)1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_5] [(unsigned char)12] [i_5]));
                arr_29 [i_0] [i_1] [i_0] [9] = arr_22 [i_0] [i_1] [i_1] [i_5];
                arr_30 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) ((unsigned int) ((-906597499) - (((/* implicit */int) (unsigned short)18790)))));
            }
        }
    }
    var_18 = ((/* implicit */int) var_13);
}
