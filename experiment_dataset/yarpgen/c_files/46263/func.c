/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46263
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
                    var_20 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -1LL)), (2251799813652480ULL)));
                    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_0 + 2] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1])))))));
                }
            } 
        } 
    } 
    var_22 |= max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_16)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1639567172)) ? (((/* implicit */int) (short)14832)) : (((/* implicit */int) (short)14832))))), (min((2251799813652480ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
}
