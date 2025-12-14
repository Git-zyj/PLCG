/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33864
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
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (short)-4943))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) (-(6019644513032020063LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) max((((/* implicit */long long int) ((int) arr_5 [i_0 + 2] [(_Bool)1] [i_0 + 2]))), (min((((((/* implicit */_Bool) arr_7 [(unsigned char)4] [(unsigned short)17] [(unsigned char)4] [i_2] [i_3])) ? (((/* implicit */long long int) 268226389U)) : (var_11))), (((((var_7) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))))));
                        var_20 = ((/* implicit */unsigned char) arr_5 [i_0] [(short)13] [i_2]);
                    }
                    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) 
                    {
                        var_21 = 4673257774912368400LL;
                        arr_12 [i_2] [7LL] = var_1;
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) var_0))));
                }
            } 
        } 
    } 
}
