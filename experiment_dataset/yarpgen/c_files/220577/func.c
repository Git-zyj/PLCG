/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220577
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned char)22] [(unsigned char)22] [i_2] &= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) min((((_Bool) arr_0 [i_0] [i_0])), (arr_8 [i_2] [i_1] [i_0])))), (((signed char) ((unsigned short) arr_8 [i_0] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_10 += ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [(_Bool)1]))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [(unsigned char)16] &= ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
                        var_11 = ((/* implicit */_Bool) arr_1 [1ULL]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_4] [i_4])) ^ (((/* implicit */int) arr_2 [i_4] [i_4]))));
        arr_15 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-102)) & (((/* implicit */int) (signed char)-112))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [19LL] [i_5] [i_5])) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5])) >= (arr_16 [(signed char)7])))), (arr_7 [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 4; i_7 < 11; i_7 += 3) 
            {
                {
                    arr_24 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5])) && (((/* implicit */_Bool) ((arr_6 [i_7] [i_7] [i_7 + 2] [i_7]) ? (((/* implicit */int) arr_18 [i_7 + 3] [(short)0] [i_7 + 2])) : (((/* implicit */int) arr_0 [i_7] [i_7 - 2])))))));
                    arr_25 [i_5] |= ((((/* implicit */long long int) arr_23 [i_5] [i_7 - 1] [i_7 - 3])) - (((long long int) -1564609841)));
                }
            } 
        } 
        var_14 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_5] [i_5]));
    }
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            {
                arr_32 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_4 [i_8] [i_9]);
                arr_33 [i_8] = ((/* implicit */unsigned int) min((arr_30 [i_8] [i_9]), (((/* implicit */unsigned long long int) min(((unsigned char)88), (((/* implicit */unsigned char) arr_11 [i_8] [i_8] [(signed char)2] [i_9])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_5);
}
