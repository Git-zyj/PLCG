/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199355
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0]));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0] [i_0]));
    }
    var_14 -= ((/* implicit */short) max((min((-6740598520637076855LL), (((/* implicit */long long int) (short)2087)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12400774362779733893ULL)) ? (14902099912736232560ULL) : (6045969710929817723ULL)))) ? (max((((/* implicit */long long int) var_8)), (4173850620181158085LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5737719196404418989LL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((long long int) max((arr_3 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])))));
        var_16 = ((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) (signed char)13)))), (((/* implicit */int) arr_4 [i_1 + 1]))))));
        var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 704818103U)) <= (-1LL))))) & (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) (short)2082))))))) ? (((/* implicit */int) max((arr_4 [i_1 + 1]), (((unsigned short) arr_3 [i_1]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)13)), (arr_4 [i_1 - 1])))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 4; i_3 < 12; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_4 [i_1]);
                    var_19 ^= ((/* implicit */signed char) min((((unsigned long long int) arr_4 [i_1 + 2])), (((/* implicit */unsigned long long int) min((arr_8 [i_3 - 2]), (arr_8 [i_1 - 2]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned int) arr_12 [i_4]));
        var_21 = ((/* implicit */long long int) (~(arr_12 [i_4])));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) + (2884986552525669561ULL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4]))) : (3595407388U))))));
        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) || (((/* implicit */_Bool) arr_12 [i_4]))));
        var_24 = ((/* implicit */signed char) ((unsigned short) arr_13 [i_4]));
    }
    var_25 = var_3;
}
