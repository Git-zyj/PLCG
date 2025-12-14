/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228609
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) max(((-(var_3))), (max((((/* implicit */int) (unsigned short)20340)), (-434834532)))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 434834536)), (var_11)))) ? (var_11) : (((/* implicit */long long int) (+(434834536))))))));
                    arr_7 [17LL] [i_0] [i_0] = var_9;
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-1))))) ? (((/* implicit */long long int) 434834548)) : (var_4)))) ? ((-(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) 0LL))));
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)0))));
    var_15 = max((min((((/* implicit */long long int) (unsigned short)16338)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5875822018173287797LL))))), (((/* implicit */long long int) min((((/* implicit */signed char) var_6)), ((signed char)-73)))));
}
