/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194003
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
    var_11 = ((/* implicit */long long int) ((var_6) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min(((-((+(var_10))))), (min((((/* implicit */long long int) (unsigned char)11)), (((((/* implicit */_Bool) -6678479842795383796LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((int) (signed char)92))) ^ (var_10))) + (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)18] [i_1] [(unsigned char)18] = max((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) (unsigned char)230))))), ((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (-8959876471480450576LL))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)11);
                var_15 = ((/* implicit */int) (signed char)51);
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((var_9) && (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
}
