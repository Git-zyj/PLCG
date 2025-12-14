/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27831
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */long long int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) (~(max((arr_0 [i_0]), (((/* implicit */int) var_8))))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1] [i_2]))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_7))));
            var_19 = var_5;
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_8 [i_1] [i_2])), (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_1] [i_1]))))) / (max((((/* implicit */unsigned int) (_Bool)1)), (1215860152U))))))))));
        }
        var_21 = ((/* implicit */long long int) var_12);
    }
    var_22 ^= var_2;
    var_23 = ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) 13405627211736955466ULL)) ? (3079107143U) : (var_10)))))));
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), ((~(var_13)))))), (max((((/* implicit */unsigned long long int) var_2)), (var_5)))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? (var_2) : (min((var_9), (var_13)))))) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_9))))) ? (var_3) : (((/* implicit */unsigned long long int) 1322516425U)))) : (((/* implicit */unsigned long long int) var_2))));
}
