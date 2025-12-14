/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194212
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
    var_19 += ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14737344205071885607ULL)) ? (14737344205071885607ULL) : (((/* implicit */unsigned long long int) var_17))))) ? (min((((/* implicit */long long int) (unsigned char)13)), (754038861918020325LL))) : (754038861918020324LL))) * (((/* implicit */long long int) ((/* implicit */int) var_15))));
    var_20 = ((/* implicit */signed char) max((((((((/* implicit */int) (short)-29786)) <= (((/* implicit */int) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((3709399868637666023ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18921))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_5))))), (((/* implicit */long long int) ((((/* implicit */int) ((var_4) < (2147483647)))) <= (min((var_12), (((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 14737344205071885599ULL))))), ((+(((/* implicit */int) (_Bool)1))))));
                    arr_12 [i_0] = ((/* implicit */_Bool) 3709399868637666008ULL);
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */int) (unsigned short)7);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_15))));
}
