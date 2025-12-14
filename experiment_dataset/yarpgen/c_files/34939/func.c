/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34939
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (unsigned char)198))));
    var_21 = ((/* implicit */long long int) max(((short)7), (((/* implicit */short) (unsigned char)193))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [(unsigned short)9] [(short)3] [i_1 + 2])) > (((/* implicit */int) var_19)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))))))) : (var_13)));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(arr_0 [0ULL] [0ULL]))))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((long long int) arr_3 [i_1] [15LL] [(short)14])), (((/* implicit */long long int) var_16)))))));
                var_25 = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */long long int) arr_0 [i_0] [5ULL]);
                            arr_9 [i_0] [i_0] [i_0] [(unsigned char)2] |= ((/* implicit */long long int) arr_7 [14ULL] [i_1 - 2] [i_2] [5LL]);
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)199))));
                            var_28 = ((/* implicit */signed char) var_19);
                        }
                    } 
                } 
            }
        } 
    } 
}
