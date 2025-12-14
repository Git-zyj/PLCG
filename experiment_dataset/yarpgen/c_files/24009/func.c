/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24009
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
    var_13 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_4 [i_2]))) + ((~(((/* implicit */int) arr_0 [i_1] [i_2])))))))));
                    var_15 = ((/* implicit */int) arr_3 [i_0] [i_1] [(_Bool)1]);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_2]);
                }
            } 
        } 
    } 
}
