/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45751
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
    var_10 = ((/* implicit */unsigned short) var_3);
    var_11 -= min((max((max((((/* implicit */unsigned int) var_2)), (var_7))), (0U))), (((/* implicit */unsigned int) (signed char)22)));
    var_12 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) && (((/* implicit */_Bool) 4294967295U)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) / ((-(((/* implicit */int) (signed char)-122))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (+(var_9)));
        arr_6 [i_0] |= ((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0]));
    }
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((signed char) var_5))))))));
}
