/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202785
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
    var_14 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_8)));
    var_15 = ((/* implicit */long long int) 4138564945U);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) <= (((/* implicit */int) ((16777215ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57257))))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_8))));
                var_18 += ((/* implicit */int) ((((/* implicit */_Bool) 16777215ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (18446744073692774398ULL)));
                var_19 = ((/* implicit */int) (((-(var_13))) <= ((+((+(((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_1]))))))));
            }
        } 
    } 
}
