/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245850
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
    var_16 = ((/* implicit */unsigned long long int) ((signed char) var_9));
    var_17 = ((/* implicit */long long int) ((int) var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 = min((((/* implicit */int) (!(((/* implicit */_Bool) 325271303))))), (325271302));
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (_Bool)1);
                                var_20 = ((/* implicit */unsigned short) arr_8 [i_4] [i_4] [i_4] [i_4]);
                                arr_12 [i_1] [i_0] = ((/* implicit */unsigned long long int) -325271307);
                                var_21 = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) -325271326);
}
