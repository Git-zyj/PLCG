/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26924
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((min((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (var_10)))));
                    var_15 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [5U] [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_9 [i_3] = ((/* implicit */signed char) (_Bool)1);
        arr_10 [i_3] = ((/* implicit */signed char) arr_1 [i_3]);
    }
    var_16 ^= ((unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
}
