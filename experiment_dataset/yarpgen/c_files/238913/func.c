/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238913
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) min((min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)1)))))));
                var_18 ^= ((/* implicit */unsigned short) (_Bool)1);
                arr_7 [i_0] [(unsigned char)10] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 751044670U)) ? (-5657660025461841409LL) : (5657660025461841409LL))) : (((long long int) 1254118190U))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)60512)), (min((min((3128724814U), (((/* implicit */unsigned int) (_Bool)1)))), ((+(939262709U)))))));
    var_20 = ((/* implicit */signed char) (~(min(((((_Bool)1) ? (6366663465461016621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min(((_Bool)0), ((_Bool)1))))))));
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)14)));
}
