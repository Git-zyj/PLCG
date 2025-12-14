/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234653
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) << (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_19)), ((unsigned short)0)))) && (((/* implicit */_Bool) var_2)))))));
                    var_21 = ((/* implicit */short) max((((max((((/* implicit */long long int) (short)-23789)), (-6117578926066727140LL))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)65531)), (var_12)))))), (((/* implicit */long long int) var_12))));
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) || (((/* implicit */_Bool) var_11))))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (+(966420005))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) ((unsigned int) ((unsigned char) (unsigned short)11557)));
}
