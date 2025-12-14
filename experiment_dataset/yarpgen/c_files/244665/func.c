/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244665
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) > (10553667853102130356ULL)));
    var_21 = ((((/* implicit */int) ((var_5) == (((((/* implicit */int) (unsigned char)129)) / (var_5)))))) != (((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_2 - 1] = ((/* implicit */unsigned int) var_3);
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)25277);
                    arr_7 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1])) ? (min((((/* implicit */long long int) arr_4 [i_1])), (var_2))) : (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (var_17) : (((/* implicit */int) arr_2 [i_1] [i_2 - 1])))) : (var_7));
                }
            } 
        } 
    } 
}
