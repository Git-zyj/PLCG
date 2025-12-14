/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3751
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) var_11))))))) ? (max((((var_7) >> (((((/* implicit */int) var_15)) + (173))))), (((/* implicit */long long int) -1697265249)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)78)))))));
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-90))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-28052))) ? (((/* implicit */long long int) arr_10 [i_3] [14LL])) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_2] [i_2] [i_4 + 2] [i_2])))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (arr_7 [i_4 - 1] [i_2 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 - 1] [i_4 + 1] [i_4] [i_4] [i_2 - 1])))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] [i_1] = var_15;
                }
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) var_2);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) var_3)), (((/* implicit */long long int) ((short) var_1)))))) || (((/* implicit */_Bool) (signed char)92))));
            }
        } 
    } 
}
