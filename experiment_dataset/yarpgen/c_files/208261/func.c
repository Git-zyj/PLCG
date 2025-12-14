/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208261
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
    var_14 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_1 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_0 [(_Bool)1]), (min((arr_0 [i_0]), (((/* implicit */short) var_4)))))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [(_Bool)1] [i_0]);
                    var_15 += ((/* implicit */_Bool) arr_3 [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) * ((+((+(((/* implicit */int) (_Bool)0))))))));
}
