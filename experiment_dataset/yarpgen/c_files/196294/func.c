/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196294
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
    var_19 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 -= max((((/* implicit */unsigned int) (unsigned short)25813)), (min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) ((signed char) arr_3 [i_1]))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0])), ((~(var_12)))))) : (((arr_8 [12ULL] [i_1] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39723)))))));
                }
            } 
        } 
    } 
}
