/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237365
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) 16777200);
    }
    var_12 = ((/* implicit */signed char) ((unsigned long long int) (-(var_1))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) max(((signed char)-2), (((/* implicit */signed char) (_Bool)1)))))) / (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_10))));
}
