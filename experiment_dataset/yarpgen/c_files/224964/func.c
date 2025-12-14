/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224964
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (_Bool)0)), (var_12)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)255))))));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)166)) ? ((~(((unsigned int) (short)12)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_11)), ((+(((/* implicit */int) var_6)))))))));
            arr_5 [6LL] [i_1] [i_1] &= ((/* implicit */_Bool) var_4);
            /* LoopSeq 2 */
            for (long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                var_21 = ((/* implicit */short) var_12);
                arr_9 [i_0] [14U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)15))) ? (arr_6 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_2 + 1])) ? (arr_6 [15] [i_0 + 1] [i_2 + 1]) : (arr_6 [i_0 - 2] [i_0 - 1] [i_2 - 1])))));
            }
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_22 = ((/* implicit */short) min((var_22), (min((((/* implicit */short) var_1)), (arr_11 [i_0] [i_1] [i_3])))));
                var_23 = ((/* implicit */unsigned int) var_4);
                var_24 = ((/* implicit */long long int) ((short) arr_1 [i_0]));
            }
        }
        var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((signed char) (short)-12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0]))))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */int) var_6)), ((-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1])))))))));
        var_27 = ((/* implicit */long long int) ((((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)12)))));
    }
    for (int i_4 = 3; i_4 < 21; i_4 += 2) 
    {
        var_28 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(3927236896919249036LL))))))) + (((int) (~(((/* implicit */int) (short)-6)))))));
        var_29 = ((unsigned char) ((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */long long int) arr_14 [i_4])) : (((((/* implicit */_Bool) arr_14 [i_4 - 1])) ? (arr_13 [i_4 - 1]) : (((/* implicit */long long int) arr_14 [i_4]))))));
    }
}
