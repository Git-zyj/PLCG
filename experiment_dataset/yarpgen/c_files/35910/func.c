/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35910
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) ((var_7) <= (0U))))));
        var_19 = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 3]));
        var_20 -= ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0 - 1]));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) ((arr_3 [8U]) + (1146895387U))))), ((-(max((479800015U), (arr_1 [17U])))))));
        var_22 ^= ((/* implicit */unsigned char) (~(((unsigned int) arr_4 [i_1 + 2] [i_1 - 2]))));
        var_23 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 134980340U))))));
        arr_5 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((((/* implicit */_Bool) 3148071934U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))))) : (var_5))), (var_11)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) (~(((unsigned int) arr_0 [i_2]))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3148071947U)) ? (3815167291U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84)))))) ? (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_1] [i_1])) ? ((+(var_0))) : (arr_6 [i_1 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_8)))));
                    arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) max((arr_7 [i_1] [i_1] [i_1]), ((unsigned char)246)));
                    var_26 = ((/* implicit */unsigned char) ((((unsigned int) (-(var_4)))) * (((((/* implicit */_Bool) (unsigned char)43)) ? (((unsigned int) arr_10 [i_3] [i_1] [i_1])) : (((479799990U) & (var_3)))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_4) : (4294967290U)));
}
