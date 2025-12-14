/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40856
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
    var_18 = var_8;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = min((((/* implicit */signed char) (!(((/* implicit */_Bool) 546225747U))))), ((signed char)12));
                var_19 = ((/* implicit */unsigned char) (-((-(((var_8) ? (16652468619677487585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-(12ULL)));
}
