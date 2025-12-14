/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197191
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
    var_19 &= max(((unsigned char)186), (max(((unsigned char)110), (var_15))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max(((unsigned char)163), (arr_0 [i_0])))) : (((/* implicit */int) min((arr_1 [i_0 - 1] [i_0]), ((unsigned char)91))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) (unsigned char)31))));
        arr_5 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)109)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        arr_6 [i_0] = var_0;
    }
    for (unsigned char i_1 = 4; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            arr_12 [(unsigned char)6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2)))))));
            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_2]))));
            arr_13 [(unsigned char)17] [i_2 + 1] [i_2] = arr_0 [i_2];
            arr_14 [(unsigned char)17] [(unsigned char)17] = max((var_2), (arr_0 [i_1]));
            arr_15 [i_1] [i_2] = max((min(((unsigned char)82), ((unsigned char)63))), (((unsigned char) max((arr_10 [i_1] [i_1] [(unsigned char)5]), ((unsigned char)2)))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            arr_18 [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) min((var_11), (arr_10 [i_1] [i_3] [i_3])))) * ((~(((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1 - 2]))))) ? (((/* implicit */int) min(((unsigned char)15), (arr_16 [i_1])))) : (((/* implicit */int) var_5))))));
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_1 - 2] [i_1 - 2]), (arr_1 [i_1 + 2] [(unsigned char)0])))) ? (((/* implicit */int) ((unsigned char) (unsigned char)138))) : (((/* implicit */int) max((arr_11 [i_1 - 3]), ((unsigned char)12))))));
            arr_19 [i_3] = arr_8 [i_1 - 1] [i_1 + 2];
        }
        var_23 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) min((arr_16 [i_1]), ((unsigned char)64)))), (((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)173)) - (150)))))))));
    }
}
