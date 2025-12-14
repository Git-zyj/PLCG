/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192752
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(short)4] = ((/* implicit */unsigned int) (unsigned char)230);
                arr_6 [i_0] = ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) != (min((((((/* implicit */_Bool) (unsigned short)8160)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))))), (max((((/* implicit */long long int) var_11)), (-8635605846261764969LL)))))));
    var_21 = ((/* implicit */_Bool) (-((-(var_19)))));
}
