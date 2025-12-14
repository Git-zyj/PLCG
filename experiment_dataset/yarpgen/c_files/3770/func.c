/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3770
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (unsigned char)28);
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) min(((unsigned char)41), ((unsigned char)250)));
                var_16 = ((/* implicit */_Bool) ((long long int) (signed char)-1));
            }
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (unsigned char)185)), (((((/* implicit */_Bool) (signed char)16)) ? (1161296201) : (((/* implicit */int) (unsigned char)176))))))));
    var_18 ^= ((/* implicit */unsigned char) var_8);
    var_19 = ((((/* implicit */_Bool) (unsigned short)34211)) ? (-1088004823) : (((/* implicit */int) max((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-72)))), (((unsigned short) (signed char)95))))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-57)), (((var_9) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78)))))));
}
