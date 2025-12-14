/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43128
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
    var_17 = var_2;
    var_18 = var_0;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7)))) * (min((((/* implicit */int) (unsigned char)188)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
                var_19 = arr_6 [i_0] [i_1 - 1];
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = var_16;
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_12)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)68)) - (68)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)220))))) ? (((((/* implicit */int) arr_14 [i_2] [i_3])) >> (((((/* implicit */int) (unsigned char)188)) - (186))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) arr_10 [(unsigned char)6] [i_0] [(unsigned char)6]))));
                            arr_15 [i_0] [(unsigned char)9] = var_12;
                            arr_16 [i_0] [(unsigned char)2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)185)))))));
                            var_22 += ((/* implicit */unsigned char) min(((((+(((/* implicit */int) arr_14 [i_0] [(unsigned char)3])))) >> (((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_3] [(unsigned char)8])))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned char)8] [(unsigned char)8] [(unsigned char)5] [(unsigned char)5] [i_3] [i_3])) || (((/* implicit */_Bool) arr_2 [i_3]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
