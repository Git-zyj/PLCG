/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246036
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)61297)) : (((/* implicit */int) (signed char)118))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */int) (_Bool)1)), (-717986045))), (((/* implicit */int) var_11))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)-85);
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)6381)) % (arr_0 [i_1]))) << (((((/* implicit */int) (unsigned short)13198)) - (13198)))));
        }
        for (int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) arr_1 [i_3]);
            arr_15 [i_1] = ((/* implicit */_Bool) (unsigned char)3);
        }
        arr_16 [i_1] = ((/* implicit */int) var_9);
        var_17 += ((/* implicit */signed char) (unsigned short)52857);
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) * (((((/* implicit */int) ((((/* implicit */int) (signed char)-46)) == (((/* implicit */int) (unsigned short)13225))))) & (((((((/* implicit */int) (short)-5714)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))));
}
