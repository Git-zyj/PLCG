/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217127
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((-(arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)9]))))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)17522)))) * (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                var_14 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) (short)-17529)), (arr_4 [i_0] [i_0])))));
            }
        } 
    } 
}
