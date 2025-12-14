/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198108
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [9U] = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned short) (short)-20774)), ((unsigned short)57858))));
                    var_13 += ((/* implicit */_Bool) var_7);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) (unsigned char)0))));
}
