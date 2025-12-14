/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244269
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
    var_17 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [(unsigned short)9] [i_1] [(unsigned short)9] [i_2] = min((((/* implicit */int) ((short) arr_2 [i_0] [i_1]))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [5LL])) | (arr_5 [i_0] [i_1] [i_0])))) ? (((var_12) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_0)))) : (arr_5 [i_0] [i_0] [i_2]))));
                    arr_7 [i_0] [(_Bool)1] [i_2] = -448521604;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_16);
}
