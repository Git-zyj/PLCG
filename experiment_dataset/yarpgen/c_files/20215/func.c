/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20215
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
    var_14 = ((/* implicit */short) max((((((int) var_3)) - (((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)212)))))), (min((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_13))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)18))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (2815845614659113131ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 &= ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_13)))));
                    arr_7 [18U] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_9)), (var_1))))));
                    var_17 = ((/* implicit */signed char) (+(min((var_6), (((/* implicit */long long int) (unsigned char)44))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 *= ((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_8))));
}
