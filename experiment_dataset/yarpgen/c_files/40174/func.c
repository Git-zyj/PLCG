/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40174
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
    var_14 = var_1;
    var_15 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) % (((/* implicit */int) (unsigned char)251))))) ? ((-(((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_7 [4] |= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_1])) - (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) (unsigned char)205)))))), (((/* implicit */int) ((unsigned short) arr_6 [i_0 - 1] [i_0 - 1])))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0]))) ? (((/* implicit */int) max((arr_5 [i_0]), (arr_5 [i_0])))) : (max((((/* implicit */int) arr_2 [i_0 - 1])), (var_0)))));
                arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 1]);
            }
        } 
    } 
}
