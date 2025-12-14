/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241022
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
    var_11 = ((/* implicit */unsigned long long int) ((_Bool) min((((unsigned short) (short)16930)), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)58433))))))));
    var_12 *= (~(min((var_8), (((/* implicit */unsigned long long int) var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (-((~(((((/* implicit */int) (unsigned short)7102)) ^ (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_14 = ((/* implicit */_Bool) var_7);
                    arr_9 [i_0 - 1] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 1])))))));
                    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) var_5))))));
                    arr_14 [i_0] [i_1 + 1] [i_3] [i_0 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0 - 1] [i_0])), ((unsigned short)58433))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_2);
}
