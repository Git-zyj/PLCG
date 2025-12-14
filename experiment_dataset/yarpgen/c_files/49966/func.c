/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49966
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
    var_11 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [14U] = ((/* implicit */_Bool) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1105704817)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24364))) / (4611615649683210240ULL)))));
                                var_12 = ((/* implicit */long long int) 1101408900);
                                var_13 = ((/* implicit */unsigned int) 4611615649683210236ULL);
                                var_14 = ((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned long long int) ((int) (signed char)92)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
}
