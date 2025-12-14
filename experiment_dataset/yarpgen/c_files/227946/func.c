/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227946
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
    var_12 = var_4;
    var_13 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (((((~(arr_2 [i_0 + 2]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0 + 2])), (-8316625935121522639LL)))) ? (((arr_2 [(unsigned char)23]) % (((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), (arr_0 [i_0 + 2])))))))) : (((((/* implicit */unsigned long long int) 8316625935121522638LL)) % (6752078780732825172ULL)))));
        var_15 = arr_1 [i_0] [i_0];
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
            var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_1]))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0 - 1]))))), (max((4315517110303920848ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
        }
        arr_6 [i_0] [i_0] = max((var_8), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_4 [i_0] [(unsigned short)6] [21]))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (var_7) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))), (min(((~(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [24LL])))), (((/* implicit */int) arr_0 [i_0 + 1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */unsigned char) arr_7 [(short)6] [i_2]);
        var_20 = ((/* implicit */short) max((-7941921799196465385LL), (((/* implicit */long long int) (unsigned short)60682))));
    }
}
