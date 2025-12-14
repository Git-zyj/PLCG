/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220588
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
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */int) (_Bool)1);
                    var_19 = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_0))))) && (((/* implicit */_Bool) (short)1186)))))) / (((unsigned int) var_14))));
    var_21 = (((_Bool)1) ? ((-(((((/* implicit */_Bool) var_11)) ? (-1251509014) : (-544522750))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_10))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1251509014))));
}
