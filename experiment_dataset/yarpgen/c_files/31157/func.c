/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31157
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (signed char)3)) == (((/* implicit */int) (signed char)7))))), ((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_18 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)47412)), (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) (signed char)-3)) : (arr_5 [i_1] [i_1 + 2] [i_1 + 3])))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) var_17)))))))));
            }
        } 
    } 
    var_20 = (signed char)-9;
    var_21 = ((/* implicit */short) var_13);
}
