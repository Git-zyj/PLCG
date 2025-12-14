/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242400
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((int) (~(var_15))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((min((arr_7 [i_1 - 2]), (((/* implicit */unsigned int) (unsigned char)23)))), (((3653376421U) + (arr_7 [i_1 + 2]))))))));
        var_19 -= ((/* implicit */unsigned int) arr_6 [i_1 - 2] [(_Bool)1]);
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    var_20 = ((((/* implicit */_Bool) ((arr_13 [i_1 + 1]) ? (((/* implicit */int) min(((unsigned char)131), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) (unsigned char)188))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) : (((((/* implicit */_Bool) 4149051708U)) ? (3886691119U) : (408276182U))));
                    var_21 = ((/* implicit */unsigned int) 8126464);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */_Bool) ((var_14) ^ (var_15)));
    var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 168739056U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
}
