/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245484
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) var_13))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3198148381074039217LL)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1])))))));
    }
    var_14 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0)))))), ((+((-(((/* implicit */int) (_Bool)1))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((/* implicit */int) var_0)))))));
    var_16 = ((/* implicit */_Bool) ((unsigned int) var_6));
    var_17 = ((/* implicit */short) var_6);
}
