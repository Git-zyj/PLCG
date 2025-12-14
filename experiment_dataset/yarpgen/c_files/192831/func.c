/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192831
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
    var_14 = var_3;
    var_15 = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (13925674721641915099ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124))))) ? (4521069352067636517ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (9223372036854775807LL)))))) < (((/* implicit */unsigned long long int) (((_Bool)1) ? (3274896053646675564LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))));
                var_17 = ((/* implicit */unsigned short) (~(-283752025158109588LL)));
                var_18 = ((/* implicit */signed char) ((_Bool) max(((~(((/* implicit */int) (signed char)-124)))), ((+(-1597542653))))));
            }
        } 
    } 
}
