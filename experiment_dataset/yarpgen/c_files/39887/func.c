/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39887
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) 1508650767220028732ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (131461361U)));
                var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 4398046511103LL))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_0))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65532))) & (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))))) : (((/* implicit */long long int) var_12))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 805205406394648294LL)) ? (-4475564678367834434LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107)))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((17734739065945740407ULL) % (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!((_Bool)0)))))))));
    var_16 -= ((/* implicit */long long int) (~((((_Bool)1) ? (11676523905861523559ULL) : (((/* implicit */unsigned long long int) 3446514039U))))));
}
