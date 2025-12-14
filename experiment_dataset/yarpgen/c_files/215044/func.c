/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215044
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18446744073709551615ULL)))));
                var_11 = ((((((/* implicit */_Bool) arr_1 [(signed char)7] [i_1 - 1])) ? ((~(9480370155729374007ULL))) : (8966373917980177608ULL))) >> ((((+(arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) - (838428090))));
                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) 1299768959000350454LL))))), (max(((unsigned short)27016), (((/* implicit */unsigned short) (short)17013))))));
            }
        } 
    } 
    var_13 = (~(((/* implicit */int) var_5)));
}
