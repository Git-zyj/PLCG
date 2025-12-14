/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232114
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
    var_19 = ((var_13) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) var_8))))) - (16093))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [(_Bool)1] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 - 1]))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)26394))));
                                var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */signed char) arr_11 [i_0] [i_3 + 1] [i_4 + 3])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((long long int) var_5))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_9 [i_3] [i_3 + 1])))) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_7)), (var_8))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4 + 2] [i_3 + 1])))))) : (((/* implicit */int) var_2))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_10 [i_4 + 3] [i_4] [i_3 + 1] [i_1])) >> (((((/* implicit */int) var_12)) - (3871))))) : (((((/* implicit */_Bool) (unsigned short)39142)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_4 + 3] [i_3] [i_3 + 1] [i_1])))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) var_15);
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */_Bool) var_18);
    var_25 = ((/* implicit */unsigned short) ((_Bool) max((min((((/* implicit */long long int) var_10)), (var_8))), (((/* implicit */long long int) min((var_17), (((/* implicit */short) var_18))))))));
    var_26 = ((/* implicit */short) var_9);
}
