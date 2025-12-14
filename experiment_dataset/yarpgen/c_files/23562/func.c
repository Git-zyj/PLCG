/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23562
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) var_9);
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned char)225)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))) : (((/* implicit */int) max((var_7), (arr_1 [i_0]))))));
                var_20 = ((/* implicit */short) ((int) ((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_4 [i_0]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))))));
                var_21 = ((/* implicit */short) (+(10325365148496133373ULL)));
            }
        } 
    } 
    var_22 -= var_13;
}
