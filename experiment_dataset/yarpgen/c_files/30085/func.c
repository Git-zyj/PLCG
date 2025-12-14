/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30085
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1] [(unsigned short)6] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) (+(min((((/* implicit */int) arr_5 [i_2] [i_2] [i_1])), (((arr_9 [i_0] [(unsigned short)1] [i_2]) & (((/* implicit */int) arr_2 [i_1]))))))));
                        arr_10 [i_0 - 1] [i_1] [(unsigned short)4] [1] [i_3] [i_3] = max((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2]))))), (((/* implicit */unsigned int) var_7)));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((signed char) var_7));
    var_18 *= ((/* implicit */short) ((max((((/* implicit */long long int) var_6)), (var_12))) <= (min((((long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */long long int) var_7))))));
}
