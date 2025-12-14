/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238775
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
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) (_Bool)1);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)127)) ? (-1680330277) : (((/* implicit */int) (short)-20840))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((((/* implicit */_Bool) 11155750176923847832ULL)) ? (((/* implicit */unsigned long long int) 3250494766U)) : (7290993896785703784ULL)))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) arr_1 [i_1]));
            }
        } 
    } 
}
