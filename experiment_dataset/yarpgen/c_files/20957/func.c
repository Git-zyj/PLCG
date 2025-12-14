/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20957
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
    var_18 |= ((/* implicit */long long int) max((var_3), ((-(((var_3) / (var_3)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_2))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 3] [i_2]))) < (((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                                var_21 -= ((/* implicit */short) ((min((arr_10 [i_0] [i_1] [i_0 + 1] [i_3] [i_3 - 1] [i_1 - 2]), (((/* implicit */long long int) var_8)))) / (((((arr_10 [i_4] [(unsigned char)9] [i_0 + 1] [2ULL] [i_3 + 2] [i_1 + 1]) + (9223372036854775807LL))) << (((((arr_10 [9U] [i_1 + 1] [i_0 + 1] [(unsigned short)1] [i_3 + 1] [i_1 - 2]) + (9179167178576887931LL))) - (35LL)))))));
                                arr_15 [(short)4] [i_1 - 2] [i_1 - 2] [8U] &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_10 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]) + (9179167178576887919LL)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned short) var_2))) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_14)))))) ? (((/* implicit */int) (_Bool)1)) : (min((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
}
