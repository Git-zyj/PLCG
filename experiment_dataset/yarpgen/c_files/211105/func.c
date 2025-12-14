/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211105
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) min((var_12), (min((((var_8) << ((((~(((/* implicit */int) var_7)))) + (32))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_6))) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                    var_13 = ((/* implicit */unsigned char) ((6217339208383925323LL) & (5127743280990897949LL)));
                    arr_7 [i_0] [i_0] [i_2] [9] = ((/* implicit */int) (~(((var_1) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_5))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) -5127743280990897950LL);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) (((-(5127743280990897960LL))) & (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_15 = ((/* implicit */unsigned int) var_0);
}
