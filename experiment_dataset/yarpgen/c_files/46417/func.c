/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46417
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0])))) ^ (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)255);
    }
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_19 ^= arr_9 [i_1];
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_2]))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            arr_15 [i_1] [i_3] = ((int) arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
            arr_16 [i_1] = ((arr_5 [i_1 - 2] [i_1 - 1]) * (arr_5 [i_1 - 2] [i_1 - 2]));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_11 [i_1] [i_1] [i_1]) : (4069957015U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)179)) && ((_Bool)1))))) : (arr_11 [i_1 - 2] [i_1 - 2] [i_3 - 1]))))));
        }
        var_22 = ((/* implicit */_Bool) arr_10 [i_1]);
    }
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_23 = ((/* implicit */int) (_Bool)1);
        var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_4])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4]))))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_9 [i_5 - 1])))) ? (arr_9 [i_5 + 1]) : ((+(4069957015U)))));
        arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_5])) || (((/* implicit */_Bool) min((arr_11 [i_5 - 2] [i_5] [i_5]), (((/* implicit */unsigned int) arr_13 [i_5] [i_5 + 1])))))));
        var_26 = ((/* implicit */int) min((var_26), (524385288)));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4069957037U)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned char)179))))) ? (arr_12 [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [i_5 + 1])) >> (((((/* implicit */int) arr_6 [i_5] [i_5 + 1])) - (54837))))))));
        arr_24 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_5 + 1] [i_5])), (524385285)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (1437636899)))));
    }
}
