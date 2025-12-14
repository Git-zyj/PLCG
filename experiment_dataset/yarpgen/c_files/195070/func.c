/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195070
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)12854)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_6 [i_0] [(short)9] [i_1] [4])))));
                    arr_9 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
                    var_18 = ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? ((((_Bool)1) ? (((((/* implicit */int) arr_2 [i_2])) - (((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) min((arr_4 [(unsigned short)10]), (arr_1 [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (var_7) : (((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) var_0)), (1766607205U)))))));
    var_20 = ((/* implicit */int) var_6);
}
