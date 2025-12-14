/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44401
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) (+(var_9)));
                arr_6 [i_1] [i_1] = ((/* implicit */int) var_17);
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54078)) << (((((/* implicit */int) var_17)) - (13320)))));
                arr_8 [i_1] [(short)11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_17)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */short) var_17);
        arr_12 [i_2] [i_2] = ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_17))))) > (4294967295U))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)54078)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_0 [(unsigned short)22])));
    }
    var_19 = var_10;
}
