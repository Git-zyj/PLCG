/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25519
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (arr_3 [i_1] [i_0] [i_2 - 1]) : (arr_3 [i_1 + 1] [i_0] [i_2 + 1])))) ? ((-(1U))) : (((unsigned int) arr_3 [i_0] [i_0] [i_2 + 1]))));
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [0]))))), ((signed char)82))))));
                            }
                        } 
                    } 
                } 
                arr_13 [8LL] [i_0] [i_1] = ((/* implicit */unsigned int) ((int) (_Bool)1));
            }
        } 
    } 
}
