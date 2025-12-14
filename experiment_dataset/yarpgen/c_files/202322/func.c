/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202322
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
    var_19 = ((/* implicit */unsigned int) (~(var_0)));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_11))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) 511U);
                    var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_1 [9U] [i_1]))) < (((/* implicit */int) arr_4 [i_0] [(signed char)5] [i_2]))))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (16220470286874865441ULL))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)8] [6ULL]))) * (4260277403U))))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                    var_23 = ((/* implicit */long long int) 4294967295U);
                }
            } 
        } 
        arr_7 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) arr_3 [2ULL] [i_0] [i_0]);
    }
}
