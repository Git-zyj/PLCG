/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243844
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
    var_11 ^= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_8)))), (16873479002385329352ULL))), (((/* implicit */unsigned long long int) var_2))));
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((int) arr_6 [i_1]));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */long long int) var_9);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                arr_27 [i_1] [i_6] [i_5] [i_5] [(unsigned short)10] [i_1] [i_1] = ((/* implicit */signed char) (-(var_6)));
                                arr_28 [i_0] [i_1] [i_5] [i_1] [i_7] = ((/* implicit */signed char) arr_11 [i_1] [i_5] [i_6] [i_7]);
                                var_14 *= ((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_2)) - (76))));
                                var_15 ^= var_9;
                            }
                            var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_13 [i_0] [i_1 - 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) : (((((16873479002385329352ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [0LL] [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 - 1])))))));
                        }
                    } 
                } 
                arr_29 [i_1] [i_1 + 2] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (0LL))), (((/* implicit */long long int) var_2)))) != (min((((var_7) / (arr_0 [i_0]))), (((/* implicit */long long int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [13LL] [i_1]))))))))));
                var_17 ^= (!(((/* implicit */_Bool) (((-(0LL))) << (((var_4) + (4211287485675534011LL)))))));
            }
        } 
    } 
}
