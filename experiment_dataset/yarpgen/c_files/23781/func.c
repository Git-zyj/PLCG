/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23781
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
    for (long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (_Bool)1))));
                                var_14 = ((/* implicit */unsigned short) var_3);
                                var_15 = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */signed char) ((((/* implicit */int) var_7)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
}
