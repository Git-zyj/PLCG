/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197201
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((((/* implicit */unsigned long long int) ((var_9) << (((var_12) - (3852922463U)))))) % (((((/* implicit */_Bool) 18ULL)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) >> (((((/* implicit */int) var_4)) + (20369)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = 12795489752690851229ULL;
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) ((int) arr_7 [i_0 + 1] [i_0 + 1])))));
                }
                arr_10 [(unsigned short)3] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (max((2337602778160082630LL), (((/* implicit */long long int) arr_5 [9ULL] [9ULL])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-4861)), ((unsigned short)8138))))))));
                var_16 *= ((/* implicit */unsigned int) ((signed char) arr_6 [(short)14] [i_0] [i_0]));
            }
        } 
    } 
}
