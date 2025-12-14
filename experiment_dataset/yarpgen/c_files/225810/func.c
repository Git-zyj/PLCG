/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225810
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) - (1985904407)))) ? (((/* implicit */int) min((var_8), (var_2)))) : (((/* implicit */int) ((signed char) var_8)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) -8638737847095167543LL);
                    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (arr_6 [i_2] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_15 -= ((/* implicit */_Bool) ((((((-1985904382) | (((/* implicit */int) var_8)))) & ((-(((/* implicit */int) var_8)))))) / (((((/* implicit */_Bool) -1985904425)) ? (-1985904425) : (1985904387)))));
}
