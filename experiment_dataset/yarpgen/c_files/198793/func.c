/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198793
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4204173514895278158ULL)) || (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8191)) | (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) 7716693326238210899ULL))))));
                    arr_11 [i_0] [i_0] [i_2] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) <= (1073741823U))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8844))) ^ (12524005123447350815ULL))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (14242570558814273470ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (14242570558814273482ULL)))))) : (15U))))));
                    var_16 = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) var_5)), (14196578666944798238ULL))) + (4204173514895278158ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (524287LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((_Bool) max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57364)) || (((/* implicit */_Bool) 1797145655))))))));
}
