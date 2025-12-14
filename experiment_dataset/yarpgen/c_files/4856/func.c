/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4856
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
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (min((((/* implicit */int) arr_0 [i_1 + 1])), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))) : (((((/* implicit */int) arr_3 [i_2])) * (((/* implicit */int) var_5))))));
                    var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_2 - 1] [i_1 + 1])), (min((-730959478), (730959478)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))) : (((/* implicit */int) arr_2 [i_0]))));
                }
            } 
        } 
    } 
}
