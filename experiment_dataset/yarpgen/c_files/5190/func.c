/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5190
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
    var_14 = min((((/* implicit */int) var_7)), ((+(((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (short)-16029)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [(signed char)9])) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (((/* implicit */int) arr_1 [i_0 - 2] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)16029)) << (((((/* implicit */int) (unsigned char)76)) - (62)))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (-3367346479376208900LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [(signed char)8]) : (arr_0 [i_0] [i_1])))))) : (((/* implicit */long long int) ((((var_10) / (((/* implicit */int) arr_3 [(signed char)4])))) << (((((/* implicit */int) arr_3 [i_0 + 1])) - (189)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_3] = ((/* implicit */unsigned char) ((short) var_1));
                            var_15 = ((/* implicit */unsigned long long int) max((((arr_6 [i_0 - 2]) / (((/* implicit */int) var_12)))), (((/* implicit */int) max(((unsigned char)58), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((max((min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_8 [i_0 + 1]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) 940593865754605935LL))))))));
                var_17 += ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 1])) != (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2]))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))));
                arr_12 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (983040U)))))) ^ (5288395154207065048ULL)));
            }
        } 
    } 
    var_18 ^= var_2;
    var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_8)) ^ (2147483647))) : (((/* implicit */int) var_0))))), (((min((10859920215323442867ULL), (((/* implicit */unsigned long long int) var_10)))) + (((/* implicit */unsigned long long int) var_1))))));
}
