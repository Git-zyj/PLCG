/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20090
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 680750455)))) || (var_11))))));
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) 680750443))))))) / (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) ((arr_9 [i_0 + 3] [i_0 + 1] [i_2]) ? ((~(((/* implicit */int) (unsigned short)27344)))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [(short)8] [i_1] [i_1])) == (-680750455))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2])) + (((/* implicit */int) (unsigned char)93))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27343)) ? (-3735559079278399283LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [5] [i_0 - 1] [5])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0 + 1])));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 4; i_5 < 17; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) (~(((int) arr_14 [i_5] [i_5] [i_5] [i_0]))));
                        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0])) ? (arr_14 [i_0] [i_0 + 2] [i_0 + 1] [i_0]) : (((3539364845505800756ULL) + (((/* implicit */unsigned long long int) -680750453))))));
                    arr_18 [i_0] [i_4] [i_3] [i_3] |= ((/* implicit */unsigned int) ((((arr_15 [i_0] [i_4] [i_4]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))))) ? (((/* implicit */int) arr_8 [i_4] [i_0 + 2] [i_0 + 2] [i_4])) : (((/* implicit */int) (unsigned char)176))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2450653936887960558LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)8))))) ? (arr_3 [i_6 + 4]) : (arr_10 [i_0] [i_0 + 2]));
                                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0 + 1] [i_0]) - (arr_6 [i_0] [i_0 - 1] [i_0])));
                                arr_25 [i_0] [i_3] [i_4] [i_0] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)176)) ? (1033988275722920323ULL) : (((/* implicit */unsigned long long int) -1LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -2450653936887960546LL)) ? (0ULL) : (11935424795026993460ULL))) : (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
