/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48418
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
    var_17 = (unsigned short)6655;
    var_18 = ((/* implicit */unsigned short) var_4);
    var_19 = (_Bool)0;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = arr_2 [(_Bool)1];
                        arr_13 [i_0] [i_1] [i_1] [i_3] = arr_6 [i_1] [i_1];
                        arr_14 [i_1] [(unsigned short)0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_3])) >> (((((/* implicit */int) (unsigned short)23031)) - (23024)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)42505)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)23039)) > (((/* implicit */int) arr_7 [i_3] [(unsigned short)9] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_2] [i_3])) && (arr_5 [i_1]))))))));
                    }
                    var_20 *= ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    } 
}
