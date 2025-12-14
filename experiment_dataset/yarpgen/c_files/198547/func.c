/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198547
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
    var_16 = ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_17 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_4 [i_0] [i_0 - 1]))) * (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 1])) / (var_6))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) 11358476333854428627ULL);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 6576904914010476554LL)) ? (arr_0 [i_1] [i_2 - 1]) : (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11140519870683580117ULL)) && (((/* implicit */_Bool) (signed char)-116)))))))) > (var_9)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (~(var_5)));
}
