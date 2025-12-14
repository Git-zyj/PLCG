/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31176
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
    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */int) ((_Bool) -13));
                    arr_9 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) min((max((arr_6 [(unsigned char)1] [i_0 + 1] [(unsigned char)1]), (arr_6 [i_0 - 2] [i_0 + 1] [i_2]))), (arr_6 [i_0] [i_0 + 1] [i_2])));
                }
            } 
        } 
    } 
}
