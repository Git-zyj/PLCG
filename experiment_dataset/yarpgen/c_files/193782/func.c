/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193782
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
    var_18 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)3436)), (281200098803712ULL)));
    var_19 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-116)))), (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) (signed char)-116);
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_2 [9ULL] [i_2])), (max((arr_0 [i_1] [i_2]), (((/* implicit */int) arr_2 [i_0] [i_1])))))) + (arr_5 [i_0] [i_0])));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max(((signed char)-125), ((signed char)93)));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) 549755813887LL)) : (18050807694406063281ULL)));
}
