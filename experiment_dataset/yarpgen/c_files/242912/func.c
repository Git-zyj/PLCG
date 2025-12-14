/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242912
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [i_0 + 2]);
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((short) var_0)))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) (~(min(((-(((/* implicit */int) (unsigned short)37510)))), (((/* implicit */int) arr_7 [(_Bool)1] [i_0 + 1] [i_0]))))));
    }
    var_14 = ((/* implicit */signed char) (+((~((~(((/* implicit */int) var_12))))))));
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) var_10));
}
