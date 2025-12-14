/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227674
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
    var_10 = min((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 320338009)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-25)))) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_2)));
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (_Bool)0))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-4448676957640577305LL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((unsigned char) var_3));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) (signed char)-64)) ? (arr_2 [i_0]) : (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (!(var_6)))) > (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
