/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245787
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (var_2)));
    var_16 = var_4;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) arr_8 [i_2] [i_1] [i_0])))))), (((((/* implicit */int) max((arr_3 [i_2]), (((/* implicit */short) var_8))))) - (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_9 [i_2] [i_1] [i_0]))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)32767)) & (((/* implicit */int) (short)32760)))), (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */int) (short)31010)) : (((/* implicit */int) (short)14322))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_3] [i_3]), (arr_13 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3])))) : (((((/* implicit */int) arr_13 [i_3] [i_3])) - (((/* implicit */int) arr_13 [i_3] [i_3]))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)219)))))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) var_14);
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned char) arr_16 [i_4]);
        var_21 = ((/* implicit */unsigned char) (short)-25890);
    }
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */short) arr_17 [i_5] [i_5]);
        arr_20 [i_5] = arr_12 [i_5];
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_5])), (var_12)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1))))))))) >> (((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((arr_16 [i_5]), (((/* implicit */short) var_8))))))) - (97))))))));
        arr_21 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (((/* implicit */int) (short)12336)) : (((/* implicit */int) var_0))));
    }
}
