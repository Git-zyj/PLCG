/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197125
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
    var_19 = ((unsigned char) var_18);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [12U]))) & (arr_0 [i_0 - 1]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 2] [i_0]))));
    }
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (min((arr_4 [i_1]), (((/* implicit */unsigned int) 225601620)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1270906544U)) ? (((/* implicit */unsigned int) -2147483635)) : (arr_0 [i_1 + 1])))) ? (((arr_4 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52973))))) : (arr_0 [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) (unsigned short)52973)));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (((int) 0U)) : (((/* implicit */int) var_14))))));
        var_23 = ((/* implicit */unsigned int) ((unsigned char) ((3727114836U) & (439643712U))));
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) (unsigned short)33988);
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_4])), (arr_12 [i_3] [8U] [i_4 - 1])))))))) | (((((/* implicit */_Bool) 4294967295U)) ? (((unsigned int) arr_1 [i_4] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511)))))));
            arr_15 [i_4 + 2] = arr_0 [i_3];
            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)52973))));
        }
        for (unsigned short i_5 = 3; i_5 < 8; i_5 += 3) 
        {
            var_26 = arr_0 [i_5 + 2];
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((unsigned int) arr_1 [i_3] [i_5 + 2])), (((/* implicit */unsigned int) var_18)))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((arr_4 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))))))));
            arr_22 [i_6] [i_6] [i_6] = ((/* implicit */int) arr_1 [i_6] [i_3]);
            arr_23 [i_3] [i_6] = ((((/* implicit */int) ((unsigned short) (unsigned char)62))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3] [i_6]))))));
            var_29 = var_10;
        }
        arr_24 [i_3] = ((/* implicit */unsigned char) arr_13 [i_3]);
    }
}
