/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240186
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
    var_17 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)33915)))) >= (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (var_7))))) : (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (682440168)));
                    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_2 + 2] [16])) >= (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [(_Bool)1]))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((8230640668438717943LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_6 [i_0] [i_0])))))))))));
        arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (((var_0) << (((((((/* implicit */int) var_15)) + (142))) - (25)))))));
    }
}
