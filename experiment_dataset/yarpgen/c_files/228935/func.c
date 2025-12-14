/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228935
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
    var_17 = ((/* implicit */long long int) var_14);
    var_18 -= ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (!((_Bool)1)));
    }
    for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (2840683595U) : (2840683595U)))) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((int) ((((/* implicit */int) (signed char)-53)) ^ (arr_7 [i_1 + 3] [i_1 + 3]))))));
        var_20 = ((/* implicit */short) (signed char)-74);
        var_21 = ((((/* implicit */_Bool) (+((-(arr_7 [i_1 + 1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (min((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) (_Bool)0)))));
    }
}
