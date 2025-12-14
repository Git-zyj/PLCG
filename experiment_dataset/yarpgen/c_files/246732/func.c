/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246732
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
    var_14 = ((/* implicit */short) ((((((/* implicit */long long int) var_12)) / (9062987338769767904LL))) < (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((min((((/* implicit */unsigned long long int) -304126318)), (6036268283344048822ULL))) - (6036268283344048793ULL))))))));
    var_15 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]);
                var_17 = ((/* implicit */long long int) arr_0 [i_0]);
                var_18 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_1])))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)-32759))))))) <= (((unsigned int) var_8)))))));
            }
        } 
    } 
}
