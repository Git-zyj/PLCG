/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204570
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
    var_12 = ((/* implicit */unsigned short) min((1847836250U), (((/* implicit */unsigned int) 905476194))));
    var_13 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29687)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2447131030U)) && (((/* implicit */_Bool) var_5)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4080252092U) << (((((/* implicit */int) var_7)) - (16858)))))) && (((/* implicit */_Bool) 1847836265U))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)56179)), (((((/* implicit */_Bool) 1847836265U)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) (unsigned short)12210))))))), (min((max((arr_3 [i_0]), (var_2))), (((((/* implicit */_Bool) 2447131031U)) ? (1847836252U) : (2624999367U)))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3598746084U)) ? (((/* implicit */int) var_11)) : (min((98304), (((/* implicit */int) var_7)))))) & ((-(((1910910014) << (((((((/* implicit */int) var_5)) + (18448))) - (15)))))))));
                    var_15 = ((/* implicit */unsigned int) max((max((arr_0 [i_1 - 1]), (((/* implicit */int) (short)-128)))), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1847836252U)))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) 1059348499U)) ? (1910910014) : (((/* implicit */int) (unsigned short)53075)))))) & (((/* implicit */int) (short)-128))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) 8191)) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-574034775) : (((/* implicit */int) var_11))))) : (((var_6) | (((/* implicit */unsigned int) var_9)))))) & (var_2)));
}
