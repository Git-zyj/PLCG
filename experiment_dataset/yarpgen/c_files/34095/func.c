/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34095
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
    var_18 = var_7;
    var_19 = min((var_15), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) arr_3 [16LL] [i_1] [i_1])))) ? (min((0U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (min((((arr_3 [i_0] [i_0] [i_1]) | (arr_1 [i_1]))), (((/* implicit */unsigned int) max((arr_5 [i_0 - 1] [i_1]), (((/* implicit */short) (_Bool)1)))))))));
                arr_7 [i_1] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((long long int) ((-6919627833713427602LL) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_1]))))))));
                var_20 = (unsigned short)8190;
            }
        } 
    } 
}
