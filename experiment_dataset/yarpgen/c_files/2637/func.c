/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2637
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) || (var_5)))) % ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))));
    var_16 = ((/* implicit */signed char) ((((((((var_14) + (9223372036854775807LL))) << (((var_12) - (2860438542853045591ULL))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (var_6))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((9223372036854775808ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))));
    var_17 &= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((~((~(arr_2 [i_1 - 1]))))) & (arr_4 [i_0] [i_0])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 2428103029U)) + (393216ULL))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0 + 2] [i_1]))))))))));
                                arr_13 [i_1 + 1] [i_3 - 1] [8ULL] [i_1 + 1] [8ULL] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))) % (arr_11 [i_0] [i_0] [i_0 + 2] [i_0] [i_0])));
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]);
                arr_14 [i_0] [i_0] = arr_3 [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((((9223372036854775808ULL) ^ (((/* implicit */unsigned long long int) 576179277326712832LL)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9)))))))));
}
