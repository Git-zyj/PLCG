/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202717
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_18))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((17261970585333839873ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    var_22 = ((/* implicit */unsigned int) (-((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_2]))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
    } 
}
