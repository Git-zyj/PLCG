/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45851
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
    var_17 = ((int) -2147483646);
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0]))))) : (((/* implicit */int) min((arr_4 [i_1 - 1] [i_0] [i_0]), (((/* implicit */unsigned char) ((_Bool) 5080926320874680838ULL))))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13365817752834870778ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (13365817752834870793ULL)))) ? (((((/* implicit */_Bool) (unsigned short)28)) ? (arr_1 [(unsigned short)18]) : (arr_5 [i_0] [(signed char)19] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1642658851)))) : (arr_3 [i_0]));
            }
        } 
    } 
    var_21 = max((((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (signed char)37)))))), (var_0));
}
