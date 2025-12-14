/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34863
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_10 = ((unsigned int) arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_0 - 1]);
                                var_11 ^= ((/* implicit */signed char) min((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_2] [i_1 - 2] [(unsigned char)9] [i_2 - 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 4] [i_2 + 1] [i_3] [(short)10])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned short)12]))))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 - 2] [i_0 - 1] [8U] [i_1 - 4])) : (((/* implicit */int) min((arr_2 [(_Bool)1] [(_Bool)1]), (var_5))))))));
                                var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_6 [i_0 - 1] [i_2 - 2] [(unsigned short)8] [(unsigned short)8] [2U] [i_0]), (arr_6 [i_0 + 1] [i_2 - 1] [i_2] [i_2] [(unsigned short)4] [(short)0])))) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) min(((unsigned short)12480), (((/* implicit */unsigned short) (_Bool)1)))))));
                                arr_11 [i_0] [i_3] [i_2] [i_3] [i_3] [i_3] = (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [(short)8] [i_0] [i_4])) - (((/* implicit */int) var_0))))) ? (arr_9 [i_0 + 1] [i_2 + 1] [(unsigned char)5] [(unsigned char)5] [i_4] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_2 [(unsigned char)2] [(unsigned char)2])) : (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    arr_12 [3U] [i_1] [3U] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_0] [i_2 - 2])) ? (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_2 + 1]) : (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1] [i_2 + 1]))), (((/* implicit */unsigned int) max((arr_7 [i_0 - 1] [i_0 - 1] [i_2] [i_0 + 1] [i_2] [i_1 - 2]), (arr_7 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 2] [i_2] [i_1 - 3]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(var_6))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_4)) + (101)))))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((_Bool) min((var_9), (var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned short) ((short) ((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_7 [i_5] [i_5] [12U] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_5] [i_5] [(short)12] [i_5] [(_Bool)0] [i_5])))));
        var_16 = ((/* implicit */unsigned short) arr_0 [i_5]);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_17 = ((_Bool) max((((/* implicit */short) arr_3 [i_6] [i_6] [i_6])), (min(((short)-16645), (((/* implicit */short) (_Bool)1))))));
        var_18 &= ((/* implicit */short) arr_4 [(signed char)4] [(_Bool)1] [i_6]);
    }
}
