/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224914
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
    var_16 = ((unsigned long long int) ((signed char) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) > (((((/* implicit */int) var_14)) * (((/* implicit */int) var_14)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_4);
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] |= ((/* implicit */signed char) ((arr_3 [i_0] [i_2]) << (((((/* implicit */int) ((signed char) arr_2 [i_0] [i_2]))) - (34)))));
            arr_13 [(short)7] [i_0 + 2] [i_2] = ((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0 - 2]);
        }
        arr_14 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_1 [i_0]))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(arr_4 [i_0]))))))) ? (max((var_3), (((/* implicit */unsigned int) arr_4 [i_0])))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_12)) <= (arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_1)))))))));
        arr_15 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_10))))) & (arr_3 [i_0 - 2] [6LL])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((var_7) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (-(arr_11 [i_0] [(_Bool)1] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))));
        arr_16 [i_0 - 2] = var_2;
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_19 [i_3] = ((/* implicit */signed char) (+(max((((/* implicit */int) arr_17 [i_3])), ((~(((/* implicit */int) var_9))))))));
        arr_20 [i_3] [(_Bool)1] = ((/* implicit */long long int) (+(min((var_3), (((unsigned int) var_5))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_3] [(short)11] [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_3])))) : (((long long int) arr_4 [i_3]))));
        arr_21 [6LL] [i_3] = ((((/* implicit */long long int) arr_2 [i_3] [i_3])) / (max((((/* implicit */long long int) var_14)), (arr_3 [i_3] [i_3]))));
    }
    var_19 = ((/* implicit */_Bool) min((var_8), (((/* implicit */short) var_2))));
}
