/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201136
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
    var_12 = ((/* implicit */_Bool) (~(var_11)));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (unsigned short)48275)) : (((/* implicit */int) (short)-12999))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_2] [i_0])), (((((/* implicit */_Bool) (short)13017)) ? (((/* implicit */int) (unsigned short)28672)) : ((~(((/* implicit */int) (short)12995))))))));
                    arr_9 [(short)16] [i_0] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (+(arr_5 [(unsigned short)2] [i_1] [i_0 - 1] [i_0])))))));
                    arr_10 [(unsigned char)18] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) max((arr_2 [i_0] [(unsigned short)6]), (arr_2 [i_0] [2LL])))))));
                    arr_11 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (((-((~(((/* implicit */int) (_Bool)1)))))) ^ ((-(min((2072411652), (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_3] [i_4] |= ((/* implicit */unsigned int) (short)-32698);
                arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) arr_1 [i_3]);
            }
        } 
    } 
}
