/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34233
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
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    var_21 = (!(((/* implicit */_Bool) var_11)));
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(signed char)7] [i_0] [i_2] = ((/* implicit */int) (~((~(arr_0 [i_0] [i_1])))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+(min((arr_0 [i_0] [i_1]), (min((arr_7 [i_0] [i_2] [(unsigned short)8] [i_2]), (((/* implicit */long long int) arr_3 [i_0]))))))));
                }
            } 
        } 
    } 
}
