/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198314
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (~(arr_0 [i_0])));
        var_11 = arr_1 [i_0] [i_0];
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max(((unsigned char)164), (((/* implicit */unsigned char) ((arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1]) || (arr_8 [i_3 - 2] [i_3 + 1] [i_3 + 1]))))));
                    var_13 *= ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) + (var_4)))));
                    var_14 = ((/* implicit */short) var_2);
                }
            } 
        } 
    } 
}
