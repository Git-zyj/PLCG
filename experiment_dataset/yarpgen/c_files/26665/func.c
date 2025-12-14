/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26665
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) 2472641647017321628LL);
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)220))));
                var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) / (((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)-85)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((short) var_5));
    var_17 = ((/* implicit */signed char) var_0);
}
