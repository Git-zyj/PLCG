/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45415
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
    var_11 = ((/* implicit */signed char) max((((var_7) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((((/* implicit */_Bool) (+(1739597592U)))) ? (((((/* implicit */_Bool) -1593449932)) ? (2867754408U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1427212888U)))))))));
                var_12 = ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12)) ? (9145137619655742722LL) : (((/* implicit */long long int) var_7))))) ? (var_5) : (((((/* implicit */int) var_1)) - (-2145755361)))))) ? (((/* implicit */long long int) (-(((var_7) - (2521138648U)))))) : (-9145137619655742723LL)));
}
