/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32156
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
    var_17 = ((/* implicit */unsigned char) var_16);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0 + 1] [i_0 - 1] = ((/* implicit */short) (~(5020221393479619510ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((7593950392084939784ULL) << (((((/* implicit */int) (short)-1346)) + (1352)))));
        arr_6 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) (unsigned short)1396);
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) 13426522680229932106ULL);
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))))))));
        }
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_17 [i_3] = ((((/* implicit */_Bool) 13426522680229932106ULL)) ? (((((/* implicit */_Bool) (unsigned short)1396)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (5020221393479619507ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))));
        arr_18 [i_3] = ((/* implicit */short) 5020221393479619510ULL);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) (-(3676136204960604075ULL)));
        arr_22 [i_4] = (+(arr_8 [i_4]));
        arr_23 [i_4] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2223))))))));
    }
}
