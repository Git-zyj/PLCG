/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32777
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)1)))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_3] [i_2] [i_1] [i_0]) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (var_4)));
                        var_12 = ((/* implicit */short) arr_7 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]);
                        var_13 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min(((_Bool)1), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2952012073U)))))))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (arr_1 [i_2])));
                        var_15 &= ((/* implicit */unsigned int) arr_3 [i_1]);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        arr_10 [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_4 + 3] [(short)5] [i_1])) << ((((((_Bool)0) ? (379629348U) : (1046663621U))) - (1046663619U)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [10] [(_Bool)1] [i_2] [i_4] [(short)2])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0] [(short)11])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4] [(_Bool)1]))));
                        arr_11 [i_2] = ((/* implicit */_Bool) ((unsigned char) (unsigned char)197));
                    }
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((short) arr_3 [i_2]))), (((((/* implicit */_Bool) arr_4 [i_1] [9U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_2] [i_2] [i_1])))));
                }
            }
        } 
    } 
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_1)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned int) -98715140)), (379629348U)))))) : (var_0)));
}
