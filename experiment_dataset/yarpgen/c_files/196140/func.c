/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196140
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_1 + 2] [i_0] = ((/* implicit */unsigned int) min((min((min((68719460352ULL), (0ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_7))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) ((68719460348ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                    arr_9 [i_0] [i_0] [i_2] = (((+(arr_3 [i_1 + 2] [i_1 + 2]))) ^ (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) % (18446744004990091253ULL)))) ? (18446744004990091264ULL) : (max((68719460392ULL), (arr_3 [i_1 + 1] [i_0]))))));
                }
                arr_10 [i_1 + 2] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_2), (((/* implicit */unsigned long long int) (+(-7548941924460203759LL)))))) : (((arr_1 [(_Bool)1] [i_1]) ? (((/* implicit */unsigned long long int) var_1)) : (min((arr_3 [i_1 + 2] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                arr_11 [9LL] = min((68719460343ULL), (18446744004990091264ULL));
            }
        } 
    } 
}
