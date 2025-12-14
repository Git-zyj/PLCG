/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25059
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [(short)8] [i_0]))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (131))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_10 = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (967112870)));
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 7; i_3 += 1) 
            {
                {
                    arr_15 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1090082551605832722ULL)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_2])))) & (((/* implicit */int) ((_Bool) (unsigned short)65529)))))) ? (((/* implicit */int) arr_5 [i_1])) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_1]))))));
                    var_11 = ((/* implicit */short) arr_0 [(_Bool)1] [i_2]);
                }
            } 
        } 
    } 
}
