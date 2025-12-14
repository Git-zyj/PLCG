/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49435
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((unsigned int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 6; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) % (((/* implicit */int) var_0)))) % (((/* implicit */int) (((-(((/* implicit */int) (short)-25102)))) < (((((/* implicit */_Bool) (short)-25102)) ? (var_8) : (((/* implicit */int) var_2)))))))));
                    arr_8 [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))) / (max((((/* implicit */unsigned int) var_10)), (var_9))))))));
                }
            } 
        } 
        var_13 = ((/* implicit */short) arr_4 [i_0] [i_0]);
    }
    var_14 ^= ((/* implicit */unsigned long long int) (((-((+(((/* implicit */int) var_10)))))) < (((/* implicit */int) ((min((var_1), (var_1))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 255U)) ? (var_4) : (1239905432U)))))))));
    var_15 = ((/* implicit */unsigned short) var_7);
}
