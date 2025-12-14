/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237091
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    arr_7 [(signed char)21] [i_1] [i_2] = ((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                    var_20 = ((/* implicit */signed char) 624683199);
                }
                for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 3] [i_1]);
                    arr_12 [i_1] = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_3 + 1]);
                }
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) : (arr_2 [(short)24])));
                                var_22 |= ((((/* implicit */_Bool) arr_13 [i_6] [7] [i_4] [7])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (arr_13 [i_1] [i_4] [i_5] [i_6]));
                                var_23 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)5] [i_1] [i_6]))) : (arr_5 [i_0] [i_1] [i_5] [i_6]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [(short)22] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (unsigned int i_8 = 3; i_8 < 16; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_30 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 867954311)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) 46214451589422111LL)))) % (((/* implicit */unsigned long long int) -8713876003928925226LL)))))));
                                var_24 = (((+(arr_24 [i_7 + 2] [i_7]))) | (((/* implicit */unsigned long long int) 0)));
                            }
                        } 
                    } 
                } 
                arr_31 [i_7 + 2] [i_7] [8LL] = ((/* implicit */unsigned long long int) arr_8 [i_7] [(unsigned short)1] [i_7 - 1] [i_7]);
            }
        } 
    } 
}
