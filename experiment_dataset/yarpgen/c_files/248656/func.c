/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248656
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_16 = (+(arr_5 [i_0] [17] [i_1]));
                var_17 = ((/* implicit */_Bool) arr_3 [i_0]);
                var_18 = ((/* implicit */long long int) arr_2 [i_0 - 1] [i_1]);
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_0 - 1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) arr_4 [i_0] [i_1])) : (arr_5 [i_0 - 1] [i_0] [17])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((((arr_2 [i_0] [i_1]) + (915655573))) - (7)))))) ? ((((_Bool)1) ? (((/* implicit */long long int) -1035675356)) : (arr_5 [i_0] [i_1] [3LL]))) : (arr_3 [7LL]))) : (((/* implicit */long long int) 1319574947U))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_0 - 2] [i_0 - 1])))) ? (((long long int) 1035675349)) : (((long long int) arr_2 [i_0 + 2] [i_0 + 2]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_5);
}
