/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43841
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
    var_20 = ((long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_0 [i_1]) : (arr_3 [i_0])))) ? (((arr_1 [i_0] [i_0]) + (var_9))) : (((long long int) var_8)))));
                var_22 = (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (min((arr_6 [i_0]), (var_10))) : (((var_19) ^ (arr_4 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_23 = var_15;
                    var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_17)))))))));
                }
            }
        } 
    } 
}
