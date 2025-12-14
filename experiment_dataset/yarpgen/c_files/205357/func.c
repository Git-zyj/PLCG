/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205357
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
    var_20 = min(((~(((long long int) var_0)))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) > (372333502457790932LL))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-70))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) (+(arr_6 [i_0] [i_1] [i_2])));
                    var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) : (372333502457790935LL)))));
                }
                var_23 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_13);
}
