/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49334
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
    var_17 = ((((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) < (((/* implicit */int) var_2)));
    var_18 += ((/* implicit */unsigned char) ((var_5) << ((((-(var_5))) - (14903304914296914232ULL)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) / (((/* implicit */int) (signed char)-112))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] &= (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) var_0))))))));
                    var_20 += ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_16);
}
