/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232173
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((9408761) >= (((((((/* implicit */_Bool) arr_5 [i_2])) ? (1428999615) : (((/* implicit */int) (unsigned char)246)))) * (((((/* implicit */int) arr_2 [10] [i_1] [i_2])) >> (((/* implicit */int) (_Bool)1))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2 - 3] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1] [i_2]))), ((~(((/* implicit */int) var_3)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((var_0) + (2147483647))) >> (((/* implicit */int) var_9))))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)167))));
}
