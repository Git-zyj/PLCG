/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19508
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [13ULL] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (short)0))))), (((((/* implicit */int) (short)-31983)) / (arr_1 [i_1])))));
                arr_6 [i_1] = ((/* implicit */_Bool) (+(var_17)));
                arr_7 [i_1] = ((((6397514590363072395LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) == (((long long int) (short)-24470)));
                var_18 = ((/* implicit */long long int) max((var_18), (arr_2 [i_0])));
                var_19 = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) max(((short)24476), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (8267442654946293322LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127)))))))));
}
