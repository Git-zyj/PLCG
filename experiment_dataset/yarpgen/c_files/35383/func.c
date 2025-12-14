/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35383
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
    var_16 -= ((/* implicit */long long int) 12701816818936682116ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 ^= ((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_0] [i_0])))) != (arr_5 [i_0] [20LL] [i_3])));
                            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) -7219226019934253505LL))))), (arr_6 [i_0] [i_2]))))));
                            arr_10 [i_0] [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_9 [i_0] [i_2] [i_3]), (arr_9 [i_0] [i_2] [i_0]))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (min((min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned int) arr_6 [i_0] [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
