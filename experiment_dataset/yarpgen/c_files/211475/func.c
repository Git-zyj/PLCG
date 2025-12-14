/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211475
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
    var_18 = ((/* implicit */unsigned int) ((signed char) var_2));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 |= arr_0 [12U];
                    var_20 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (var_7))))) % (((/* implicit */unsigned int) ((arr_2 [13ULL] [i_0]) << (((((/* implicit */int) ((short) var_13))) - (800))))))))) : (((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0] [i_0])), (min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (var_7))))) % (((/* implicit */unsigned int) ((((arr_2 [13ULL] [i_0]) + (2147483647))) << (((((/* implicit */int) ((short) var_13))) - (800)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 &= ((/* implicit */short) arr_4 [i_0 + 1] [(signed char)7] [(short)8]);
                                var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) < (arr_13 [i_0 - 1] [i_0] [i_0 - 1]))))))) ? (((/* implicit */int) (short)1731)) : ((-(((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))))));
                                var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_5 [i_0]))) / ((+(((/* implicit */int) arr_1 [i_0]))))))) * (min((min((((/* implicit */long long int) var_5)), (-6889742706886531818LL))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-113)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (short)14351))));
                }
            } 
        } 
    } 
}
