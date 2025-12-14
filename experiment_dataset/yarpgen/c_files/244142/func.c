/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244142
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) -738714669);
                        var_13 ^= ((/* implicit */int) var_9);
                        var_14 ^= ((/* implicit */short) var_8);
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_2 - 2] [i_3] = ((/* implicit */long long int) ((_Bool) 1499204227));
                        var_15 = ((short) ((short) min((((/* implicit */short) var_2)), (arr_7 [i_3] [(_Bool)1] [i_1]))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 + 4] [i_0 + 3])) : (arr_2 [i_0 - 1] [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */signed char) ((int) (-(((/* implicit */int) max((var_0), (var_0)))))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+((+(738714680))))))));
}
