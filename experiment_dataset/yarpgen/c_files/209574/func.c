/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209574
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 += var_0;
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_3])) > (((/* implicit */int) arr_4 [i_0]))))), (arr_0 [i_2] [i_0])));
                        var_20 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4138768514361097898ULL)) ? (((((/* implicit */int) (unsigned short)648)) - (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned short)64888)))));
                        var_21 = ((/* implicit */unsigned int) ((((int) arr_1 [i_0])) - (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) (unsigned short)64883))))));
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) max((((unsigned short) ((unsigned short) 14307975559348453713ULL))), (((/* implicit */unsigned short) var_8))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)51709), ((unsigned short)6)))) & (((/* implicit */int) var_6))));
    }
    var_24 = ((/* implicit */unsigned short) (~(((unsigned int) (!(((/* implicit */_Bool) var_6)))))));
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)12878)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29608)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) ^ (18038247866938508245ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56388)) + (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) var_5)))))));
}
