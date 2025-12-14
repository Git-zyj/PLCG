/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242677
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) < (((((/* implicit */int) var_14)) + (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_18))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21710)))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((min((-2440201554761876663LL), (((/* implicit */long long int) arr_2 [i_1])))) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (64)))))) ? ((+(((/* implicit */int) max(((unsigned short)34594), (arr_2 [i_1])))))) : (min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((-5427212666542476166LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((int) var_15));
}
