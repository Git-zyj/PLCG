/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194791
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) (unsigned short)45411);
                arr_7 [i_1] = ((unsigned int) var_8);
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) 2241810422515263832ULL);
                    var_19 = ((/* implicit */long long int) (_Bool)0);
                    var_20 *= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((var_1) / (((/* implicit */int) (unsigned short)20125))))))) : (2241810422515263835ULL)));
                }
            } 
        } 
    } 
}
