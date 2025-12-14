/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193833
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
    var_19 = ((/* implicit */_Bool) 4294967295U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (16080828549607078472ULL)));
                                arr_15 [i_4] [i_1] [(unsigned char)15] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_12);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [13] [i_0]))) ^ (2838198420U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_7)))) : (((/* implicit */int) (short)-24564))));
                                var_20 = ((/* implicit */signed char) (!(var_14)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)24577)) : (((/* implicit */int) var_17))))))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (2838198420U)));
                    }
                    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                    var_24 ^= ((/* implicit */unsigned char) arr_3 [i_0]);
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)62)) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095)))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) arr_6 [i_6] [i_6] [i_6] [i_6]);
        arr_24 [(unsigned short)3] = ((/* implicit */short) min((min((((arr_19 [15] [23U] [i_6] [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24550)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)24559)) ? (arr_8 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) 2786639249U))))))));
    }
}
