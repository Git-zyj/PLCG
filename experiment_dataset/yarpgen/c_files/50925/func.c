/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50925
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
    var_17 = ((/* implicit */signed char) ((unsigned short) (-((-(9619772890233997927ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)139))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))));
                var_18 &= ((/* implicit */signed char) ((long long int) (signed char)105));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned long long int) var_15)))));
                var_20 = (~(((/* implicit */int) var_4)));
            }
        } 
    } 
}
