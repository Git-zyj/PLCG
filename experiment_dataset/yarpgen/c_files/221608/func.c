/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221608
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((arr_5 [i_0] [i_2] [i_4]), ((~(((/* implicit */int) (_Bool)1)))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (_Bool)1)) + (arr_2 [i_1 - 2]))));
                                var_18 += (!(((/* implicit */_Bool) ((-9223372036854775803LL) / (((/* implicit */long long int) ((/* implicit */int) (short)11427)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) ((max((((/* implicit */unsigned long long int) var_6)), (var_5))) * (((/* implicit */unsigned long long int) 0))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 1])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0 - 2] [i_0 - 2]))) | (arr_3 [i_0 - 2] [i_0 - 1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((((((-976509691) + (2147483647))) << (((976509710) - (976509710))))), (((/* implicit */int) (unsigned short)1))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_22 = ((/* implicit */short) (+((~(9223372036854775807LL)))));
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (arr_9 [i_6] [i_6]) : (arr_9 [i_6] [i_6])));
                }
            }
        } 
    } 
}
