/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221577
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [(unsigned char)17])), (max((((var_12) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), ((~(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) max((arr_7 [i_1 + 2] [i_1 + 1]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_3] [i_0] [i_0]))))))))));
                        var_18 = ((/* implicit */unsigned char) ((var_7) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        var_19 = var_13;
        var_20 = ((/* implicit */short) (-(((/* implicit */int) ((-2025829340) <= (((/* implicit */int) (_Bool)0)))))));
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_21 = arr_1 [i_5];
        var_22 &= ((/* implicit */int) var_8);
    }
    var_23 = ((/* implicit */signed char) var_9);
}
