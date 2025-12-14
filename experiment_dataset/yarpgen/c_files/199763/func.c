/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199763
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [(_Bool)1] [(_Bool)1] [i_2] [i_3 + 2] [i_4] = (!(((/* implicit */_Bool) ((long long int) var_16))));
                                arr_16 [(_Bool)1] [i_1] [11ULL] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
