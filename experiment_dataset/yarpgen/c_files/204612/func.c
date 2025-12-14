/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204612
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
    var_17 = (~(((((/* implicit */int) (!(((/* implicit */_Bool) -2209464686364809555LL))))) & (((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) arr_4 [1])) ? (((/* implicit */int) arr_4 [i_0])) : (-1)))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-3750990200070840068LL) : (2970978032932059256LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [(unsigned char)1] [i_0]), (arr_2 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16813866145299592285ULL)))))) : ((+(3750990200070840076LL))))))));
            }
        } 
    } 
}
