/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35749
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))) : (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3740127775820082046LL))), (((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_8))))))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) arr_3 [i_0] [i_1])))), (((int) ((var_5) % (var_4)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [(unsigned short)1]) : (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) min((var_1), (((long long int) (unsigned short)896))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) -1LL)))))) % (var_5))));
}
