/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213073
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)194)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)198))))) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned char)115))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (var_16)));
    var_21 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (unsigned char)151))));
            arr_6 [(unsigned char)6] [(unsigned char)6] |= ((unsigned char) arr_3 [i_1 + 2]);
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) (unsigned char)104))));
        var_23 = ((unsigned char) (unsigned char)32);
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2 - 3])) ? (((/* implicit */int) arr_4 [i_2 - 4])) : (((/* implicit */int) var_3)))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_18 [i_4] [i_3] [i_4] [(unsigned char)8] = arr_4 [i_2 - 4];
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 3] [i_2 - 4])) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) (unsigned char)88))));
                        var_26 = ((unsigned char) (unsigned char)194);
                        arr_19 [i_4] [i_4] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)237))));
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_4] [i_4 + 1]))));
                    }
                } 
            } 
        } 
    }
}
