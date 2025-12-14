/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202185
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_1))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)61687))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)61684))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 1661535090))) & (((/* implicit */int) (signed char)(-127 - 1)))))) ? ((-(-575469834))) : ((~(((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (unsigned short)61677))))))));
        var_20 -= ((((((/* implicit */int) arr_6 [i_1 - 1])) - (((/* implicit */int) (unsigned char)0)))) > (((/* implicit */int) (unsigned char)255)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) arr_5 [i_2 - 1])))) & ((~(((/* implicit */int) arr_5 [i_2 - 2]))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)244)), (arr_8 [i_1 - 1])))), (((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1 - 2])))))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) var_11);
    var_24 = var_12;
    var_25 = ((/* implicit */unsigned short) var_13);
}
