/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39546
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) arr_0 [i_0]);
                    var_13 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_2]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2 + 1] [i_0] [i_3 + 1]))));
                        var_15 *= ((/* implicit */unsigned int) arr_5 [(_Bool)1] [i_1] [i_1]);
                        var_16 -= ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(10725711619748231001ULL))), (((/* implicit */unsigned long long int) arr_3 [i_3 + 1] [i_0] [i_0])))))));
                        arr_11 [i_0] [2U] [i_1] [i_3] = ((/* implicit */unsigned char) var_10);
                    }
                    var_17 = max((arr_9 [i_2 + 2] [i_1] [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 + 3]), (((/* implicit */unsigned char) var_11)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_11);
}
