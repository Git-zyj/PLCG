/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239694
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
    var_12 = 268431360ULL;
    var_13 |= ((/* implicit */unsigned char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((_Bool) arr_12 [i_0] [i_0] [i_0] [8ULL])))));
                        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))) : (8388607ULL)));
                    }
                } 
            } 
        } 
        var_16 = ((unsigned char) ((unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0]));
    }
}
