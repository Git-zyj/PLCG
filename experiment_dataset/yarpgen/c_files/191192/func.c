/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191192
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((62193652) != (((/* implicit */int) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57516))) : (max((18446744073709551615ULL), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) (+(-493161615))))));
    var_21 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 493161621)) ? (((/* implicit */int) ((_Bool) -493161615))) : (((var_15) ? (-493161621) : (-34858263)))))));
                var_22 = -493161620;
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */short) var_8))))), (18446744073709551602ULL)));
}
