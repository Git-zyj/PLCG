/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243621
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
    var_16 = 98493433;
    var_17 = ((/* implicit */short) 1493169476);
    var_18 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_2))))));
    var_19 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(max((-1892418828), (((/* implicit */int) arr_1 [i_0 - 2]))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121))));
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!((_Bool)1)))), ((signed char)-104)));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((short) arr_3 [i_1] [(signed char)9])), (((/* implicit */short) var_14))))) ? (((((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_0)) : (98493433))) - ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_0 [i_1]))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)146)))))), ((-(1493169477)))));
    }
}
