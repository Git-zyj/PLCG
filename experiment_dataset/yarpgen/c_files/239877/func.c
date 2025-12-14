/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239877
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) ((signed char) arr_0 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)22361)), (((unsigned int) (unsigned char)103))));
                        var_19 = ((/* implicit */unsigned char) ((unsigned short) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]), (arr_11 [(short)0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0]))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) ((short) (unsigned short)43175));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)43175)) - (43175)))));
    var_21 = ((/* implicit */signed char) var_3);
    var_22 = ((/* implicit */signed char) var_13);
}
