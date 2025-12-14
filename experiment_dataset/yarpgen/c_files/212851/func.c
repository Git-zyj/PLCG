/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212851
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0 - 3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)30957))));
                arr_7 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (short)-30957))))), (arr_5 [i_0] [i_0])));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) 982730024U);
                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) << (((600882343701600805ULL) - (600882343701600802ULL)))))) == (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 2])) : (max((var_1), (600882343701600817ULL)))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)512)) ? (4207513739U) : (((/* implicit */unsigned int) 2147483647)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_13))))))));
}
