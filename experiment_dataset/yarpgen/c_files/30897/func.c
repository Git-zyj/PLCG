/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30897
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((14102862757674117564ULL) / (((/* implicit */unsigned long long int) -964845810583795021LL)))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_10), (arr_3 [i_0 - 1] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-2105)), (arr_2 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)209)) << (((((((-3332149028485707066LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-2096))))) + (((((/* implicit */long long int) var_6)) | (var_7))))) - (3837092547908481178LL)))));
}
