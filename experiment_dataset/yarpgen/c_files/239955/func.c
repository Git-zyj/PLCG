/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239955
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((int) (unsigned short)7089));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -663120918)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) 663120929)) ? (arr_2 [8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4252))))))) : (min((((/* implicit */unsigned long long int) (~(0U)))), (min((1779235413269152173ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) 663120895);
                            var_15 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((4294967293U) >> (((4294967293U) - (4294967288U)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [(unsigned short)3] [i_2 + 1]) || (((/* implicit */_Bool) var_3)))))))));
                            arr_11 [11] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) 3072613071593754321LL);
                            var_16 -= ((/* implicit */short) -22346114);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = var_5;
}
