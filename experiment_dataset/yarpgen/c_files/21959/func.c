/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21959
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((((/* implicit */long long int) 0U)), (5482972471055333701LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) (+(var_13)));
                    var_16 = ((/* implicit */unsigned int) ((signed char) var_9));
                }
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    var_17 -= ((/* implicit */unsigned char) ((unsigned short) arr_11 [i_4] [i_2] [i_1] [i_0]));
                    arr_12 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_0]));
                    var_18 = ((/* implicit */unsigned int) var_12);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_8 [i_0] [(short)14] [19U] [i_4]))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : ((~(arr_0 [i_0] [i_0])))));
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) 1574489226U)) & (var_7)))))));
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) != (var_7)));
                    arr_16 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) var_1);
                    arr_17 [i_0] = ((/* implicit */long long int) (signed char)-113);
                }
                for (unsigned long long int i_6 = 4; i_6 < 20; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) > (32736U)))) : (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_9 [i_0] [i_1]))))));
                    arr_20 [i_0] [i_1] [i_0] [(signed char)2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5516242768911258802LL)) ? (((/* implicit */int) ((_Bool) arr_10 [i_0] [i_0] [i_0] [(unsigned short)9]))) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)8] [i_2]))));
                }
            }
            arr_21 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */long long int) 32736U)) : (9223372036854775790LL)));
            arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [10LL] [i_1] [i_1 + 1])) ? (arr_18 [i_0] [i_1 + 1] [12LL] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        }
        arr_23 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */int) (short)30686)), ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))), (((/* implicit */int) ((((/* implicit */long long int) ((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)19]) >> (((/* implicit */int) (signed char)0))))) <= (max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (-5516242768911258816LL))))))));
        arr_24 [i_0] = ((/* implicit */signed char) (((+((+(9223372036854775807LL))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(short)9] [i_0] [(short)9] [i_0] [i_0] [(short)9])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) != (1745459531U)))) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_12)))))))));
    }
    var_23 = ((unsigned char) var_8);
}
