/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25209
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
    var_18 = (+(2338101050483420741LL));
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (max((3606917054U), (((/* implicit */unsigned int) (unsigned char)3))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-2894))));
                var_20 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)3)) & (1955410897)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (9144807485032360193LL))));
            }
        } 
    } 
    var_21 -= ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-53))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) > (-2338101050483420727LL))))) : (var_2));
}
