/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219338
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) arr_2 [(short)12] [i_0]))));
                var_12 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32705)) || (((/* implicit */_Bool) 8406340654360398253ULL)))))));
                var_13 = ((/* implicit */unsigned long long int) (unsigned short)32714);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)36962))))), (min((((((/* implicit */_Bool) (signed char)12)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))))), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1709497595U)) ? (((/* implicit */unsigned int) (+(var_9)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1024))) : (((((/* implicit */_Bool) var_10)) ? (2005176737U) : (var_1)))))));
}
