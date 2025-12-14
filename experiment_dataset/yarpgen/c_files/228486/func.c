/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228486
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
    var_15 = ((/* implicit */int) ((unsigned short) var_7));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (signed char)79)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) var_12)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 22; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 2] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)79))) ^ (((((/* implicit */_Bool) 8567107020617501816ULL)) ? (((/* implicit */long long int) 467992936U)) : (arr_7 [i_1] [i_1] [i_2] [i_3])))));
                                var_16 = ((/* implicit */unsigned int) var_7);
                                var_17 = ((/* implicit */unsigned short) (~(2137453788U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_9 [i_0]))));
                                var_19 *= ((unsigned int) arr_17 [i_2 + 2] [i_5]);
                                var_20 = ((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_6 - 2] [i_2 - 3] [(unsigned char)6]) == (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-73)))))));
                                var_21 += ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned short)59834)))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (!(var_1)));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 24; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2 + 3] [i_1] [i_2] [i_7])) ? (var_3) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_7]))))) ? (arr_11 [i_0] [i_1] [(unsigned char)4] [i_7 + 1] [i_7 + 1] [i_2 - 3]) : (6ULL)));
                                arr_25 [i_1] [6LL] [i_1] [i_1] [i_8] [i_0] [6LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_7 - 3] [i_8] [7LL] [i_2 + 1] [i_0]))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1430512113)))))) % (((var_6) * (((/* implicit */unsigned long long int) var_14)))));
                }
            }
        } 
    } 
}
