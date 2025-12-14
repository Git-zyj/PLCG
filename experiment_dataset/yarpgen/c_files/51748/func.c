/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51748
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((signed char)63), (((/* implicit */signed char) ((_Bool) (signed char)-63)))))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) -1237222101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (524955561102391643ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_2), ((signed char)-72))))));
                var_14 = ((/* implicit */short) max((max((((-1985885166069265971LL) & (((/* implicit */long long int) arr_4 [i_1] [2] [i_1])))), (((/* implicit */long long int) (+(arr_0 [i_0] [i_0])))))), (((/* implicit */long long int) min((((/* implicit */int) (short)-2656)), (2147483647))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (63U))), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))));
            }
        } 
    } 
}
