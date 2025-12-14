/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242914
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
    var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_7), (var_17))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((var_12), (((/* implicit */unsigned int) var_10))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_17)) >> (((767755966) - (767755948))))) / (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (max((var_15), (((/* implicit */unsigned int) var_11)))))))) : (max((min((3136907955U), (((/* implicit */unsigned int) 767755966)))), (((/* implicit */unsigned int) -767755985))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_17) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) || (((/* implicit */_Bool) (+(var_0)))))))));
                }
            } 
        } 
    } 
    var_21 = var_17;
    var_22 = ((/* implicit */long long int) ((unsigned char) max((var_15), (((/* implicit */unsigned int) min((var_5), (var_5)))))));
}
