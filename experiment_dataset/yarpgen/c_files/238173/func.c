/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238173
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) var_4))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (268435328) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [3ULL])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = arr_10 [i_1] [(unsigned char)18];
                                var_14 = ((/* implicit */unsigned int) max((var_14), (max((((/* implicit */unsigned int) arr_4 [i_0])), (max((min((((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 + 1])), (arr_6 [(short)5] [15LL]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_12 [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [(_Bool)1])))))))))));
                                arr_14 [i_4] [i_2] = ((/* implicit */long long int) (((-(((/* implicit */int) min((arr_5 [i_4]), (((/* implicit */unsigned char) arr_13 [i_4 + 2] [i_2] [i_2] [i_2] [i_0]))))))) <= (((/* implicit */int) arr_9 [i_0 - 2]))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [7U] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 63U)) ? (9223372036854775807LL) : (((/* implicit */long long int) 4294967295U))));
                }
            } 
        } 
    } 
    var_15 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (var_5))))))));
    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(var_4)))))) ? (((/* implicit */int) var_8)) : ((((((~(((/* implicit */int) (signed char)60)))) + (2147483647))) << (((((((/* implicit */int) var_6)) << (((/* implicit */int) var_2)))) - (104886)))))));
    var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)(-127 - 1))) - (-2147483646)))));
}
