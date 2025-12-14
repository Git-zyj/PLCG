/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39423
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) var_6);
                arr_6 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [(unsigned char)0]))) ? (((/* implicit */long long int) (~(4294967295U)))) : (min((((((arr_2 [i_0 + 2]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (7683))))), (((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_7 [(signed char)2] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1069))))) ? (((((((/* implicit */_Bool) arr_4 [(unsigned char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9410913613483032607ULL))) ^ (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-19612)))), ((!((_Bool)1))))))));
}
