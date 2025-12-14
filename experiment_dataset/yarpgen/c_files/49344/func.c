/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49344
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (2594655440706520970LL)));
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) / (arr_2 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_3 + 1] [i_1] [i_0])))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [18]))) / (arr_2 [i_0] [i_0] [i_2 - 1]))));
                            }
                        } 
                    } 
                } 
                var_21 |= ((/* implicit */short) ((((/* implicit */int) max((var_6), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (var_14))))))) >= (var_18)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_22 = ((/* implicit */int) var_11);
                var_23 = ((/* implicit */unsigned long long int) ((((var_17) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)61)))) ^ (((/* implicit */int) ((short) var_1)))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) / ((((-9223372036854775807LL - 1LL)) ^ (7303623521661263073LL))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((unsigned short) (_Bool)0));
}
