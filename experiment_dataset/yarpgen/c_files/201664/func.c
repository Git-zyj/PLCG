/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201664
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 1017453966))));
                                var_16 = ((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_2] [i_4] [i_2]);
                            }
                        } 
                    } 
                    var_17 = (unsigned char)97;
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */signed char) var_3);
}
