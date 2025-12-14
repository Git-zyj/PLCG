/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212131
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
    var_13 -= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [3] [3])), (var_7)))) < (max((((/* implicit */long long int) arr_7 [i_1] [i_1])), (arr_4 [i_0]))));
                arr_8 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-102)), (arr_2 [i_0] [i_1 + 1])))) && (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) arr_5 [i_1] [i_1] [(short)10])), (var_8))))));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-104)), (arr_6 [i_1 + 1] [i_1] [i_0]))))));
            }
        } 
    } 
}
