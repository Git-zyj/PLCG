/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45082
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
    var_17 = ((/* implicit */unsigned int) ((signed char) ((var_6) >> (((var_0) - (1075727488U))))));
    var_18 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1])) || (((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_2] [i_3])))) ? (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) || (((/* implicit */_Bool) arr_0 [i_3]))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_10 [i_2] [i_2])))))) : (max((((/* implicit */unsigned long long int) 260046848)), (arr_9 [i_1 + 1] [i_1 + 1] [i_2] [(signed char)3] [i_0 + 1])))));
                                arr_12 [i_0] &= ((/* implicit */_Bool) ((signed char) arr_11 [i_0 + 1] [i_1] [(short)9] [i_3] [i_4] [i_4] [i_4]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_17 [i_0 - 1] [i_5] [i_0 - 1] [i_6] [i_5] = ((/* implicit */int) ((arr_6 [i_0 - 1] [i_1]) * ((-(((arr_1 [i_5]) % (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0]))))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) (unsigned char)44))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((1344149410U), (var_0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(1418742827)))) : (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))))));
}
