/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54162
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
    var_13 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (var_4))))))) ? (var_9) : (arr_3 [i_1 - 3]));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (var_4))))) ? (((arr_1 [i_1 - 2]) ? (((/* implicit */int) arr_1 [i_1 - 4])) : (((/* implicit */int) arr_1 [i_1 - 3])))) : (((((/* implicit */int) arr_1 [i_0])) + (arr_2 [i_0 - 1])))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_5)))) ? (((/* implicit */int) arr_0 [i_1])) : ((-(((/* implicit */int) arr_0 [i_1]))))))))))));
                arr_5 [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((unsigned short) (+(var_4))));
            }
        } 
    } 
}
