/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214351
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
    var_13 = min((-3289404281478799535LL), (((/* implicit */long long int) (short)-10824)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((((long long int) arr_4 [i_0 - 1] [i_1 + 2] [i_1 + 1])), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_1 - 1] [i_1 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1 + 1] [i_1 + 1]))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5263))) : (arr_3 [3ULL] [1LL]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0 - 2] [3U]))))))) - (((min((285978576338026496LL), (((/* implicit */long long int) arr_6 [i_0 - 3])))) >> (((long long int) arr_2 [i_0]))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (arr_3 [i_0 - 2] [i_1 + 1]) : (arr_3 [i_0 - 2] [i_1 + 1]))) * (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 1])) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 2])))))));
            }
        } 
    } 
}
