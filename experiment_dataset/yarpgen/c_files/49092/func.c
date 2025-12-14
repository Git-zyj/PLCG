/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49092
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned char)200)), (18446744073709551610ULL))))))));
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_8 [i_2]);
                            var_13 |= ((/* implicit */unsigned short) arr_10 [i_3] [i_3] [i_3 - 1] [i_3]);
                            var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((((_Bool)1) ? (982428054U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0]))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
}
