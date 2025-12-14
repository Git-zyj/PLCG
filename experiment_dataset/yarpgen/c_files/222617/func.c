/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222617
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
    var_20 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((-(var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [1] [i_1 + 1] [i_0]))))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                    var_22 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_16))), (((/* implicit */unsigned long long int) -953869594)))))));
                }
            } 
        } 
    } 
}
