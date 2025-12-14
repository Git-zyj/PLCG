/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47351
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_2 + 2] [i_1] [4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7095409787219129628LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_10 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) : (((long long int) arr_1 [i_0] [i_3]))))) ? ((~(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) - (var_0))))) : (((/* implicit */long long int) ((max((arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 2]), (var_1))) | (max((723601873U), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])))))))));
                                var_15 = ((/* implicit */unsigned short) arr_4 [i_2 - 2]);
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [3U] [3U] [3U] [3U] [3U])) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (var_3)));
                            }
                        } 
                    } 
                } 
                arr_15 [(unsigned short)2] |= ((/* implicit */long long int) var_12);
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_2);
}
