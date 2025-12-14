/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191871
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
    var_20 += ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 |= max(((short)32755), (((/* implicit */short) arr_2 [i_0])));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (min((((/* implicit */int) ((short) (unsigned char)168))), (((((/* implicit */int) arr_6 [i_0] [i_2] [(signed char)10])) >> (((/* implicit */int) arr_5 [i_1] [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (signed char)(-127 - 1))))))))))));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(9223372036854775800LL))))));
                            var_24 = ((/* implicit */int) min((var_24), (((((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0])))) + (((/* implicit */int) min((((/* implicit */short) arr_5 [i_3] [i_2])), ((short)30637)))))) / (((/* implicit */int) (signed char)-105))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */int) ((arr_5 [i_0] [i_0]) ? (min((arr_4 [(signed char)22]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [(unsigned char)14]), (min((arr_3 [(signed char)16]), ((_Bool)1)))))))));
            }
        } 
    } 
}
