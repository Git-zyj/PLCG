/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2394
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
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((16423596419620168928ULL), (((/* implicit */unsigned long long int) var_7))))) && (((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_16)) : ((~(((((/* implicit */int) var_19)) & (((/* implicit */int) (short)7370))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */short) (!(((_Bool) min((8785862496075090982LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                        arr_12 [i_1] [i_1] [i_1] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */int) var_16)) / (((/* implicit */int) min((var_12), (((/* implicit */short) (!(arr_5 [i_2] [i_2] [(short)10])))))))));
                        var_22 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((-(((arr_5 [i_3] [i_1] [(unsigned char)14]) ? (((/* implicit */int) (unsigned char)121)) : (848618606)))))));
                    }
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */signed char) 4447189445929587981ULL);
}
