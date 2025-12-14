/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19459
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((unsigned long long int) var_5)) / (((/* implicit */unsigned long long int) 1859076993134953883LL)))))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) min((var_2), (((/* implicit */unsigned int) var_1)))))), (18446744073709551615ULL))))));
    var_21 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [i_1] [i_3] [i_2] [i_1] [i_0 + 1]))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_0 [i_0]))), (min((var_17), (((/* implicit */unsigned long long int) (unsigned short)9465))))))) ? (((/* implicit */unsigned int) arr_6 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3])) : (((unsigned int) var_17))));
                        var_24 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32753)) || (((/* implicit */_Bool) arr_1 [i_0 - 1]))))) != (((/* implicit */int) arr_7 [5U] [6ULL] [6ULL] [(unsigned short)10] [(unsigned short)1]))));
                    }
                    var_25 = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_2 [i_0 - 2]))));
                    var_26 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_2]);
                    arr_9 [i_0] [i_1] [i_1] = var_10;
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_3))));
}
