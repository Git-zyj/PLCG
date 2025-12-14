/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22197
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
    var_14 &= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) var_2)))), (5135076132243270844ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 2])))) ? (((arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1]) & (arr_3 [i_0 + 2] [i_0 + 1] [i_0 + 2]))) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 3])));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-23)))) : (((5135076132243270843ULL) ^ (((/* implicit */unsigned long long int) -3093128392218218426LL)))))), (5135076132243270855ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_7);
    var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
}
