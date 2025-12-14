/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198082
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) var_8)) - (1)))))) : (min((((/* implicit */unsigned int) -2114263297)), (var_4)))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_1 [i_0] [i_0])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) var_8)) - (1)))))) : (min((((/* implicit */unsigned int) -2114263297)), (var_4))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_3] [8ULL] [i_2] [i_1] [i_1] |= ((/* implicit */unsigned char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) | (arr_5 [i_0]))) & (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_0 [i_1])))) << (((min((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_0)))) - (7392ULL))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                arr_16 [i_1] [i_3] [i_1] |= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1] [i_3] [10LL] [i_1] [i_1])))));
                                arr_17 [i_0] = ((/* implicit */short) ((var_8) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_4]))) - (var_4))))));
                                arr_18 [(unsigned short)9] [i_1] [i_2] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2]))) : (((arr_15 [i_0] [i_1] [i_2] [i_1] [i_0]) % (((/* implicit */unsigned long long int) var_6))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) (~(max((3974654364U), ((+(414234295U)))))));
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((-(var_6))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) >> (((/* implicit */int) (_Bool)1))))))))));
                                arr_22 [i_0 - 1] [i_1] [i_1] [6LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_15 [12LL] [i_1] [i_2] [0U] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [9U])))))));
                                var_19 = ((/* implicit */signed char) var_4);
                                arr_27 [i_0] [i_0] [i_0] = var_3;
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((18018150801925145277ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))));
}
