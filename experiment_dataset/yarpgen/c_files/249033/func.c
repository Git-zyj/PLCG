/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249033
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned char) min((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)113))))));
                                arr_13 [i_0] [(unsigned char)6] [i_3] [i_4] = arr_4 [i_1];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)14)))) | (((/* implicit */int) var_7)))) : ((~((+(((/* implicit */int) var_11))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_15))));
                        arr_17 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) (unsigned char)229)) | (((/* implicit */int) var_0))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) ^ (((((/* implicit */int) var_17)) + (((/* implicit */int) var_0)))))) < (((/* implicit */int) var_16))));
}
