/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243799
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)215))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)54)) + (((/* implicit */int) (unsigned char)227))))) ? (((int) ((((/* implicit */_Bool) (unsigned char)22)) ? (var_4) : (((/* implicit */int) (unsigned char)36))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 &= ((/* implicit */int) var_5);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_1)) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1 + 2]))))) || (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_2]))) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
                            var_14 = ((/* implicit */int) min((var_14), ((~(((/* implicit */int) (unsigned char)230))))));
                            arr_9 [(unsigned char)21] [(unsigned char)5] [22] [(unsigned char)0] [i_2] [4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [12] [i_1 + 1] [i_3 + 1])) >= (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                arr_10 [(unsigned char)13] [i_0] [i_1] = ((unsigned char) (!(((/* implicit */_Bool) arr_6 [(unsigned char)16] [i_1] [i_0] [(unsigned char)18]))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)230)) << (((((/* implicit */int) (unsigned char)227)) - (207)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_7 [i_0] [i_4] [(unsigned char)11])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [1] [i_4 - 2])) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)48))))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (unsigned char)233)))), (((var_4) / (((/* implicit */int) arr_5 [i_0] [16] [i_4 - 1] [21])))))))));
                    arr_13 [(unsigned char)7] [i_0] [i_4] [i_4] = ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1 + 1] [i_0] [8]) - (arr_8 [i_0] [i_0] [i_1 + 2] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned char)6] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_8 [(unsigned char)5] [i_1 + 2] [3] [(unsigned char)15]) : (arr_3 [i_4 - 2]))));
                }
            }
        } 
    } 
}
