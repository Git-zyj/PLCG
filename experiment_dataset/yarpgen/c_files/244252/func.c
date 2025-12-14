/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244252
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_10 &= ((unsigned char) ((unsigned char) var_3));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_1))) ^ (((((/* implicit */int) var_6)) | (((/* implicit */int) var_9))))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) - (((/* implicit */int) ((unsigned char) var_0)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_1))))))))));
                            arr_14 [i_5] [i_0] [(unsigned char)8] [i_5] [i_5] = ((unsigned char) (+(((/* implicit */int) var_5))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) ((unsigned char) var_6)))));
                        }
                        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)248))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_8))) * (((/* implicit */int) ((unsigned char) var_3)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            var_19 = ((unsigned char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_4))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((unsigned char) var_3)))));
                            arr_21 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] [i_0] [i_0 - 1] = var_6;
                        }
                        var_21 = ((/* implicit */unsigned char) max((var_21), (var_3)));
                    }
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((unsigned char) ((unsigned char) var_2));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) (unsigned char)148)))))));
                        arr_25 [(unsigned char)4] [i_0] = ((unsigned char) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_6))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) + (((/* implicit */int) var_1)))) / ((-(((/* implicit */int) var_6)))))))));
    }
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((((/* implicit */int) max((var_3), (((unsigned char) var_6))))), ((((-(((/* implicit */int) var_2)))) / ((+(((/* implicit */int) var_3)))))))))));
}
