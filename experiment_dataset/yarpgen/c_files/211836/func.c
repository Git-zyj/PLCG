/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211836
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
    var_16 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_11)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-23971))));
        var_18 = ((/* implicit */int) var_6);
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [(short)11] = var_2;
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_19 = (short)-12;
                    var_20 = ((/* implicit */unsigned char) ((short) 0));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((short) var_4));
    }
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_22 |= ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) var_11)))));
        arr_14 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((short) (short)-7843))), ((-(var_3))))))));
    }
    var_23 = ((/* implicit */unsigned char) (short)5042);
    var_24 |= (short)31;
}
