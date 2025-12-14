/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19561
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
    var_14 = ((/* implicit */long long int) ((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_13))))) != (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)73)), (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                var_15 += ((/* implicit */unsigned char) var_1);
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)-113)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_2] [i_2]))));
        arr_11 [i_2] = ((/* implicit */long long int) var_7);
    }
    var_18 = ((/* implicit */unsigned int) var_9);
}
