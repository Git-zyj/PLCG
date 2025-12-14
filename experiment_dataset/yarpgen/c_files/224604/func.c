/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224604
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_20 += (unsigned short)65535;
    }
    var_21 -= var_14;
    var_22 *= ((/* implicit */unsigned long long int) ((unsigned short) max((((((/* implicit */_Bool) var_16)) ? (var_14) : (var_5))), (((/* implicit */unsigned long long int) ((8151522039318751673ULL) <= (var_13)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (int i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                {
                    var_23 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64))) % (max((((/* implicit */unsigned long long int) var_15)), (arr_5 [i_3 + 1]))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (signed char)-102))));
                }
            } 
        } 
    } 
}
