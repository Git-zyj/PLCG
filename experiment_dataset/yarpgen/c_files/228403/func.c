/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228403
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
    var_11 = ((/* implicit */unsigned char) ((var_5) >> (((((var_1) << (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_5))))) - (2644214321522933736ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_9 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) ((int) (~(var_1))));
                        arr_10 [i_0] [i_1] [i_3] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)146))))))), (min((43092288U), (arr_4 [i_0])))));
                        arr_11 [i_3] [0U] [i_1] [i_3] = ((/* implicit */unsigned int) (unsigned short)65535);
                        arr_12 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */int) ((unsigned short) var_7))))))));
                    }
                    var_12 = ((/* implicit */unsigned char) 9518116158059606907ULL);
                }
            } 
        } 
    } 
}
