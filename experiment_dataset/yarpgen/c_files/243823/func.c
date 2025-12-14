/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243823
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
    var_18 ^= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_17))))))), (((_Bool) max((((/* implicit */int) (short)-1024)), (var_0))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */short) arr_2 [i_0]);
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_15);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_8))));
}
