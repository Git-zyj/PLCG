/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45042
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
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned long long int) min((arr_4 [i_0]), (((/* implicit */short) var_1))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1])) : (((/* implicit */int) (unsigned char)164)))));
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_11))));
                        }
                    } 
                } 
                var_18 |= arr_4 [i_0];
            }
        } 
    } 
}
