/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48135
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_3))) & (((/* implicit */int) (unsigned short)41532))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [10] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 262143))) - (((int) var_3))));
                    var_14 = ((/* implicit */_Bool) (unsigned char)244);
                    var_15 = ((((/* implicit */int) ((unsigned char) var_3))) << (((((((/* implicit */_Bool) 10758124624212147650ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (7869900321517287863LL))) - (29LL))));
                }
            } 
        } 
    } 
}
