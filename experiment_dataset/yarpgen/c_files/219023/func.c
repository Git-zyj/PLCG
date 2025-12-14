/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219023
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
    var_17 = ((/* implicit */unsigned short) var_6);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (425382182U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16776)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (unsigned short)25015)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_8)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) var_16);
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) min((max((var_12), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((int) (unsigned short)43948))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-26123)))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))) ? ((-(max((((/* implicit */long long int) (unsigned char)233)), (var_4))))) : (arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] [i_4])));
                                arr_20 [i_0] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((var_4) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_3 + 1] [i_0] [i_3 + 1] [i_0] [i_0] [i_0]))))));
                                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_16 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3]);
                                var_20 = ((/* implicit */signed char) ((int) max((var_1), (((/* implicit */short) ((signed char) var_13))))));
                                var_21 = ((/* implicit */_Bool) (unsigned short)43948);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                arr_28 [i_0] [i_5] [i_6] = arr_18 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0];
                var_22 = arr_14 [i_6] [i_5] [i_0];
            }
            arr_29 [i_0] [i_5] [i_0] = var_9;
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_7]) - (((/* implicit */int) arr_24 [i_0] [i_7]))));
            arr_33 [i_0] = ((/* implicit */short) (signed char)-122);
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
    {
        arr_36 [i_8] [i_8] = max((((/* implicit */short) ((_Bool) arr_34 [i_8]))), (min((arr_13 [i_8] [i_8] [i_8]), (((/* implicit */short) (unsigned char)25)))));
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? ((~(8086789660729485715LL))) : (((/* implicit */long long int) (+(arr_4 [i_8])))))), (((/* implicit */long long int) ((arr_27 [i_8] [(unsigned short)9] [i_8] [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_8])))))))))));
        var_24 = ((/* implicit */unsigned long long int) (((-(arr_0 [i_8] [i_8]))) > (((arr_0 [i_8] [i_8]) / (arr_0 [i_8] [i_8])))));
    }
    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_3)))));
}
