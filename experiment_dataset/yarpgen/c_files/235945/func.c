/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235945
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
    var_10 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 23U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_6)))) ? (23U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))) : (var_5)));
    var_11 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((4294967268U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) - (17839334886633217829ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65420)))))));
                    arr_7 [i_0 + 4] [i_0 + 4] [i_2] = ((/* implicit */unsigned short) -1);
                    var_13 -= ((/* implicit */_Bool) ((607409187076333787ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_3 [i_0 - 1]))))) ? (((((/* implicit */int) (signed char)83)) * (((/* implicit */int) (unsigned short)103)))) : (arr_5 [i_2] [i_2] [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
