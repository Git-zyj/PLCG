/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215664
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
    var_10 += ((/* implicit */short) (~(((((/* implicit */_Bool) max((-6465406794006689115LL), (-6465406794006689100LL)))) ? (var_4) : (max((var_4), (((/* implicit */long long int) var_3))))))));
    var_11 = ((/* implicit */unsigned short) var_5);
    var_12 &= ((((_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned short)0))));
                            var_14 = ((/* implicit */long long int) (~(10127910945273050997ULL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_1] [i_0]));
            }
        } 
    } 
}
