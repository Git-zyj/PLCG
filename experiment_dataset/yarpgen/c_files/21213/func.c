/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21213
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
    var_18 ^= ((/* implicit */_Bool) var_6);
    var_19 = ((/* implicit */unsigned char) ((max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-1581868364) : (((/* implicit */int) var_16))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) -1468097044155141995LL);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [0U] [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))) << (((((((/* implicit */_Bool) (short)-8)) ? (2836717611U) : (((/* implicit */unsigned int) 1581868363)))) - (2836717611U)))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [i_0] [i_0]))), (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18446744073709551615ULL)))))));
                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (unsigned short)18895)))));
                var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-106)), (1029599015)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)46166)) ? (-2015386429) : (((/* implicit */int) (unsigned char)23)))), ((-(((/* implicit */int) var_11))))));
}
