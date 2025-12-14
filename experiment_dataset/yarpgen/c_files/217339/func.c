/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217339
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(8975761994708161483ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (47806487512371246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_2))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32113)))));
                arr_6 [i_0] = ((/* implicit */long long int) 3924103082U);
                var_20 = ((/* implicit */unsigned int) arr_2 [(unsigned char)8] [i_1]);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_2 [7LL] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 + 2]))))) ? ((+(2047ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (8727373545472ULL)))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_8);
    var_23 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)12817)), (3924103082U)))), ((+(18446735346336006143ULL)))))));
}
