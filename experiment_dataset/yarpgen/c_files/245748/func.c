/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245748
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
    var_11 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) == (((/* implicit */int) (unsigned char)21))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)15)) % (((/* implicit */int) (unsigned char)43))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min(((unsigned char)244), ((unsigned char)43))))));
                    var_14 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
}
