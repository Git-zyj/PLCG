/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208771
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (4160749568U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) (unsigned short)19)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (arr_4 [i_2 + 2]) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) - (var_12)))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) (short)-7887))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) (+(max((var_0), (((/* implicit */int) (unsigned short)65503)))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) > (min((var_12), (((/* implicit */long long int) var_1))))))))));
    var_17 = ((/* implicit */short) ((int) var_11));
}
