/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43307
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
    var_15 = ((/* implicit */short) ((max((((/* implicit */unsigned int) var_11)), (max((3380624251U), (((/* implicit */unsigned int) (unsigned char)154)))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (var_1)))))));
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = var_2;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [(short)7] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned char)36)))) && (((_Bool) var_7))));
        arr_4 [2U] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) var_7)) <= (arr_2 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            arr_7 [i_0] = ((unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)43))));
            arr_8 [i_0 + 1] [i_0] = ((unsigned char) ((_Bool) 12151711680746082202ULL));
            var_18 *= ((/* implicit */short) ((unsigned long long int) (unsigned char)3));
        }
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) (unsigned char)95))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37576))) != (var_13)))) * (((/* implicit */int) max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)34));
        arr_12 [i_2] [i_2] = ((unsigned char) ((((/* implicit */int) var_12)) << (((((((/* implicit */int) arr_10 [i_2])) + (18325))) - (19)))));
    }
}
