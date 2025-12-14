/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249817
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_13 ^= ((/* implicit */short) (+(((3758221170U) >> (((((/* implicit */int) (unsigned char)33)) - (24)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))) | (arr_0 [i_1])));
        var_15 = ((/* implicit */unsigned char) ((24576U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_2] [i_2 + 1])) <= (-6753768437451850518LL))))) != (arr_4 [i_2] [i_2 + 1]))));
        arr_11 [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)209)))) ? (5ULL) : (((/* implicit */unsigned long long int) 24576U))));
        arr_12 [i_2 + 2] = ((/* implicit */unsigned int) max(((-(8994043060381813352LL))), (((/* implicit */long long int) ((arr_4 [(unsigned short)13] [5LL]) >= (arr_4 [i_2] [i_2 + 2]))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3 - 2] = arr_0 [i_3];
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            for (unsigned int i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max(((-(var_9))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_3] [i_5 + 2] [i_5 + 2])) != (((/* implicit */int) arr_21 [i_3] [(signed char)8] [i_3]))))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((int) max((arr_5 [i_5 + 2]), (arr_5 [i_5 + 1])))))));
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((var_6) + (var_6))) - (6922646328889521001LL))))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_5))))) + (var_0)));
    /* LoopSeq 1 */
    for (int i_6 = 4; i_6 < 13; i_6 += 1) 
    {
        arr_26 [i_6] = ((unsigned short) (+((-(((/* implicit */int) var_4))))));
        arr_27 [i_6] = ((/* implicit */long long int) min((18446744073709551608ULL), (((/* implicit */unsigned long long int) (signed char)-70))));
    }
}
