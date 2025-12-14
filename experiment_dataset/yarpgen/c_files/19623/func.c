/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19623
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
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (short)-25728))));
                    var_13 *= ((/* implicit */unsigned short) arr_1 [i_0]);
                }
            } 
        } 
        arr_6 [(_Bool)1] &= ((/* implicit */signed char) ((short) max((((8563184983678796058LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [6LL] [i_0]))))), (arr_4 [(unsigned short)0] [(short)5] [i_0] [i_0]))));
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_3))));
    var_15 ^= ((/* implicit */signed char) var_2);
}
