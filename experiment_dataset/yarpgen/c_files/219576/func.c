/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219576
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
    var_18 = var_12;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_15) % (var_1)))) || (((/* implicit */_Bool) var_16))))) > (((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) | (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) ((long long int) ((var_8) - (var_4))))))));
                arr_10 [i_1] = ((/* implicit */unsigned char) var_15);
                var_22 = ((/* implicit */int) var_13);
            }
            arr_11 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) | (((long long int) var_9))));
            var_23 = ((/* implicit */unsigned short) ((min((var_11), (((/* implicit */long long int) var_9)))) ^ (((var_5) & (((/* implicit */long long int) var_9))))));
        }
        var_24 = ((/* implicit */unsigned int) (short)-32767);
        var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) / (1990683005U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) | (var_4)))));
    }
}
