/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51801
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
    var_17 = ((/* implicit */int) (!(var_14)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)1)), (1454851505)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) (((((!(arr_5 [i_0] [i_1] [i_0]))) ? (((/* implicit */int) arr_5 [(unsigned char)3] [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))) >> (((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) + (974017609)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_1]))))) ? (((/* implicit */long long int) arr_2 [i_0] [i_0])) : (min((arr_3 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))))), (arr_0 [7LL])));
            }
        } 
    } 
}
