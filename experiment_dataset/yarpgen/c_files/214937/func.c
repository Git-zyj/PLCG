/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214937
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
    var_10 = ((/* implicit */long long int) ((((((var_8) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) var_2)))) + (150))) - (7))))) < (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [(unsigned char)5] [i_1] [i_2 - 1])), (max(((unsigned char)0), (((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2])))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(var_7)))))) ? (((/* implicit */int) var_1)) : (((arr_6 [2ULL] [i_1 - 2] [i_2 + 1]) ? (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_12 = var_5;
}
