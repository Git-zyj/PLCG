/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202500
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    var_13 = ((/* implicit */unsigned short) ((short) var_2));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]))) > (var_1)))) == (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) (~(var_6))))));
                    var_15 = ((/* implicit */unsigned short) var_0);
                    var_16 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) ((unsigned short) var_0))), (var_1))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_6) / (((int) var_10)))))));
    var_18 -= ((/* implicit */unsigned short) max(((+(max((((/* implicit */unsigned int) var_0)), (var_2))))), (((/* implicit */unsigned int) var_4))));
}
