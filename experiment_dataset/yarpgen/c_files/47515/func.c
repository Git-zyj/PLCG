/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47515
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
    var_13 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_2] = ((/* implicit */unsigned short) ((short) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)28936)))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned short)8))) ? (((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (short)16827)))) : ((-(((/* implicit */int) (unsigned short)28943))))));
                    var_14 = ((/* implicit */long long int) (+((~(((/* implicit */int) ((unsigned char) (unsigned short)28940)))))));
                }
            } 
        } 
    } 
}
