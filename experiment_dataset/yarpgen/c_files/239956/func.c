/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239956
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
    var_20 = ((/* implicit */long long int) min((var_20), (((((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) var_18)) : ((~((-9223372036854775807LL - 1LL)))))) ^ (((/* implicit */long long int) ((((/* implicit */int) max(((short)-27944), (((/* implicit */short) (unsigned char)109))))) & (((((/* implicit */_Bool) (short)-1172)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))))))))));
    var_21 = var_18;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max((max((13074707834853009530ULL), (arr_4 [i_0]))), (((/* implicit */unsigned long long int) min((36758745), (((/* implicit */int) (unsigned char)255))))))))));
            arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 2] = ((/* implicit */unsigned char) (short)27935);
        }
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((arr_7 [8] [i_0 + 1]) | (arr_7 [24ULL] [i_0 + 1]))) & (((/* implicit */unsigned long long int) min((1775606094U), (((/* implicit */unsigned int) (unsigned char)59))))))))));
            var_25 -= (-(((((/* implicit */int) (unsigned char)37)) << (0ULL))));
        }
        arr_8 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_0 [i_0 + 1])) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (1073739776U)))))), (((long long int) arr_0 [i_0 + 1]))));
    }
    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) arr_9 [i_3]);
        var_27 = arr_6 [21U] [21U] [i_3];
        var_28 = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)22]);
    }
    for (unsigned int i_4 = 1; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_13 [i_4] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) ((unsigned int) arr_11 [(short)16] [i_4]))), (var_17)))));
        var_29 = ((/* implicit */int) var_4);
    }
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 23; i_5 += 4) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) arr_9 [i_5]);
        arr_18 [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)1171)) ? (4039804695679176885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27944))))), (min((arr_2 [i_5 - 3] [i_5]), (((/* implicit */unsigned long long int) var_0))))));
        var_30 = ((/* implicit */unsigned char) arr_16 [i_5 - 1]);
    }
}
