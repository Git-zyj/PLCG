/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208439
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
    for (short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (signed char)-60)) ? (max((((/* implicit */unsigned long long int) (signed char)127)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0]))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)60)), ((unsigned short)15872)));
                arr_8 [i_0] = var_5;
                var_18 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) var_10)), (0ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-124)))) == (((/* implicit */int) max((var_15), (((/* implicit */short) (signed char)-61))))))))));
}
