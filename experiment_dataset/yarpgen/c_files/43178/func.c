/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43178
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
    var_13 = 9744203868742727114ULL;
    var_14 = ((/* implicit */unsigned int) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (16945493526652850063ULL))) ? (((((/* implicit */_Bool) 8702540204966824501ULL)) ? (8702540204966824501ULL) : (((/* implicit */unsigned long long int) 1846602713)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), ((signed char)38))))))), (((/* implicit */unsigned long long int) 4106236629U))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_1] [(short)7] [20ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 8702540204966824501ULL)))) : (((((/* implicit */_Bool) (signed char)-7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))))))), (((/* implicit */long long int) ((((arr_4 [i_0] [i_1]) / (((/* implicit */int) (unsigned char)7)))) + (((/* implicit */int) ((arr_3 [(short)7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))))));
                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((short) (short)-20080))) != (((/* implicit */int) (short)32767)))), (((1425533057) <= (((/* implicit */int) (signed char)-38))))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [0U])))));
                arr_6 [(signed char)1] &= ((/* implicit */_Bool) arr_1 [(short)15] [4]);
            }
        } 
    } 
}
